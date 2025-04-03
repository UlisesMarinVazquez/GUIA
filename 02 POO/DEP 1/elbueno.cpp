#include <stdio.h>
#include <conio.h>
#define MAX 10

void print_array(int *arr, int size) {
    printf("Arreglo actual: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
} 

int main()
{
	int op=0,y,n=0,r,x,i=1,k,w=0, pos,opcion, valor;
	int arr[MAX]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *ptr_i=arr;
    int *ptr_f=arr+8;
	bool band=false;

		do{
        printf("\n SELECIONE UNA OPCION: \n\n");
        printf("1. INSERTAR AL INICIO.\n");
        printf("2. INSERTAR AL FINAL.\n");
        printf("3. ELIMINAR AL INICIO.\n");
        printf("4. ELIMINAR AL FINAL.\n");
        printf("5. INSERTAR ANTES DE.\n");
        printf("6. INSERTAR DESPUES DE.\n");
        printf("7. ELIMINAR ANTES DE.\n");
        printf("8. ELIMINAR DESPUES DE.\n");
        printf("9. ELIMINAR ELEMENTO.\n");
        printf("10. INTRODUCE EL DATO A MODIFICAR.\n");
        printf("11. IMPRESION DE TODAS LAS POSICIONES: \n\n");
		
		scanf("%i", &op);

		switch(op)
        {
			case 1:
            {
             printf("Introduzca el valor del elemento: ");
             scanf("%d", &valor); 

             for (int i = 8; i >= 0; i--) 
             {
              *(ptr_i + i + 1) = *(ptr_i + i);
             }
             *ptr_i = valor;
    
             printf("Arreglo con elemento introducido: ");
             for (int i = 0; i < 10; i++) {
             printf("%d ", *(arr + i));
             }
             printf("\n");
             }
             break;
            
           
			case 2: 
				 if (ptr_f != arr + MAX - 1) {
                    ptr_f++;
                    printf("Ingrese el valor a introducir: ");
                    scanf("%d", ptr_f);
                    print_array(arr, ptr_f - ptr_i + 1);
                } else {
                    printf("No se puede introducir al final, el arreglo esta lleno.\n");
                }
                break;

			case 3:
				  if (ptr_i <= ptr_f) {
                    printf("Se elimino el valor %d\n", *ptr_i);
                    ptr_i++;
                    print_array(arr, ptr_f - ptr_i + 1);
                } else {
                    printf("No se puede eliminar al inicio, el arreglo esta vacio.\n");
                }
                break;

			case 4:
			 if (ptr_i <= ptr_f) {
                    printf("Se elimino el valor %d\n", *ptr_f);
                    ptr_f--;
                    print_array(arr, ptr_f - ptr_i + 1);
                } else {
                    printf("No se puede eliminar al final, el arreglo esta vacio.\n");
                }
                break;

			case 5:
			    {
                printf("Introduzca el dato a insertar: ");
                scanf("%i", &x);
                int elem;
                printf("Introduzca antes de quien lo quiere insertar: ");
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
				    printf("No esta el elemento");
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
				    printf("No esta el elemento");
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
				    printf("No esta el elemento");
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
				    printf("No esta el elemento");
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

			case 10:
				printf("Introduzca el dato a modificar:");
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

			case 11:
				printf("Posiciones del arreglo: ");
                for (int *p = ptr_i; p <= ptr_f; p++) {
                    printf("%ld ", p - arr);
                }
                printf("\n");
                break;

                
		}
		printf("\n\nDesea modificar algo mas?: \n1. SI\n2. NO\n\n");
		scanf("%i",&r);
		}while(r==1);
}