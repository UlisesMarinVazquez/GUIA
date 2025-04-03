#include <iostream>

using namespace std;

#define MAX 100
void CREAR(int, int[MAX]);
void CREAR_I(int, int[MAX]);
void CREAR_F(int,int, int[MAX]);
void ELIM_I(int[MAX]);
void ELIM_F(int, int[MAX]);
void CREAR_A(int, int[MAX]);
void CREAR_D(int, int, int[MAX]);
void ELIM_A(int, int[MAX]);
void ELIM_D(int, int,int[MAX]);
void IMP(int, int[MAX]);

int main ()

{
  int VS, D, A[MAX], L, LIM;
  char B;

  do
 {
         cout << "Elija alguna de las siguientes funciones\n";
         cout << "1 Crear un arreglo de longitud definida\n";
         cout << "2 Insertar al inicio\n";
         cout << "3 Insertar al final\n";
         cout << "4 Eliminar al inicio\n";
         cout << "5 Eliminar al final\n";
         cout << "6 Insertar antes de\n";
         cout << "7 Insertar después de\n";
         cout << "8 Eliminar antes de\n";
         cout << "9 Eliminar despues de\n";
     
      cin>>VS;

      switch (VS)

	{ 

	case 1:
	    cout << "Introduce la longitud del arreglo\n";
	   cin >> L;
	   cout << "Introduce los elementos del arreglo\n";
	  CREAR(L, A);
	   IMP(L, A);
     break;


	case 2:
	  cout << "Introduce la longitud del arreglo";
	  cin >> L;
	  cout << "Introduce el dato de la primera posicion";
	  cin >> D;
	  CREAR_I(D,A);
	  IMP(L, A);
	  
	  break;
	  

	case 3:
	  cout << "Introduce la longitud del arreglo";
	  cin >> L;
	  cout << "Introduce el dato de la posicion final";
	  cin >> D;
	  CREAR_F(D,L,A);
	  IMP(L, A);
	  break;


	case 4:
	   ELIM_I(A);
	   IMP(L, A);
	   break;



	case 5:
	   ELIM_F(L,A);
	   IMP(L, A);
	   break;


	case 6:
	  cout << "Introduce la longitud del arreglo";
	  cin >> L;
	  cout << "antes de cual elemento se hara la insercion?";
	  cin >> LIM;
	  cout << "Introduce los elementos del arreglo\n";
	    CREAR_A(LIM,A);
	   IMP(L, A);
	   break;


	case 7:
	  cout << "Introduce la longitud del arreglo";
	  cin >> L;
	  cout << "despues de cual elemento se hara la insercion?";
	  cin >> LIM;
	  cout << "Introduce los elementos del arreglo\n";
	    CREAR_D(LIM,L,A);
	   IMP(L, A);
     break;


    case 8:
      cout << "Introduce la longitud del arreglo";
	  cin >> L;
	  cout << "antes de cual elemento se hara la eliminación?";
	  cin >> LIM;
       ELIM_A(LIM,A);
	   IMP(L, A);
	   break;

	
    case 9:
      cout << "Introduce la longitud del arreglo";
	  cin >> L;
	  cout << "Despues de cual elemento se hara la eliminación?";
	  cin >> LIM;
      ELIM_D(LIM,L,A);
	   IMP(L, A);
	   break;

    }

     cout<<"Desea efectuar otra operacion?\n";
     cout<<"Presione 's' para continuar con otra operacion o ingrese otro caracter para finalizar el programa\n";

     cin>>B;


 }

 while(B == 's');
	  return 0;

}
	


void CREAR(int l,int A[MAX])
{

 int i;
 for(i=0; i<l;i++)
 {
 cin>>A[i];
 
 cout<<"\n";
}
 
} 	
	


void CREAR_I(int d, int A[MAX])
{

 A[0]=d;
 
 cout<<"\n";
}




void CREAR_F(int d,int l, int A[MAX])
{

 A[l-1]=d;
 
 cout<<"\n";
}
 

 
void IMP(int l,int A[MAX])
{
 int i;
 for(i=0; i<l;i++)
 {
 
 cout<<A[i];
 
 }
 cout<<"\n";
}



void ELIM_I(int A[MAX])
{
 
 A[0]=0;
 
 cout<<"\n";
}



void ELIM_F(int l,int A[MAX])
{

 A[l-1]=0;
 
 cout<<"\n";
}



void CREAR_A(int lim,int A[MAX])
{
 int i;
 for(i=0; i<lim-1; i++)
 {
 
 cin>>A[i];
 
 cout<<"\n";
 }
 
}



void CREAR_D(int lim,int l,int A[MAX])
{
 int i;
 for(i=lim; i<l; i++)
 {
 
 cin>>A[i];
 
 cout<<"\n";
 }
 
}



void ELIM_A(int lim,int A[MAX])
{
 int i;
 for(i=0; i<lim-1; i++)
 {
 
 A[i]=0;
 
 cout<<"\n";
 }
}



void ELIM_D(int lim,int l,int A[MAX])
{
 int i;
 for(i=lim; i<l; i++)
 {
 
 A[i]=0;
 
 cout<<"\n";
 }
}
