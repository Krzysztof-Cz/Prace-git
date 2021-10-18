#include <iostream>
using namespace std;

// Sortowanie Krzysztof Czepurko

int main()
{        int n;
    cout<<"Podaj ilosc pozycji:";
    cin>>n;
        int tab[n];

    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" Pozycja: ";
        cin>>tab[i];
    }
        int max=tab[0];

    for(int i=0;i<n;i++)
    {
        if(max<tab[i])
      {
          max=tab[i];
      }
    }
//------
        int sort[n];
        int min;
        int a;
    for(int k=0;k<n;k++)
    {
        min=max;
        a=k;
        for(int i=0;i<n;i++)
    {
        if(min>tab[i])
        {
            min=tab[i];
            a=i;
        }
    }
        tab[a]=max;
        sort[k]=min;
    }
//------
    cout<<"Posortowane pozycje :";
    for(int i=0;i<n;i++)
    {
        cout<<sort[i]<<endl;
    }

    return 0;
}
