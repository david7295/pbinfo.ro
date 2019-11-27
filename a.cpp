void triplete(int a, int b, int c)

{

   bool afisat = false;

   int limita = c / 3 + 1;

   for (int ia = a; ia <= limita; ++ia)

       for (int ib = ia; ib <= (c - ia) / 2 + 1 && ib <= b; ++ib)

       {

           int ic = c - ia - ib;

           if (ia <= ib && ib <= ic && ic <= b)

             afisat = true, cout << '{' << ia << ',' << ib << ',' << c - ia - ib << "}\n";

   }

   if (!afisat)

       cout << "nu exista";

}
