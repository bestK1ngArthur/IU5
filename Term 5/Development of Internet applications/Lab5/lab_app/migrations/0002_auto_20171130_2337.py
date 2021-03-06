# -*- coding: utf-8 -*-
# Generated by Django 1.11.7 on 2017-11-30 23:37
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('lab_app', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='product',
            name='description',
            field=models.CharField(default='iPhone X is a smartphone designed, developed, and marketed by Apple Inc. It was announced on September 12, 2017, alongside the iPhone 8 and iPhone 8 Plus at the Steve Jobs Theater in the Apple Park campus. The phone was released on November 3, 2017.', max_length=1000),
            preserve_default=False,
        ),
        migrations.AddField(
            model_name='product',
            name='image_url',
            field=models.URLField(default='http://cdn.osxdaily.com/wp-content/uploads/2017/09/iphone-x-6-610x442.jpg', max_length=255),
            preserve_default=False,
        ),
    ]
