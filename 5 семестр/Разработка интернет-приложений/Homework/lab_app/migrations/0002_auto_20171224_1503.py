# Generated by Django 2.0 on 2017-12-24 15:03

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('lab_app', '0001_initial'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='product',
            name='image_url',
        ),
        migrations.AddField(
            model_name='product',
            name='image',
            field=models.ImageField(default='static/product_images/default.jpg', upload_to='static/product_images'),
        ),
    ]
