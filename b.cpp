int prim(int x)
{int d;
if(x<2) return 0;
else
    for(d=2;d*d<=x;d++) if(x%d==0) return 0;
return 1;

}
void P(int x[100],int n, int &s)
{if(n>0)
{if(prim(x[n-1])) s+=x[n-1];// functia prim= algoritm elementar care testeaza daca x[n-1] este prim
P(x,n-1,s); }
}
