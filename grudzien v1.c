#include<stdio.h>
#include<stdlib.h>

void newline()
	{
		printf("\n");
	}
	
int IsSorted(int *a,int s)
	{
		int licznik=0;
		while(licznik!=s-1)
		{
			if(a[licznik]<=a[licznik+1])
		{
		licznik++;
		if(s==s-1)
		return 1;
		}
		else 
		{
			return 0;
			break;
		}
			
		}
	}
	
	
	
void printBackwards(int *a, int s)
	{
		int y=1;
		while(y<=s)
			{
				printf("\n%d", a[s-y]);
				y++;
					
			}
	}


void printDots(int *T,int s)
{
				
	int d=0;
	int c=0;
	while(d != s)
	{
		if(T[d]=='\0') break;
		printf("\n");
		while(c < T[d])
			{
				printf(".");
				c++;
			}
			
		c=0;
		d++;
						
	}
}

int Sum(int *a, int s)
	{
		int y=0;
		int suma=0;
		while( y != s)
			{
				suma=suma+a[y];
				y++;
			}
		return(suma);
	}


int getLenght(char *str)
	{

		int y=0;
		int x=0;
		int suma1=0;
		int suma2=0;
					
		while(1)
			{
				suma2=suma1;				//wartosc decymalna ciagu znakow
				suma1=suma1+str[y];			//wartosc decymalna ciagu znakow po dodaniu nastêpnego znaku
				if(suma2==suma1) break;		// jeseli wartosci sum sa takie same oznacza to ze nastepna pozycja jest pusta i przerywa petle
				x++;
				y++;
			}
		return(x);
		
	}


void Reverse(char *str)
	{
	
		int y=getLenght(str);
		while(y+1 != 0)
			{
				printf("%c",str[y-1]);
				y--;
						
			}		
		newline();
	}

int containsDigits(char *str)
	{
		int y=getLenght(str);
		while(1)
		if(str[y-1]>= '0' && str[y-1]<= '9')
			{
			//	printf("\n%d\n",y);
				return(1) ;
				break;
			}
			
		else
		{
			if(y==0)
				{
					return(0);
					break;
				}
			y--;
		}

	}
	
	
int getLenghtint(int *str) //funkcja pomocnicza-nie powiazana z zadnym zadaniem
	{

		int y=0;
		int x=0;
		int suma1=0;
		int suma2=0;
		while(1)
			{
				suma2=suma1;				//wartosc decymalna ciagu znakow
				suma1=suma1+str[y];			//wartosc decymalna ciagu znakow po dodaniu nastêpnego znaku
				if(suma2==suma1) break;		// jeseli wartosci sum sa takie same oznacza to ze nastepna pozycja jest pusta i przerywa petle
				x++;
				y++;
			}
		return(x);
		printf("%d\n",x);
	}
	
	
int AreArraysIdentical(int *array1, int *array2)	
	{
				int y=0;
				int B=getLenghtint(array1);
				
				if( B == getLenghtint(array2) )
					{
						
						while(y !=B+1)
							{
								
								if(array1[y] != array2[y])
									{
										printf("sa rozne");
										break;
									}
								if(y == B) printf("sa takie same");			
								y++;
							}
					}
				
				else
					{
						printf("Tablice maja rozna ilosc elementow");
					}
	}
	


//#################################################################################################################################################
int main()
{
	
	//Zad 1.1 Utworzyc tablice int 5 elementowa,pobrac 5 elemetow i dodac do tablicy. wyswietlic najwiekszy element
	/*
	
	int x=5;
	int y=0;
	int Max=0;
	int Tab[5];
	while(y!=5)
	{
		scanf("%d", &Tab[y]);
		
		if(Tab[y]>Tab[Max])
		Max=y;
		
		y++;
		
	}
	printf("Najwieksza liczba=%d", Tab[Max]);
	
	*/


				//___________________________________________________________________________________________________________	
				//Zad 1.2 wyswietli tablice z zadania 1.1 od poczatku i od konca (dwie petle)
				/*
				
				y=0;
				
				while(y!=5)
				{
					printf("%d \n", Tab[y]);
					y++;
				}
				
				
				while(y!=0)
				{
					printf("\n%d", Tab[y-1]);
					y--;
					
				}
				*/
				
				
	
	
	
	//______________________________________________________________________________________________________________________________________
	//Zad 1.3 Napisaæ algorytm sprawdzaj¹cy czy tablica jest posortowana niemalejaco
	
	/*
	
	y=0;
	
	while(y!=x-1)
	{
		if(Tab[y]<=Tab[y+1])
		{
			y++;
			if(y==4)
			printf("tablica jest posortowana niemalejaca");
		}
		else 
		{
			printf("Tablica nie jest posortowana niemalejaco");
			break;
		}
		
	}
	
	*/	
	
	
	
	
	
	
				//_______________________________________________________________________________________________________________________________
				//Zad2.1	Utworzyæ metode int IsSorted(int*,int) sprawdzajac¹ czy tablica jest posortowana niemalejaco (zadanie 1.3)
				/*
				
				if (IsSorted(Tab , x)==0)
				printf("\n nie posortowane");
				else
				printf("\n posortowane");
				
				*/
				
				
	//__________________________________________________________________________________________________________________________________________
	//Zad 2.2 Utworzyc metodê void printBackwards slozaca dp wypisania tablicy od konca
	/*
	
	printBackwards(Tab,x);
		
	*/			
	
	
				//______________________________________________________________________________________________________________________
				//Zad 2.3 Utworzyc printDots wyswietlajaca tyle kropek ile jest w tablicy tab[] = {3,2,5,4}
				
				/*
				
				int tablica[] = {3,2,5,4};
				printDots(tablica, 4);
				
				*/
				
				
	//___________________________________________________________________________________________________________________________________
	// Zad2.4 Utworzyc metose int Sum liczaca sume elementów (zrobilem na przykladzie tablicy z pierwszego zadania)
	
	//		printf("\n suma=%d \n", Sum(Tab,x)); //odwoluje sie do tablicy 5 elementowej z Zad 1.1
	
	
	
	
	
	
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	// ZADANIE 3			
				
	/*			// Zadanie 3.4 do lancucha zastosuj wszystkie metody
		char str[30];				
		printf("podaj ciag maksymalnie 30 znakow \n");
		scanf("%s", &str); 									
					
					
				//Zad 3.1 Napisac metode Int getLenght liczacy dlugosc lancucha W³asnorecznie bez uzycia null-terminatora i srtlen() 
				printf("\n ilosc znakow=%d \n", getLenght(str));
				
	//Zad 3.2 napisz metode Reverse wypisujaca lancuch od konca bez uzycia srtlen			
	Reverse(str);  
	
				//Zad 3.3 napisac metode ktora sprawdzi czy w srtingu sa cyfry
				printf("0-nie ma cyfr,1-sa cyfry \n --%d-- \n", containsDigits(str));

				
	*/
	
	//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	//ZADANIE 4
	
				//Zadanie 4.1 pobrac liczbe n , zaalokowac paniec n elementow int i pobrac je od uzytkownika. Wykonac metode z zadania 2.2
				/*	
					
					int *tabela;
					int size;
					int y=0;
					scanf("%d", &size);
					tabela = (int *)malloc(sizeof(int) *size);
					
					printf("podaj %d liczb(y)\n",size);
					
					while(y != size)
						{
							scanf("%d", &tabela[y]);
							y++;
						}
					printBackwards( tabela , size );	
					free(tabela);			
	
				*/
				
				
				
				
	//____________________________________________________________________________________________________________________________
	//Zad 4.2 Pobrac liczbe n ,zaalokowac n-elemen int i pobrac od uzytkownika .zaalokowac druga tabele w ktorej beda elementy ujemne z pierwszej tabeli
	
	/*
	int *tabela1;
	int *tabela2;
	int size1;
	int y=0;
	int x=0;
	int size2=0;
	scanf("%d", &size1);
	tabela1 = (int *)malloc(sizeof(int) *size1);
					
	printf("podaj %d liczb(y)\n",size1);
					
	while(y != size1)
		{
			scanf("%d", &tabela1[y]);
			
			if(tabela1[y]<0)
			size2++;
			y++;
		}
		
	printf("norzmiar drugiej tabeli= %d",size2);
	
	tabela2 = (int *)malloc(sizeof(int) *size2);
	
	y=0;
	while(y != size1)
		{			
			if(tabela1[y]<0)
				{
					tabela2[x]=tabela1[y];
					x++;
				}
			y++;
		}	

	free(tabela1);
	free(tabela2);
	*/
	
			
			
				//________________________________________________________________________________________________________________________
				//Zad 4.3 napisz metode AreArraysIdentical sprawdzajaca czy tablice sa takie same (dlugosc i elementy)
				
				/*
				int array1[20] = {1,3,5,7,9,5};
				int array2[20] = {1,3,5,4,9,5};
					
				AreArraysIdentical(array1,array2);
				*/
				
					


}
