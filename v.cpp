void Trim(char s[101])

{

while(s[0]==' ')

 strcpy(s,s+1);

while(s[strlen(s)-1]==' ')

 s[strlen(s)-1]='\0';

}
