#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sort(char** tab, int N)
{
	int i;
	int j;
	char* tmp;
	for(i=1; i<N; i++)
	{
		tmp=tab[i];
		j=i-1;
		while(j>=0 && strcmp(tab[j],tmp) > 0)
		{
			tab[j+1]=tab[j];
			j--;
		}
		tab[j+1]=tmp;
	
	}
}

void print(char* tab[], int N)
{
	int i=0;
	for(i=0; i<N; i++)
	printf("%s\n", tab[i]);
}
int main(int argc, char *argv[]) {
	int size = 3;
	char* tab[]={ "mama", "abazur", "cyrk"};
	printf("przed sortowaniem \n");
	print(tab,size);	
	sort(tab,size);
	printf("\n Po sortowaniu przez wstawienie: \n");
	print(tab,size);
	return 0;
}
