#include<stdio.h>
#include<stdlib.h>


int main()

{
	int OPC,DEC,A,X,k;
	int i;
	int N=0, W=0;
	int ARR[5];
	bool band=false;
	
	do
	{
		printf("\nElige alguna de las siguientes opciones: \n");
		printf("1. INSERTAR AL INICIO\n");
		printf("2. INSERTAR AL FINAL\n");
		printf("3. ELIMINAR AL INICIO\n");
		printf("4. ELIMINAR AL FINAL\n");
		printf("5. IMPRIMIR \n");
		printf("6. ELIMINAR X \n");
		printf("7. BUSQUEDA DE ELEMENTO\n");
		printf("\n");
        
		scanf("%i", &OPC);
		
		while(OPC<1 && OPC>8)
		{
			printf("\nOPCION INVALIDA, PRUEBA NUEVAMENTE \n");
			scanf("%i", &OPC);
		}
		
		switch (OPC)
		{
			
			
			case 1: 
			
				if(N<5 && N>0)
				{
					printf("\nINTRODUCE UN NUMERO PARA GUARDAR AL INICIO DEL ARREGLO: ");
					scanf("%i", &A);
					N++;
					for(i=N; i>0; i--)
					{
						ARR[i]=ARR[i-1];		
					}
					ARR[0]=A;
					
				}
				else if(N==0)
				{
					printf("\nINTRODUCE UN NUMERO PARA GUARDAR AL INICIO DEL ARREGLO: ");
					scanf("%i", &A);
					ARR[0]=A;
					N++;		
				}
				
				else
				{
				printf("\nNO HAY ESPACIO EN EL ARREGLO.");
				}
				
				printf("\nPRESIONE 1 PARA REPETIR EL MENU: \n");
				scanf("%i", &DEC);
				
			break;
			
			case 2:
				
				if(N<5)
				{
					printf("\nIntroduce el digito a guardar en el final del arreglo: ");
					scanf("%i", &A);
					N++;
					ARR[i]=A;
				}
				
				else
				{
					printf("\nNO HAY ESPACIO EN EL ARREGLO.");
				}
				
				printf("\nPRESIONE 1 PARA REPETIR EL MENU: \n");
				scanf("%i", &DEC);
				
			break;
			
			case 3:
		
				N--;
				for(i=N;i>0;i--)
				{
					ARR[N]=ARR[N+1];
				}
				printf("\nElemento inicial eliminado.");
				printf("\nPRESIONE 1 PARA REPETIR EL MENU: \n");
				scanf("%i", &DEC);
				
			break;
			
			case 4:
				
				N--;
				printf("\nElemento final eliminado");
				printf("\nPRESIONE 1 PARA REPETIR EL MENU: \n");
				scanf("%i", &DEC);
				
			break;

			case 5:
				
				if(N==0)
				{
					printf("\nArreglo  vacio.");
				}
				else
				{
					for( i=0;i<N;i++)
					{
						printf("\nEl dato de la posicion %i es: %i", i+1, ARR[i]);
					}
				}
				printf("\nPRESIONE 1 PARA REPETIR EL MENU: \n");
				scanf("%i", &DEC);
			break;
			
			case 6:
				if(N>0)
				{
					printf("\nEscribe el valor a eliminar: ");
					scanf("%i", & X);
				
					while(W<N && band==false)
					{
						if(ARR[W]==X)
						{
							band=true;
							N--;
							for(k=W;k<=N;k++)
							{
								ARR[k]=ARR[k+1];
							}
							printf("\nElemento eliminado");
						}
						else
						{
							W++;
						}
					}
					if(band==false)
					{
						printf("\nEl elemento %i no esta en el arreglo", X);
					}
					
				}
				else
					{
						printf("\nEl arreglo esta vacio.");
					}
				printf("\nPRESIONE 1 PARA REPETIR EL MENU: \n");
				scanf("%i", &DEC);
			break;
			
			case 7:
				if(N>0)
				{
					printf("\nEscribe el elemento a localizar: ");
					scanf("%i", & X);
				
					while(W<N && band==false)
					{
						if(ARR[W]==X)
						{
							band=true;
							printf("\nEl elemento %i si se encuentra en el arreglo, en la posicion %i .", X,W+1 );
						}
						else
						{
							W++;
						}
					}
					if(band==false)
					{
						printf("\nEl elemento %i no esta en el arreglo", X);
					}	
				}
				else
					{
						printf("\nEl arreglo esta vacio.");
					}
					
				printf("\nPRESIONE 1 PARA REPETIR EL MENU: \n");
				scanf("%i", &DEC);
			break;
				
					
		}	
	}while(DEC==1);
}