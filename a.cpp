#include <iostream>using namespace std;
int v[100],n,i,aux,j;
int main()
{//in acest algoritm am folosit metoda sortarii prin insertie
    //fiind cea mai usoara si rapida,dupa parerea mea
    //pentru ca iti face vectorul deja ordonat,in orice
    //moment
    //ea consta in citirea primului element din vector
    //comparandu-l cu valorile introduse pana ajunge in
    //pozitia lui corecta
    cout<<"n=";
    cin>>n;
    cout<<"v[1]=";
    cin>>v[1];
     //citim primul vector si incepand de la al doilea
    for(i=2; i<=n; i++)
    {
        cout<<"v["<<i<<"]= ";
        cin>>v[i];    j=i;
    //daca elementul curent e mai mic ca cel din fata lui
    //si nu am ajuns la primul element,le interschimbam
    //ex: 9 6 12 3 8
    //il luam pe 9 si il comparam cu 6:observam ca 9  e mai
    //mare ca 6 si atunci inseamna ca il mutam pana ajunge
    //la pozitia lui iar 6 vine in locul lui 9 si tot asa
    //pana ajunge la pozitia sa
    //se observa ca pe masura ce parcurgi algoritmul
    //vectorul va fi mereu sortat la fiecare pas,fiind mai usor si rapid
   
    while(v[j]<v[j-1] && j>1)
    {
        aux=v[j];
        v[j]=v[j-1];
        v[j-1]=aux;
        j--;
    }
    }
cout<<"Vectorul sortat este ";
//incepand de la ultimul afisam vectorul in ordine descrescatoare
for(i=n;i>=1;i--)
    cout<<v[i]<<" ";
}
