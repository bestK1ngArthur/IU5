from django.db import models


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

    def short_descrtion(self):
        return self.description[:140]

    def __str__(self):
        return ' '.join([
            self.name,
            ' from ',
            self.seller,
        ])
