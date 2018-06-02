from django import forms
from lab_app.models import Review, Product
from django.contrib.auth.models import User

# TODO: Перенести создания форм в джанговские классы


# Форма регистрации
class SignUpForm(forms.ModelForm):
    class Meta:
        model = User
        widgets = {
            'text': forms.TextInput(
                attrs={'id': 'post-text', 'required': True, 'placeholder': 'Say something...'}
            ),
        }


# Форма авторизации
class LoginForm(forms.ModelForm):
    class Meta:
        model = User
        widgets = {
            'text': forms.TextInput(
                attrs={'id': 'post-text', 'required': True, 'placeholder': 'Say something...'}
            ),
        }


# Форма добавления продукта
class AddProductForm(forms.ModelForm):
    class Meta:
        model = Product
        widgets = {
            'text': forms.TextInput(
                attrs={'id': 'post-text', 'required': True, 'placeholder': 'Say something...'}
            ),
        }


# Форма создания отзыва
class PostReviewForm(forms.ModelForm):
    class Meta:
        model = Review
        fields = ['text']
        widgets = {
            'text': forms.TextInput(
                attrs={'id': 'post-text', 'required': True, 'placeholder': 'Say something...'}
            ),
        }

