from django.shortcuts import render


from django.http import HttpResponse
from django.views.generic import View, ListView

from lab_app.models import Product


# Create your views here.

class ListProductView(ListView):

    model = Product
    template_name = 'product_list.html'
    context_object_name = 'products'
    #paginate_by = 1
    #queryset = Product.objects.all()


class ProductView(View):
    def get(self, request, product_id):
        product = Product.objects.get(id=product_id)
        return render(request, 'product.html',  {"product": product})
