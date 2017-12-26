from django.conf.urls import url
from django.contrib import admin

from lab_app.views import ProductView, ListProductView, AddProductView, \
    SignUpView, LoginView, LogoutView, create_review, AboutView

urlpatterns = [
    url(r'^$', ListProductView.as_view()),
    url(r'^page=(?P<page>\d+)', ListProductView.as_view()),
    url(r'^product/(?P<product_id>\d+)', ProductView.as_view()),
    url(r'^product/create_review/$', create_review, name='create_review'),
    url(r'^product/add_product/$', AddProductView.as_view()),
    url(r'^signup/$', SignUpView.as_view()),
    url(r'^login/$', LoginView.as_view()),
    url(r'^logout/$', LogoutView.as_view()),
    url(r'^about/', AboutView.as_view()),
    url(r'^admin/', admin.site.urls),
]
