#include <iostream>

using namespace std;

int main()

{

   int n = 19, nr = 3;  //citeste din fisier N si NR

   //Citeste cele N numere de pe linia 2

   int v[n] = {1, 0, -1, 0, -1, 1, 0, -1, 1, 1, -1, 1, 0, 1, -1, 1, 0, 1, -1};

   int ap[100];

   

   //initializam elementele din vectorul de numarare cu 0

   for(int j=0;j<100;j++)

   {

       ap[j] =0;

   }

   //transformam din binare in zecimale

   string nrTemp="";

   for(int i = 0;i<n;i++)

   {

       if(v[i] != -1)

           nrTemp+=v[i];

       else

       {

           

           int cnt = nrTemp.length()-1;

           int nr = 0;

           int pow = 1;

           

           for(int z = nrTemp.length()-1;z>=0;z--)

           {

               pow = 1;

               for(int j =0;j<cnt-z;j++)

                       pow*=2;

                       

               nr+=(int)(nrTemp[z]) * pow;

           }

           ap[nr] ++;

           nrTemp="";

       }

   }

   

   //vedem care este numarul maxim de aparitii

   int maxAparitie=0;

   

   for(int j=100;j>=0;j--)

       {

          if(maxAparitie < ap[j])

               maxAparitie = ap[j];

       }

   

   //Afisam primele nr numere descrescator dupa nr de aparitie si descrescator daca au acelasi nr de aparitie

   int cnt=0;

   for(int i = maxAparitie;i>=1 && cnt<nr;i--)

  {

       for(int j=99;j>=0 && cnt<nr;j--)

       {

          if(ap[j] == i)

          {

               cout<<j<<" "<<ap[j]<<endl;

               cnt++;

          }

       }

   }

   

   return 0;

}
