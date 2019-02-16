#include<stdio.h>
#include<stdlib.h>



struct uczen
	{
		int wiek;
		int wzrost;
		int semestr;
	};
	
/*struct Node
	{
		int Value;
		Node* Next;
	};
*/
	
typedef struct uczen uczen;
typedef struct Node Node;

int main(){
		
		//-------------------------------------------------------------------------
		//zad 1.1
		/*
		
		uczen *s1=(uczen*)malloc (sizeof(uczen));
		uczen *s2=(uczen*)malloc (sizeof(uczen));
		
		printf("podaj wiek");
		scanf("%d", &s1->wiek);
		
		printf("podaj wysokosc");
		scanf("%d", &s1->wzrost);
		
		printf("podaj semestr");
		scanf("%d", &s1->semestr);

	
		printf("\n wiek= %d" ,	s1->wiek);
		printf("\n wzrost= %d" ,	s1->wzrost );
		printf("\n semestr=%d" , s1->semestr );


		printf("\n podaj wiek");
		scanf("%d", &s2->wiek);
		
		printf("\n podaj wysokosc");
		scanf("%d", &s2->wzrost);
		
		printf("\n podaj semestr");
		scanf("%d", &s2->semestr);

	//____________ int areEqueal
		printf("\n wiek= %d" ,	s2->wiek);
		printf("\n wzrost= %d" ,	s2->wzrost );
		printf("\n semestr=%d" , s2->semestr );		
		
		if(s1->wiek==s2->wiek && s1->wzrost==s2->wzrost && s1->semestr==s2->semestr)
			{
				printf("sa takie same");
			}
			else
			{
				printf("sa rozne");
			}
		
		
		free(s1);
		free(s2);
		
		*/
		
		
		// Zad 1.2
		/*
		uczen *s=(uczen*)malloc (3*sizeof(uczen));
		
		int a;
		for( a=0 ; a<=2 ; a++)
			{
				printf("\nstudent=%d\n", a);
				scanf("%d", &s[a].wiek);
				scanf("%d", &s[a].wzrost);
				scanf("%d", &s[a].semestr);
				
			}
	
		for( a=0 ; a<=2 ; a++)
			{
				printf("\n student=%d\n", a);
				printf("\t wiek=%d", s[a].wiek);
				printf("\t wzrost=%d", s[a].wzrost);
				printf("\t semestr=%d", s[a].semestr);
			}
		free(s);
		
		*/
		
		
		//+++++++++++++++++++++++++++++++++++++++++++++==============+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		//========================================================================================================================================
		
		//Zad 2
		
		
		
		// Zad 3.1
		
		/*
		FILE *Plik ;
		
		int tabela[50];
		int a=0;
		
		Plik=fopen("numbers.txt", "w");
		
		printf("podaj liczby. Max 50liczb");
		
		for(;;)
			{
				scanf("%d", &tabela[a]);
				if(tabela[a]!=0)
					{
						fprintf (Plik, "%d", tabela[a]);
					}
				else 
					{
						break;
					}
				a++	;
			}
		
   		fclose (Plik);
   		printf("Plik zapisany");
		
		*/
	}
