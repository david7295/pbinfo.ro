#include <stdio.h>
#include <math.h>

int main()

{

   int r,g,b;

   while(true){

   printf("\n\nIntroduceti o culoare in format RGB: ");

   scanf("%d %d %d",&r,&g,&b);

   

   if(r<=255 && g<=255 && b<=255 && r*g*b>=0){

    if(abs(r-g)<10 && abs(b-g)<10 && abs(b-r)<10){

     printf("Gri");

 }

 else{

  printf("Culoare");

 }

}

else
printf("Nu este culoare");

}
   return 0;

}
//Datele le introduci toateantr-un rand prin spatii ex(255 255 255)
