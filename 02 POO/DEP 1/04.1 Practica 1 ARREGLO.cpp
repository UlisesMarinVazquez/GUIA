#include<stdio.h>
#include<stdlib.h>
main()
{
	int opcion, n=0,a,decision,i,x,k,w=0;
	int arr[5];
	bool band=false;
	
	do
	{
		printf("\nSelecciona la opcion a realizar: ");
		printf("\n1. Insertar al inicio.");
		printf("\n2. Insertar al final.");
		printf("\n3. Eliminar al inicio.");
		printf("\n4. Eliminar al final. ");
		printf("\n9. Imprimir.");
		printf("\n10. Eliminar x");
		printf("\n11. Busqueda de elemento.\n");
		printf("\n");
		scanf("%i", & opcion);
		
		while(opcion<1 && opcion>9)
		{
			printf("\nNumero invalido, intenta nuevamente: \n");
			scanf("%i", & opcion);
		}
		
		switch (opcion)
		{
			case 1: 
			
				if(n<5 && n>0)
				{
					printf("\nIntroduce el digito a guardar en el inicio del arreglo: ");
					scanf("%i", & a);
					n++;
					for(i=n; i>0; i--)
					{
						arr[i]=arr[i-1];		
					}
					arr[0]=a;
					
				}
				else if(n==0)
				{
					printf("\nIntroduce el digito a guardar en el inicio del arreglo: ");
					scanf("%i", & a);
					arr[0]=a;
					n++;		
				}
				
				else
				{
				printf("\nNo hay espacio en el arreglo.");
				}
				
				printf("\nSi desea repetir el menu presione enter: \n");
				scanf("%i", & decision);
				
			break;
			
			case 2:
				
				if(n<5)
				{
					printf("\nIntroduce el digito a guardar en el final del arreglo: ");
					scanf("%i", & a);
					n++;
					arr[i]=a;
				}
				
				else
				{
					printf("\nNo hay espacio en el arreglo.");
				}
				
				printf("\nSi desea repetir el menu presione enter: \n");
				scanf("%i", & decision);
				
			break;
			
			case 3:
		
				n--;
				for(i=n;i>0;i--)
				{
					arr[n]=arr[n+1];
				}
				printf("\nElemento inicial eliminado.");
				printf("\nSi desea repetir el menu presione enter: \n");
				scanf("%i", & decision);
				
			break;
			
			case 4:
				
				n--;
				printf("\nElemento final eliminado");
				printf("\nSi desea repetir el menu presione enter: \n");
				scanf("%i", & decision);
				
			break;
			case 9:
				
				if(n==0)
				{
					printf("\nArreglo  vacio.");
				}
				else
				{
					for( i=0;i<n;i++)
					{
						printf("\nEl dato de la posicion %i es: %i", i+1, arr[i]);
					}
				}
				printf("\nSi desea repetir el menu presione enter: \n");
				scanf("%i", & decision);
			break;
			
			case 10:
				if(n>0)
				{
					printf("\nEscribe el valor a eliminar: ");
					scanf("%i", & x);
				
					while(w<n && band==false)
					{
						if(arr[w]==x)
						{
							band=true;
							n--;
							for(k=w;k<=n;k++)
							{
								arr[k]=arr[k+1];
							}
							printf("\nElemento eliminado");
						}
						else
						{
							w++;
						}
					}
					if(band==false)
					{
						printf("\nEl elemento %i no esta en el arreglo", x);
					}
					
				}
				else
					{
						printf("\nEl arreglo esta vacio.");
					}
				printf("\nSi desea repetir el menu presione enter: \n");
				scanf("%i", & decision);
			break;
			
			case 11:
				if(n>0)
				{
					printf("\nEscribe el elemento a localizar: ");
					scanf("%i", & x);
				
					while(w<n && band==false)
					{
						if(arr[w]==x)
						{
							band=true;
							printf("\nEl elemento %i si se encuentra en el arreglo, en la posicion %i .", x,w+1 );
						}
						else
						{
							w++;
						}
					}
					if(band==false)
					{
						printf("\nEl elemento %i no esta en el arreglo", x);
					}	
				}
				else
					{
						printf("\nEl arreglo esta vacio.");
					}
					
				printf("\nSi desea repetir el menu presione enter: \n");
				scanf("%i", & decision);
			break;
				
					
		}	
	}while(decision==1);
}