from django.contrib import admin
from .models import Product, Review


@admin.register(Product)
class ProductAdmin(admin.ModelAdmin):
    pass


@admin.register(Review)
class ReviewAdmin(admin.ModelAdmin):
    pass