from django.db import models
from django.conf import settings
from django.contrib.auth.models import User
# -*- coding: utf-8 -*-


class Product(models.Model):
    class Meta:
        db_table = 'lab_app_product'

    # Название товара
    name = models.CharField(max_length=255)

    # Описание товара
    description = models.CharField(max_length=1000)

    # Продавец
    seller = models.CharField(max_length=255)

    # Ссылка на картинку товара
    #image_url = models.URLField(max_length=255)
    image = models.ImageField(upload_to='lab_app/static/product_images',
                              default='lab_app/static/product_images/default.png')

    # Полный путь до картинки товара
    def image_path(self):
        return self.image.name.replace('lab_app/', '')

    # Короткое описание товара
    def short_description(self):
        return self.description[:126]

    def __str__(self):
        return ' '.join([
            self.name,
            ' from ',
            self.seller,
        ])


class Review(models.Model):
    class Meta:
        db_table = 'lab_app_review'

    # Пользователь, который оставил отзыв
    user = models.ForeignKey(User, on_delete=models.CASCADE)

    # Товар, под которым оставлен отзыв
    product = models.ForeignKey(Product, on_delete=models.CASCADE)

    # Текст отзыва
    description = models.CharField(
        max_length=500,
    )

    def __str__(self):
        return ' '.join([
            'review from user ',
            str(self.user.username),
        ])
