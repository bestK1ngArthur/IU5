from django.db import models
from django.contrib.auth.models import User


# -*- coding: utf-8 -*-
# Create your models here.

class Product(models.Model):
    name = models.CharField(
        max_length=255,
    )
    description = models.CharField(
        max_length=1000,
    )
    seller = models.CharField(
        max_length=255,
    )
    image_url = models.URLField(
        max_length=255
    )

    def short_description(self):
        return self.description[:126]

    def __str__(self):
        return ' '.join([
            self.name,
            ' from ',
            self.seller,
        ])


class Review(models.Model):
    user_id = models.IntegerField()
    product_id = models.IntegerField()
    description = models.CharField(
        max_length=500,
    )

    def username(self):
        user = User.objects.get(id=self.user_id)
        return user.username

    def __str__(self):
        return ' '.join([
            'review from user ',
            str(self.user_id),
        ])
