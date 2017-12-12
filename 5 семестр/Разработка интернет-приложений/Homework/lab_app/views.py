from django.shortcuts import render


from django.http import HttpResponse
from django.views.generic import View, ListView
from django.core.paginator import Paginator, EmptyPage, PageNotAnInteger

from lab_app.models import Product


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
        return render(request, 'product.html',  {"product": product})
