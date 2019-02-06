#include <stdio.h>



void NewLine() 
	{
		printf("\n");
	}

void NewLines(int count)
	{
		for(count; count>0 ; count--)
		{
			printf("\n");
		}
	}

void WriteBiggerNumber(int x,int y)
	{
		if(x>y)
			printf("x wieksze x=%d", x);
		else
			printf("y wieksze y=%d", y);
	}
	
int Multiply(int x,int y)
	{
		return(x*y);
	}







int main ()
{
	


	/* 
	//_____________________________________________________________________________________________________________________	
	//1.1/1.2-(w przypadku C zadania sie pokrywaj¹)zadeklarowac int char float i wyswietlic na ekranie/wyswietlic zmienna typu int	
	
	int x=15;
	float z=2.3;
	char y=x;
	
	printf(" char=%c\n float=%.1f\n int=%d\n" , y , z, x);
	*/
	
	
		
			/* 
			//__________________________________________________________________________________________________________________________ 
			//1.3 pobierz t i wyswietl jego kwardat
			
			int t;
			printf("podaj t=");
			scanf("%d", &t);
			printf("x=%d", (t*t));
			
			*/
	
	
	
	/* 
	//_______________________________________________________________________________________________________________
	//1.4 pobrac x i sprawdzic czy jest <,>,= 0
	
	int x;
	printf("podaj x=");
	scanf("%d", &x);
	
	if(x>0)
		printf("x jest wieksze od 0");
		
		else if(x<0)
			printf("x jest mniejsze od 0");
			else
				printf("x jest rowne 0");
				
	*/	
	
	
	
			/*
			//_________________________________________________________________________________________________________
			//1.5 pobrac 3 liczby i zprawdzic ktora jesn tajwieksza		
			int x1 , x2 , x3 ;
			
			printf("liczby powinny byc rozne\n ");
			
			printf("podaj x1=");
			scanf("%d", &x1);
			
			printf("podaj x2=");
			scanf("%d", &x2);
			
			printf("podaj x3=");
			scanf("%d", &x3);
			
			if(x1>x2)
				if(x1>x3)
					printf("x1 jest najwieksze");
				else
					printf("x3 jest najwieksze");
			else
				if(x2>x3)
					printf("x2 jest najwieksze");
				else
					printf("x3 jest najwieksze");
					
			*/
			
	
	
	
	/*
	//_________________________________________________________________________________________________________________________________
	//1.6 prosty kalkulator, 2liczby,podstawowe operatory,menu
	
	float x1 , x2 ;
	int operacja;
			
	printf("podaj x1=");
	scanf("%f", &x1);			

	printf("podaj x2=");
	scanf("%f", &x2);
	
	printf("Wybierz operacje: \n 1-dodawanie \n 2-odejmowanie \n 3-mnozenie \n 4-dzielenie \n");
	
	scanf("%d", &operacja);
	
	switch(operacja)
		{
			case 1:printf("dodawanie %.2f", (x1+x2)) ; break;
			case 2:printf("odejmowanie %.2f", (x1-x2)) ; break;
			case 3:printf("mnozenie %.2f", (x1*x2)) ; break;
			case 4:printf("dzoelenie %.2f", (x1/x2)) ; break;
			default :printf(" \n\nwidzisz w MENU liczbe %d ? bo ja nie... uruchom ponownie program ", operacja);break;
			
		}
	
	*/
	
	
	
	//----------------------------------------------------------------------------------------------------------------------------------
	//===================================================================================================================================
	// ZADANIE NR 2
	
	/*
	// Zadanie 2.1 petla while, jezeli podana liczba rowna 0 to zakonczyc program ,jezeli nie to wyswietlic wyswietlic
	int x;
	scanf("%d",&x);
	while(x!=0)
	{
		printf("x=%d",x);
		break;
	}
	
	
	*/
	
	
	
	
			/*
			//__________________________________________________________________________________________________
			//Zad2.2 ulepsz wczesniejszy kalkulator, niech sie restartuje az powiesz wystarczy...	
			
			float x1 , x2 ;
			int operacja;
			
			while(operacja!=9)
			{
		
			
			
					
			printf("podaj x1=");
			scanf("%f", &x1);			
		
			printf("podaj x2=");
			scanf("%f", &x2);
			
			printf("Wybierz operacje: \n 1-dodawanie \n 2-odejmowanie \n 3-mnozenie \n 4-dzielenie \n");
			
			scanf("%d", &operacja);
			
			switch(operacja)
				{
					case 1:printf("dodawanie %.2f \n", (x1+x2)) ; break;
					case 2:printf("odejmowanie %.2f \n", (x1-x2)) ; break;
					case 3:printf("mnozenie %.2f \n", (x1*x2)) ; break;
					case 4:printf("dzoelenie %.2f \n", (x1/x2)) ; break;
					default :printf(" \n\nwidzisz w MENU liczbe %d ? bo ja nie... \n ", operacja);break;
					
				}
		
			printf("\n 1 lub kazda inna liczba- licz dalej tym super kalkulatorem \n 9-Zakoncz \n");
		
			scanf("%d", &operacja);
			
			switch(operacja)
				{
					case 9:printf("zakoncz"); break;
					default :printf("\n jestem amatorem programow \"Hello World\" i licze dalej \n");break;
				}
			}
			
			*/
			
			
			
			
	/*

	//___________________________________________________________________________________________________________________
	//Zad 2.3 pobiera liczbe i poteguje dopoki nie przekroczy 100 000
	
	
	long int suma , x;
	printf("podaj x=");
	scanf("%d", &x);
	suma=x;
	while(suma<=100000)
	{
		printf("%d \n", suma);
		suma=suma*x;
	}
	
	*/
	
	
				
				/*
				//_______________________________________________________________________________________________________________
				//ZAD 2.4 Pobrac liczbe.jesli niedodatnie-zakoncz program.wyswietlac kolejno w nowej lini wszystkie liczby mniejsze od X az do 0 
				
				int x;
				printf("podaj x=");
				scanf("%d", &x);
				
				while(x>0)
				{
					printf("%d\n", (x-1));
					x--;	
				}
				*/
				
				
				
				
	/*
	//_______________________________________________________________________________________________________________________________
	//zad 2.5
	
	
	int x;
	printf("podaj x=");
	scanf("%d", &x);
	
	while(x>0)
	{
		--x;
		if(x==40)break;
		if(x%2!=0)continue;
		printf("%d\n", x); 
	}	
	*/
	
	
	
				
				
				/*
				//______________________________________________________________________________________________________________________
				//Zad2.6 Wyswietlic liczby od 0-9 uzywajac petli for
				
				int x;
				for	(x=0 ; x<10 ; x++)
				{
					printf("%d \n",x);
				}
				*/



	/*
	//___________________________________________________________________________________________________________________________________
	//2.7 pobrac x i y. y>x . wypisac liczby pomiedzy 
	int x , y , z ;
	scanf("%d", &x);
	scanf("%d", &y);
	
	for( z=x ; z+1<y ; )
	{
		z++;
		printf("%d\n",z);
	}
	
	*/
	
	
	
	
				/*
				//_________________________________________________________________________________________________________________________
				//zad2.8 pobrac x i wypisac wszystkie mniejsze od x i wieksze od 0
				int x;
				printf("daj mnie x\n");
				scanf("%d", &x);
				
				for(x=x-1 ; x>0 ; x--)
				{
					printf("%d\n",x);
					
				}
				
				*/
				
				
				
	
	/*
	//________________________________________________________________________________________________________________________________
	//Zad2.9 wypisac co 3 liczbe wieksza od x  nie wieksza niz 100 bez uzycia continue i break
	
	int x;
	printf("daj mnie x\n");
	scanf("%d", &x);
		
	for(x=x+3 ; x<=100 ; x=x+3)
	{
		printf("%d\n",x);
			
	}
	
	*/
	
	
	
	
//-----------------------------------------------------------------------------------------------------------------------------------------------
//===============================================================================================================================================
//ZADANIE NR3.1/2/3/4 funkcja dodajaca nowa linie,kilka lini ,wyswietlajaca wieksza, zwracajaca iloczyn.I oczywiscie funkcje znajdziemy na gorze :)
/*

int x , y , z;
printf("tekst i odstep z funkcji");
NewLine();
printf("tekst i 5 lini odstepu");
NewLines(5);
printf("tekst \n");
scanf("%d", &x);
scanf("%d", &y);
WriteBiggerNumber(x,y);
z=Multiply(x,y);
printf("\n z to zwrocona wartosc Multiply z=%d",z);

*/	
				
return(0);	
}

