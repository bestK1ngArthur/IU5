from django.contrib.auth import authenticate
from django.contrib.auth.models import User
from django.contrib.auth.views import logout, login
from django.shortcuts import render, redirect

from django.http import HttpResponse
from django.views.generic import View, ListView

from lab_app.models import Product, Review

from django.views.decorators.csrf import csrf_exempt
import json
import math

# TODO: Добавить проверку на superuser для отображения кнопки 'Добавить продукт'


# Список продуктов
class ListProductView(ListView):

    model = Product
    template_name = 'product_list.html'
    context_object_name = 'products'
    paginate_by = 3

    def get(self, request, page=1):

        # Количество продуктов на странице
        elements_on_page = 9

        # Количество продуктов в строке
        elements_in_row = 3

        products = Product.objects.all()
        pages_count = math.ceil(len(products) / elements_on_page)

        start_index = (int(page) - 1)*elements_on_page
        end_index = start_index + elements_on_page
        products = products[start_index:end_index]

        index = 1
        rows = []
        row = []
        for product in products:
            row.append(product)

            if index == elements_in_row:
                rows.append(row)
                row = []
                index = 1
            else:
                index += 1

        if len(row) > 0:
            rows.append(row)

        return render(request, 'product_list.html',  {"products": rows, "page": page, "pages_count": pages_count})


# Страница добавления продукта
class AddProductView(View):

    def post(self, request):
        if request.POST:
            name = request.POST['productName']
            description = request.POST['productDescription']
            seller = request.POST['productSeller']
            image = request.FILES['productImage']

            product = Product(name=name, description=description, seller=seller, image=image)
            product.save()
            if product is not None:
                return redirect("/")

        return redirect("/invalidProduct")


# Страница с информацией о продукте и отзывами
class ProductView(View):

    def get(self, request, product_id):

        elements_in_row = 2
        product = Product.objects.get(id=product_id)
        reviews = Review.objects.filter(product_id=product_id)
        reviews_count = len(reviews)

        index = 1
        rows = []
        row = []
        for review in reviews:
            row.append(review)

            if index == elements_in_row:
                rows.append(row)
                row = []
                index = 1
            else:
                index += 1

        if len(row) > 0:
            rows.append(row)

        if len(rows) == 0:
            rows = None

        return render(request, 'product.html',  {"product": product, "reviews": rows, "reviews_count": reviews_count})


# Страница регистрации
class SignUpView(View):

    def post(self, request):
        logout(request)
        if request.POST:
            user = User.objects.create_user(
                username=request.POST['username'],
                password=request.POST['password'],
                email=request.POST['email']
            )

            if user is not None:
                login(request, user)
                return redirect("/")

        return redirect("/invalidUser")


# Страница авторизации
class LoginView(View):

    def post(self, request):
        logout(request)
        if request.POST:
            username = request.POST['username']
            password = request.POST['password']

            user = authenticate(username=username, password=password)
            if user is not None:
                login(request, user)
                return redirect("/")

        return redirect("/invalidUser")


# Страница выхода
class LogoutView(View):

    def post(self, request):
        logout(request)
        return redirect("/")


# Создание и сохранение отзыва
@csrf_exempt
def create_review(request):
    if request.method == 'POST':
        review_text = request.POST.get('review_text')
        product_id = request.POST.get('product_id')

        # Создаем отзыв и сохраняем в БД
        user = User.objects.get(id=request.user.id)
        product = Product.objects.get(id=product_id)
        review = Review(description=review_text, user=user, product=product)
        review.save()

        # Формируем json с отзывом для обновления страницы
        response_data = dict()
        response_data["review_description"] = review.description
        response_data["product_id"] = review.product_id
        response_data["user_name"] = review.user.username
        response_data["reviews_count"] = int(request.POST.get('reviews_count')) + 1

        return HttpResponse(
            json.dumps(response_data),
            content_type="application/json"
        )
    else:
        return HttpResponse(
            json.dumps({"nothing to see": "this isn't happening"}),
            content_type="application/json"
        )


class AboutView(View):

    def get(self, request):

        # ..

        return render(request, 'about.html')
