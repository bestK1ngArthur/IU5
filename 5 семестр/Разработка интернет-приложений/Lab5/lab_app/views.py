# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.shortcuts import render

from django.http import HttpResponse
from django.views.generic import View, ListView

from lab_app.models import Product


def function_view(request):
    return HttpResponse('response from function view')


class ListProductView(ListView):

    model = Product
    template_name = 'product_list.html'


class ProductView(View):
    def get(self, request, product_id):
        product = Product.objects.get(id=product_id)
        return render(request, 'product.html',  {"product": product})
