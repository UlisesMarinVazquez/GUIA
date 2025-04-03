#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int *pr;
    int op,y,n=0,r,x,i=1,k;
	int arr[5];
	bool band=false;

    do
    {
        cout<<"SELECIONE UNA OPCION: "<<endl;
        cout<<"1. INTRODUCE UN DATO\n";
        cout<<"1. INSERTAR AL INICIO\n";
        cout<<"2. INSERTAR AL FINAL\n";
        cout<<"3. ELIMINAR AL INICIO\n";
        cout<<"4. ELIMINAR AL FINAL\n";
        cout<<"5. INSERTAR ANTES DE\n";
        cout<<"6. INSERTAR DESPUES DE\n";
        cout<<"7. ELIMINAR ANTES DE\n";
        cout<<"8. ELIMINAR DESPUES DE\n";
        cout<<"9. ELIMINAR ELEMENTO\n";
        cout<<"11. INTRODUCE EL DATO A MODIFICAR\n"<<endl;
        
        cin>>op;

        switch (op)
        {
            case 1:
            if (n<5)
            {
             cout<<"\nINTRODUCE UN DATO: ";
             cin>>y;
             for(int i=5;i>0;i--){
						arr[i]=arr[i-1];
					}
					arr[0]=y;
					n++;
            }
            else
            {
					cout<<"\nNo hay espacio.";
			}
			break;
            case 2:
				if(n<5){
					cout<<"Introduce un dato: ";
					cin>>y;
					arr[n]=y;
					n++;
				}
				else{
					cout<<"\nNo hay espacio.";
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
				    cout<<"El arreglo esta vacio";
				}
			     break;
			case 4:
			 if(n>=1){
			     arr[n-1]=0;
			     n=n-1;
			 }
			 
			    else
			    {
			       cout<<"El arreglo esta vacio";
				}
			     break;
			case 5:
			    {
                cout<<"Introduzca el dato a insertar:";
                cin>>x;
                int elem;
                cout<<"Introduzca antes de quien lo quiere insertar:";
                cin>>&elem;
                
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
				    cout<<"No esta el elemento";
				}
				
                break;
            }
               
			case 6: 
			  {
                cout<<"Introduzca el dato a insertar:";
                cin>>x;
                int elem;
                cout<<"Introduzca despues de quien lo quiere insertar:";
                cin>>&elem;
                
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
				    cout<<"No esta el elemento.";
				}
				
                break;
            }
			case 7:
			 {
                cout<<"Introduzca el elemento a eliminar antes de:";
                cin>>x;
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
				    	cout<<"No hay ningun elemento anterior";
					}else{
					
					j = i - 1;
				    while(j>=0 && j<n) {
				        arr[j] = arr[j+1];
				        j++;
				    }
				    n --;
				}
				} else {
				    cout<<"No esta el elemento";
				}
			}else{
				cout<<"El arreglo esta vacio";
			}
				
                break;
            }	
			case 8:
			{
                cout<<"Introduzca el elemento a eliminar despues de:";
                cin>>x;
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
				    	cout<<"No hay ningun elemento posterior";
					}else{
					
					j = i + 1;
				    while(j<n) {
				        arr[j] = arr[j+1];
				        j++;
				    }
				    n --;
				}
				}else {
				    cout<<"No esta el elemento";
				}
				
                break;
            }	
			case 9:
				if(n>1){
					cout<<"\nIntroduce un dato:";
					cin>>x;
					i=0;
					band=false;
					while (i<=n &&band==false){
						if(arr[i]==x){
							band=true;
							arr[k]=arr[k+1];
                     cout<<"\nEl numero esta en la posicion %i",i+1;
						}
						i++;
					}
					if(band==false)
					cout<<"\nEl elemento %d no esta en el arreglo:",x;
				}
				else{
					cout<<"\nEl arreglo esta vacio";
				}
				break;
			case 10:
			   if(n>1){
					cout<<"\nIntroduce un dato:";
					cin>>x;
					i=0;
					band=false;
					while (i<=n &&band==false){
						if(arr[i]==x){
							band=true;
							n=n-1;
							for(k=i;k<=n;k++)
							arr[k]=arr[k+1];
                     cout<<"\nEl numero fue eliminado";
						}
						i++;
					}
					if(band==false)
					cout<<"\nEl elemento %d no esta en el arreglo:",x;
				}
				else{
					cout<<"\nEl arreglo esta vacio";
				}
				break;
			case 11:
				cout<<"Introdusca el dato a modificar:";
                cin>>x;
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
					cout<<"\nEl elemento %i no esta en el arreglo.",x;
				}else{
				 cout<<"Introduzca el elemento que remplasara a %i:",x;
				cin>>y;
				arr[k]=y;
		        cout<<"\nEl dato fue agregado satisfactoriamente";
				}
                break;     
			case 12:
				for(int i=0; i<n;i++){
					cout<<"\n El numero en la posicion %i es: %i", i+1,arr[i]";
				}
				break;
		}
		cout<<"\n\n¿Desea modificar algo mas?: \n1. Si\n2.No\n";
		cin>>r;
		}while(r==1);		
    
}


   