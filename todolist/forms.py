from django import forms 

class todolistForm(forms.Form):
    text= forms.CharField(max_length=45,
    widget=forms.TextInput(
        attrs= {'class':'form-control','placeholder':'Enter todoitems e.g Grocery Shopping','aria-label':'Todo',
           'aria-describeby':'add-btn'  
        } ) )