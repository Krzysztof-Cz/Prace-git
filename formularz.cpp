#include <iostream>

using namespace std;

int main()
{
    cout<<"Program K.Czepurko\n\n";
    cout<< "Formularz"<<endl<<endl;
    cout<<"Podaj swoje imie: ";
    char imie[255];
    cin>>imie; //
    char nazwisko[255];
    cout<<"Podaj swoje nazwisko: ";
    cin>>nazwisko;
    short int wiek;
    cout<<"Podaj wiek: ";
    cin>>wiek;
    cout<<"Podaj swój wzrost w [cm]:";
    float wzrost;
    cin>>wzrost;

    cout<<"\n\nPrzekazane Dane:\n";

    cout<<"Imie: "<<imie<<endl<<"Nazwisko: "<<nazwisko<<endl<<"Wiek: "<<wiek<<endl<<"Wzrost w [m]: "<<wzrost<<endl<<endl;
    cout<<"Potwierdz Enter aby przekazac dane"<<endl;
    cin.get();

    return 0;
}
