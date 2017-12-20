"""Lab6 URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/2.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.conf.urls import url
from django.contrib import admin

from lab_app.views import ProductView, ListProductView, login_user, logout_user, create_user, create_review

urlpatterns = [
    url(r'^admin/', admin.site.urls),
    url(r'^product/(?P<product_id>\d+)', ProductView.as_view()),
    url(r'^$', ListProductView.as_view(), name='base_template'),
    url(r'^signup/$', create_user, name='signup'),
    url(r'^login/$', login_user, name='login'),
    url(r'^logout/$', logout_user, name='logout'),
    url(r'^product/create_review/$', create_review, name='create_review'),
]