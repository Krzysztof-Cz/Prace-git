#include<iostream>
using namespace std;

class element
{
    public:
    int wartosc;
    class element *next;
    friend class lista;
};

class lista
{
    public:
    element *first;
    element *last;
    lista()
    {first=last=NULL;}

    int pustaLista()
    {return(first==NULL);}
    void wstaw(int x)
    {
        element *nowy = new element;
        nowy->wartosc=x;
        nowy->next=NULL;

        if (first==NULL)
        {
        first=last=nowy;
        }
        else
        {
        last->next=nowy;
        last=nowy;
        }
    }

    int odloz(int &x){
    if (last==first)
    {if (first!=NULL)
        {
        x=first->wartosc;
	     cout<<"wyjeto";
	     delete first;
	     first=last=NULL;
	     return 1;
        }
    }
    else
    {
        element *pomoc=first;
        x=first->wartosc;
        first=first->next;

        delete pomoc;
        return 1;
    }
   return 0;
}
};





int main()
{
   lista l;
   int wybor, liczba, kontrola;

   for (;;)
    {
        cout<<"Wybierz:"<<endl<<endl;
        cout<<"1 - Zapis do kolejki"<<endl;
        cout<<"2 - Wczytanie z kolejki"<<endl;
        cout<<"0 - Wyjscie"<<endl;
        cin>>wybor;

        switch (wybor)
        {
        case 1:
            {cout<<"Wprowadz wartosc do wstawienia"<<endl;
                cin>>liczba;
            l.wstaw(liczba);
            break;}
        case 2:
            {if (!l.pustaLista())
		    {
		        kontrola=l.odloz(liczba);
            if (kontrola)
            {
			     cout<<"Pobrana wartosc to: "<<liczba<<endl;}
            else
            {
			     cout<<"Nie udalo sie wczytac pozycji"<<endl;
            }
		    }
		    else
		      {cout<<"Kolejka pusta"<<endl;}
            break;
	       }
        case 0:
	       {
		  break;
	       }
        default:
	       {cout<<"Zla wartosc"<<endl;
		  break;
	       }
        }
        if (!wybor) break;
    }

    system("pause");
    return 0;
}


