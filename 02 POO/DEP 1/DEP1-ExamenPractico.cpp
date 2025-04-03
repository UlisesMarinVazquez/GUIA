#include <stdio.h>
#include <conio.h>
#define Tam 5

int main()
{
	int op,y,n=0,r,x,i=1,k;
	int arr[Tam];
	bool band=false;
		do{
		printf("Seleccione una opcion:");
		scanf("%i", &op);
		switch(op){
			case 1:
				if(n<Tam){
					printf("\nIntroduce un dato: ");
					scanf("%i", &y);
					for(int i=Tam;i>0;i--){
						arr[i]=arr[i-1];
					}
					arr[0]=y;
					n++;
				}
				
				else{
					printf("\nNo hay espacio.");
				}
			     break;
			case 2:
				if(n<Tam){
					printf("Introduce un dato: ");
					scanf("%i",&y);
					arr[n]=y;
					n++;
				}
				else{
					printf("\nNo hay espacio.");
				}
			    break;
			case 3:
				 if(n>=1){
                for(int i=0;i<n;i++){
                    arr[i]=arr[i+1];
                }
                n=n-1;
            }
                else
				{
				    printf("El arreglo esta vacio");
				}
			     break;
			case 4:
			 if(n>=1){
			     arr[n-1]=0;
			     n=n-1;
			 }
			 
			    else
			    {
			       printf("El arreglo esta vacio");
				}
			     break;
			case 5:
			    {
                printf("Introduzca el dato a insertar:");
                scanf("%i", &x);
                int elem;
                printf("Introduzca antes de quien lo quiere insertar:");
                scanf("%i", &elem);
                
	            int i = 0;
	            bool encontrado = false;
				while(i<=n){
                    if(arr[i] == elem) {
                        encontrado = true;
                        break;
                    }
                    i++;
				}
				
				if (encontrado){
				    n ++;
				    int j = n;
				    while(j>i) {
				        arr[j] = arr[j-1];
				        j--;
				    }
				    arr[i] = x;
				} else {
				    printf("No estÃ¡ el elemento");
				}
				
                break;
            }
               
			case 6: 
			  {
                printf("Introduzca el dato a insertar:");
                scanf("%i", &x);
                int elem;
                printf("Introduzca despues de quien lo quiere insertar:");
                scanf("%i", &elem);
                
	            int i = 0;
	            bool encontrado = false;
				while(i<=n){
                    if(arr[i] == elem) {
                        encontrado = true;
                        break;
                    }
                    i++;
				}
				
				if (encontrado){
				    n ++;
				    int j = n;
				    while(j>i) {
				        arr[j] = arr[j-1];
				        j--;
				    }
				    arr[i+1] = x;
				} else {
				    printf("No estÃ¡ el elemento");
				}
				
                break;
            }
			case 7:
			 {
                printf("Introduzca el elemento a eliminar antes de:");
                scanf("%i", &x);
                if (n>=1){
	            int i = 0;
	            bool encontrado = false;
				while(i<=n){
                    if(arr[i] == x) {
                        encontrado = true;
                        break;
                    }
                    i++;
				}
				if (encontrado==true){
				    int j;
					j=i;
					if(j==0){
				    	printf("No hay ningun elemento anterior");
					}else{
					
					j = i - 1;
				    while(j>=0 && j<n) {
				        arr[j] = arr[j+1];
				        j++;
				    }
				    n --;
				}
				} else {
				    printf("No estÃ¡ el elemento");
				}
			}else{
				printf("El arreglo esta vacio");
			}
				
                break;
            }	
			case 8:
			{
                printf("Introduzca el elemento a eliminar despues de:");
                scanf("%i", &x);
                if (n<=1)
	            int i = 0;
	            bool encontrado = false;
				while(i<=n){
                    if(arr[i] == x) {
                        encontrado = true;
                        break;
                    }
                    i++;
				}
				
				if (encontrado==true){
					int j;
					j=i;
					if(j==0){
				    	printf("No hay ningun elemento posterior");
					}else{
					
					j = i + 1;
				    while(j<n) {
				        arr[j] = arr[j+1];
				        j++;
				    }
				    n --;
				}
				}else {
				    printf("No estÃ¡ el elemento");
				}
				
                break;
            }	
			case 9:
				if(n>1){
					printf("\nIntroduce un dato:");
					scanf("%i",&x);
					i=0;
					band=false;
					while (i<=n &&band==false){
						if(arr[i]==x){
							band=true;
							arr[k]=arr[k+1];
                     printf("\nEl numero esta en la posicion %i",i+1);
						}
						i++;
					}
					if(band==false)
					printf("\nEl elemento %d no esta en el arreglo:",x);
				}
				else{
					printf("\nEl arreglo esta vacio");
				}
				break;
			case 10:
			   if(n>1){
					printf("\nIntroduce un dato:");
					scanf("%i",&x);
					i=0;
					band=false;
					while (i<=n &&band==false){
						if(arr[i]==x){
							band=true;
							n=n-1;
							for(k=i;k<=n;k++)
							arr[k]=arr[k+1];
                     printf("\nEl numero fue eliminado");
						}
						i++;
					}
					if(band==false)
					printf("\nEl elemento %d no esta en el arreglo:",x);
				}
				else{
					printf("\nEl arreglo esta vacio");
				}
				break;
			case 11:
				printf("Introdusca el dato a modificar:");
                scanf("%i", &x);
	            i = 0, k=0;
	            if (n>1){
				while(i<=n && band==0)
                    if(arr[i] == x) {
                        band=1;
                        k=i;
                    }
                    i++;
                }
				if (band==0){
					printf("\nEl elemento %i no esta en el arreglo.",x);
				}else{
				 printf("Introduzca el elemento que remplasara a %i:",x);
				scanf("%i",&y);
				arr[k]=y;
		        printf("\nEl dato fue agregado satisfactoriamente");
				}
                break;     
			case 12:
				for(int i=0; i<n;i++){
					printf("\n El numero en la posicion %i es: %i", i+1,arr[i]);
				}
				break;
		}
		printf("\n\nÂ¿Desea modificar algo mas?: \n1. Si\n2.No\n");
		scanf("%i",&r);
		}while(r==1);
}