from django import forms
from lab_app.models import Review


class PostForm(forms.ModelForm):
    class Meta:
        model = Review
        # exclude = ['author', 'updated', 'created', ]
        fields = ['text']
        widgets = {
            'text': forms.TextInput(
                attrs={'id': 'post-text', 'required': True, 'placeholder': 'Say something...'}
            ),
        }