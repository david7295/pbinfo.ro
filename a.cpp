#include <iostream>
#include <cstring>
using namespace std;
int main(){   
  char s[256],ma[128]=""; 
  cin.get(s,256); 
  for(unsigned int i=0;i<strlen(s);i++)  
    for(unsigned int j=i+1;j<strlen(s);j++)    { 
      char cuv[256]="";   
      strncat(cuv,s+i,j-i);   
      if(strstr(s+j,cuv)!=0)   
        if(strlen(cuv)>strlen(ma)||strlen(cuv)==strlen(ma)&&strcmp(cuv,ma)<0)      
          strcpy(ma,cuv); }  
  cout<<ma;   
  return 0;
}
