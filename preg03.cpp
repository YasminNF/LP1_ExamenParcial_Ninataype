#include <stdio.h>
#include <windows.h>
#include <string.h>
 
int main()
{
     char a[10];
     int x, z, espacios=0, letras=0;
     printf("escriba una frase: \n");
     scanf("%[^\n]", &a);
     z=strlen(a);
     for(x=0;x<=z;x++)
     {
     	if (a[x]==' ')
     	{
     		espacios++;
		 }
	 }
	 letras =z-espacios;
	 printf("hay %d espacios en esta frase", espacios);
	 printf("hay %d letras en esta frase. \n", letras);
     system("pause");
}
