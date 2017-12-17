from django.contrib.auth import authenticate
from django.contrib.auth.models import User
from django.contrib.auth.views import logout, login
from django.shortcuts import render, redirect

from django.http import HttpResponse
from django.views.generic import View, ListView
from django.core.paginator import Paginator, EmptyPage, PageNotAnInteger

from lab_app.models import Product, Review


# Create your views here.

class ListProductView(ListView):

    model = Product
    template_name = 'product_list.html'
    context_object_name = 'products'
    paginate_by = 3

    elements_in_row = 3

    products = Product.objects.all()

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

    queryset = rows


class ProductView(View):
    def get(self, request, product_id):
        product = Product.objects.get(id=product_id)

        elements_in_row = 2
        reviews = list(Review.objects.filter(product_id=product_id))

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

        return render(request, 'product.html',  {"product": product, "reviews": rows})


def create_user(request):
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


def login_user(request):
    logout(request)
    if request.POST:
        username = request.POST['username']
        password = request.POST['password']

        user = authenticate(username=username, password=password)
        if user is not None:
            login(request, user)
            return redirect("/")

    return redirect("/invalidUser")


def logout_user(request):
    user = request.user
    logout(request)
    return redirect("/")
