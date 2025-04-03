#include <iostream>
#include<stdlib.h>
#define MAX 5

using namespace std;


void CREAR(int, int[MAX]);
void CREAR_I(int, int[MAX]);
void CREAR_F(int, int[MAX]);
void ELIM_I(int[MAX]);
void ELIM_F(int[MAX]);
void CREAR_A(int, int[MAX]);
void CREAR_D(int, int[MAX]);
void ELIM_A(int,int[MAX]);
void ELIM_D(int,int[MAX]);
void ELIM_E(int,int[MAX]);
void IMP( int[MAX]);

int main ()
{
  int X, D, E,A[MAX],L,LIM;
  char B;
  do
    {
      cout << "\nElige alguna de las siguientes funciones: \n";
       
        cout << "1. INSERTAR AL INICIO\n";
        cout << "2. INSERTAR AL FINAL\n";
        cout << "3. ELIMINAR AL INICIO\n";
        cout << "4. ELIMINAR AL FINAL\n";
        cout << "5. INSERTAR ANTES DE\n";
        cout << "6. INSERTAR DESPUES DE\n";
        cout << "7. ELIMINAR ANTES DE\n";
        cout << "8. ELIMINAR DESPUES DE\n";
        cout << "9. ELIMINAR ELEMENTO\n";
		cout << "\n";
        cin>>X;

     while(X<1 && X>9)
		{
			cout<< "\nNUMERO INVALIDO, INTENTA NUEVAMENTE: \n";
			cin>>X;
		}
      

      switch (X)
    { 
	  
	  case 1:
	  cout << "Introduce el dato de la primera posicion";
	  cin >> D;
	  CREAR_I(D,A);
	   IMP( A);
	  break;
	  

	  case 2:
	  cout << "Introduce el dato de la posicion final";
	  cin >> D;
	  CREAR_F(D,A);
	   IMP(A);
	   break;
	

	   case 3:
	   ELIM_I(A);
	   IMP(A);
	   break;


	   case 4:
	   ELIM_F(A);
	   IMP( A);
	   break;


	  case 5:
	  cout << "antes de cual elemento se hara la insercion?";
	  cin >> LIM;
	  cout << "Introduce los elementos del arreglo\n";
	 CREAR_A(LIM,A);
	   IMP( A);
	   break;

	   case 6:
	  
	  cout << "despues de cual elemento se hara la insercion?";
	  cin >> LIM;
	  cout << "Introduce los elementos del arreglo\n";
	 CREAR_D(LIM,A);
	   IMP(A);
	   break;
	   
	   case 7:
 
	  cout << "antes de cual elemento se hara la eliminación?";
	  cin >> LIM;
      ELIM_A(LIM,A);
	   IMP(A);
	   break;
	   
	   case 8:
	  cout << "Despues de cual elemento se hara la eliminación?";
	  cin >> LIM;
       ELIM_D(LIM,A);
	   IMP(A);
	   break;
	   
	   case 9:
 
	  cout << " Cual elemento quieres eliminar?";
	  cin >> E;
      ELIM_E(E,A);
	   IMP(A);
	   break;

    }
     cout<<"Desea efectuar otra operacion?\n";
     cout<<"Presione 's' para continuar con otra operacion o ingrese otro caracter para finalizar el programa\n";

    cin>>B;


}

while(B == 's');
	  return 0;
	}
	
void CREAR(int l,int A[MAX]){
 int i;
 for(i=0; i<l;i++){
 
 
 cin>>A[i];
 
 cout<<"\n";
 }
 
} 	
	
void CREAR_I(int d, int A[MAX]){

 A[0]=d;
 
 cout<<"\n";
 }
 void CREAR_F(int d, int A[MAX]){

 
 
 A[MAX-1]=d;
 
 cout<<"\n";
 }
 
 

void IMP(int A[MAX]){
 int i;
 for(i=0; i<MAX;i++){
 
 cout<<A[i];
 
 
 }
 cout<<"\n";
 }
 void ELIM_I(int A[MAX]){
 
 
 A[0]=0;
 
 cout<<"\n";
 }
  void ELIM_F(int A[MAX]){

 
 A[MAX-1]=0;
 
 cout<<"\n";
 }
void CREAR_A(int lim,int A[MAX]){
 int i;
 for(i=0; i<lim-1; i++){
 
 
 cin>>A[i];
 
 cout<<"\n";
 }
 
}
void CREAR_D(int lim,int A[MAX]){
 int i;
 for(i=lim; i<MAX; i++){
 
 
 cin>>A[i];
 
 cout<<"\n";
 }
 
}
void ELIM_A(int lim,int A[MAX]){
 int i;
 for(i=0; i<lim-1; i++){
 
 
 A[i]=0;
 
 cout<<"\n";
 }
}
void ELIM_D(int lim,int A[MAX]){
 int i;
 for(i=lim; i<MAX; i++){
 
 
 A[i]=0;
 
 cout<<"\n";
 }
}
 void ELIM_E(int e,int A[MAX]){
 int i;
 for(i=0; i<MAX; i++){
 if(i==e-1){
 
 A[i]=0;
 }else{
  cout<<A[i];}
 cout<<"\n";
 }
}