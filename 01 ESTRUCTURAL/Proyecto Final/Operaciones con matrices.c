#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define MAX 50

void CREAR_M(int &,int &, int [][MAX]);
void IMP_M(int &, int &,int [][MAX]);
void MATRIZ_DP(int &, int [][MAX],int [][MAX]);
void SUMA_MATRICES(int &, int &,int [][MAX],int [][MAX], int [][MAX]);
void RESTA_MATRICES(int , int ,int [][MAX],int [][MAX], int [][MAX]);
void MUL_MATRICES(int &, int &, int &,int [][MAX], int [][MAX], int [][MAX]);
void TRANSP_M(int &, int &,int [][MAX],int [][MAX]);
int  DET_M(int &,int [][MAX]);
int  DET_ADJ_M(int &,  int &, int &, int [][MAX]);
void ADJ_M(int &, int [MAX][MAX], int [MAX][MAX]);
void IMP_INV(int&,int &,int [MAX][MAX],float [MAX][MAX]);

int  R1,C1,R2,C2,RA,CA,VS;
char B;
int DET;
int M1[MAX][MAX];
int M2[MAX][MAX];
int DP[MAX][MAX];
int SUMA[MAX][MAX];
int RESTA[MAX][MAX];
int MUL[MAX][MAX];
int M1T[MAX][MAX];
int ADJ2[MAX][MAX];
int ADJ2T[MAX][MAX];
float INVERSA[MAX][MAX];


void main (){

do{
printf("Operaciones con matrices\n\n");
printf("Elija alguna de las siguientes funciones:\n\n");
printf("1. Matriz diagonal\n");
printf("2. Suma de matrices\n");
printf("3. Resta de matrices\n");
printf("4. Multiplicacion de matrices\n");
printf("5. Transpuesta de una matriz\n");
printf("6. Adjunta de una matriz\n");
printf("7. Determinante de una matriz\n");
printf("8. Inversa de una matriz\n\n");
scanf("%d",&VS);

switch(VS){

case 1:
printf("\nDiagonal de una matriz\n\n");
printf("Ingrese el orden de la matriz:\n");
scanf("%d",&R1);
printf("Ingrese los elementos de la matriz :\n");
CREAR_M(R1,R1, M1);
printf("La matriz creada es:\n");
IMP_M(R1,R1, M1);
MATRIZ_DP(R1, M1,DP);
 printf("La matriz diagonal es:\n\n"); 
 IMP_M(R1, R1, DP);
break;

case 2:
printf("\nSuma de matrices\n\n");
printf("Ingrese el numero de columnas de ambas matrices \n");
scanf("%d",&C1);
printf("Ingrese el numero de renglones de ambas matrices \n");
scanf("%d",&R1);
printf("Ingrese los elementos de la matriz 1:\n"); 
CREAR_M(R1,C1,M1);
printf("Ingrese los elementos de la matriz 2:\n");
CREAR_M(R1,C1, M2);
printf("Matriz 1:\n\n");
IMP_M(R1,C1, M1);
printf("Matriz 2:\n\n");
IMP_M(R1,C1, M2);
SUMA_MATRICES(R1,C1,M1,M2,SUMA);
printf("El resultado de la suma de matrices es:\n\n");
IMP_M(C1,R1, SUMA);
break;

case 3:
printf("\nResta de matrices \n\n");
printf("Ingrese el numero de columnas de ambas matrices \n");
scanf("%d",&C1);
printf("Ingrese el numero de renglones de ambas matrices \n");
scanf("%d",&R1);
printf("Ingrese los elementos de la matriz 1:\n");
CREAR_M(C1,R1, M1);
printf("Ingrese los elementos de la matriz 2:\n");
CREAR_M(C1,R1, M2);
printf("Matriz 1:\n");
IMP_M(C1,R1, M1);
printf("Matriz 2:\n");
IMP_M(C1,R1, M2);
RESTA_MATRICES(C1,R1,M1,M2,RESTA);
printf("El resultado de la resta de matrices es:\n\n");
IMP_M(C1,R1,RESTA);
break;

case 4:
printf("\nMultiplicacion de matrices\n\n");
printf("Para efectuar la multiplicacion de matrices es necesario que el numero de columnas de la primer matriz sea igual al numero de renglones de la segunda matriz\n\n");
do{

printf("Ingrese el numero de renglones de la primer matriz\n");
scanf("%d",&R1);
printf("Ingrese el numero de columnas de la primer matriz\n");
scanf("%d",&C1);
printf("Ingrese el numero de renglones de la segunda matriz\n");
scanf("%d",&R2);
printf("Ingrese el numero de columnas de la segunda matriz\n");
scanf("%d",&C2);

if(C1!=R2){
 printf("\nFavor de corregir los datos, los valores no cumplen con la condición necesaria c1 = r2\n\n");
}
}
while(C1!=R2);
printf("Ingrese los elementos de la matriz 1:\n");
CREAR_M(R1,C1, M1);
printf("Ingrese los elementos de la matriz 2:\n");
CREAR_M(R2,C2, M2);
printf("Matriz 1:\n");
IMP_M(R1,C1, M1);
printf("Matriz 2:\n");
IMP_M(R2,C2, M2);
MUL_MATRICES(R1,C1,C2,M1,M2,MUL);
printf("El resultado del producto de las matrices es:\n");
IMP_M(R1,C2, MUL);
break;

case 5:
printf("\nMatriz transpuesta\n\n");
printf("Ingrese el numero de columnas\n");
scanf("%d",&C1);
printf("Ingrese el numero de renglones\n");
scanf("%d",&R1);
printf("Ingrese los elementos de la matriz :\n");
CREAR_M(C1,R1, M1);
printf("La matriz creada es:\n");
IMP_M(C1,R1, M1);
TRANSP_M(C1,R1, M1,M1T);
printf("La matriz transpuesta es:\n");
IMP_M(C1,R1, M1T);
break;
case 6:
printf("\nAdjunta de una matriz\n\n");
printf("Ingrese el orden de la matriz\n");
scanf("%d",&R1);
printf("Ingrese los elementos de la matriz\n");
CREAR_M(R1,R1,M1);
printf("La matriz creada es:\n");
IMP_M(R1,R1,M1);
ADJ_M(R1,M1,ADJ2);
printf("La matriz adjunta es:\n\n"); 
IMP_M(R1,R1,ADJ2);
break;

case 7:
printf("\nDeterminante de una matriz\n\n");
printf("Ingrese el orden de la matriz\n");
scanf("%d",&R1);
printf("Ingrese los elementos de la matriz \n");
CREAR_M(R1,R1,M1);
printf("La matriz65 creada es:\n");
IMP_M(R1,R1,M1);
DET=DET_M(R1,M1);
printf("El determinante es:%d\n\n",DET);
break;

case 8:
printf("\nMatriz inversa\n\n");
printf("Ingrese el orden de la matriz\n");
scanf("%d",&R1);
printf("Ingrese los elementos de la matriz\n");
CREAR_M(R1,R1,M1);
printf("La matriz creada es:\n");
IMP_M(R1,R1,M1);
DET=DET_M(R1, M1);
ADJ_M(R1, M1,ADJ2);
TRANSP_M(R1,R1, ADJ2,ADJ2T);
printf("La matriz inversa es es:\n");
 IMP_INV(R1,DET,ADJ2T,INVERSA);
break;



}
printf("Desea efectuar otra operacion?\n");
printf("Presione 's' para continuar con otra operacion o ingrese otro caracter para finalizar el programa\n");


scanf("%s",&B);
}
while(B == 's');
getch();
}
   void MATRIZ_DP( int &r,int M1[][MAX],int DP[][MAX]){
   int i;

     for(i=0; i<r;i++){        
        
        DP[i][i]= M1[i][i];    
            
   }
   }
void CREAR_M(int &r, int &c,int M1[][MAX]){
   int i,j;

     for(i=0; i<r;i++){
        for(j=0; j<c;j++){
      
       scanf("%d",&M1[i][j]);
          }
                     printf("\n");
   }
   

} 
   void IMP_M(int &r, int &c,int M1[][MAX]){
   int i,j;
     for(i=0; i<r;i++){
         
        for(j=0; j<c;j++){
         printf("%d ",M1[i][j]);
        
        }
       printf("\n");
   }
         printf("\n");
   }  

void SUMA_MATRICES(int &r , int &c ,int M1[][MAX],int M2[][MAX], int SUMA[][MAX]){

int i,j;
for(i=0; i<r;i++){         
        for(j=0; j<c;j++){
            SUMA[i][j]=M1[i][j]+M2[i][j];
        
       }

}
}
void RESTA_MATRICES(int r , int c ,int M1[][MAX],int M2[][MAX], int RESTA[][MAX]){

int i,j;
for(i=0; i<r;i++){
         
        for(j=0; j<c;j++){
            RESTA[i][j]=M1[i][j]-M2[i][j];
        
        }
printf("\n");

}
}
void MUL_MATRICES(int &r,int &c, int &ca,int M1[][MAX],int M2[][MAX], int MUL[][MAX]){
int i,j,k;

for(i=0; i<r; i++){

for(j=0; j<ca; j++){         
 
        MUL[i][j] = 0;
        for(k=0; k<c; k++)   {     
         
        MUL[i][j]+=(M1[i][k]*M2[k][j]);
       
         
    }
    
}

}   
}
void TRANSP_M(int &r, int &c ,int M1[][MAX],int M1T[][MAX]){

int i,j;

     for(i=0; i<r;i++){
         
        for(j=0; j<c;j++){
         M1T[j][i]=M1[i][j];
                 
        }
     }
        
     }
     int   DET_M(int &r, int M1[][MAX]){
    int det=0;
        

        int k,i;
    if(r == 1 ){
        det=M1[0][0];
    }
    else{
i=0;
for(k=0; k < r;k++){
      
       det=det + M1[0][k] * DET_ADJ_M(r,i,k,M1);
          }

    }
return det;
}
int DET_ADJ_M(int &r, int &ra, int &ca, int M1[][MAX]){

int ADJ[MAX][MAX];
int n= r - 1;
int x,y,i,j;
int detadj;
x=0;
y=0;
for(i=0; i < r;i++){
         
        for(j=0; j < r;j++){
                 
       if(i != ra && j != ca){
        ADJ[x][y] = M1[i][j];
               
                
                

        y++;
        if(y >= n){
            x++;
            y=0;
        }
        

       }
       
        }
  
   }
   detadj =pow(-1.0,ra+ca)*DET_M(n,ADJ);


   return detadj;
}


void   ADJ_M(int &r, int M1[][MAX],int ADJ2[][MAX]){

        int k,i;
for(i=0; i < r;i++){
for(k=0; k < r;k++){
      
       ADJ2[i][k]= DET_ADJ_M(r,i,k, M1);
          }
}

}

     void IMP_INV(int &r,int &det,int ADJ2T[][MAX],float INVERSA[][MAX]){
   int i,j;
           float det2=det;
      for(i=0; i<r;i++){
         
        for(j=0; j<r;j++){
            INVERSA[i][j]=(ADJ2T[i][j])/det2;
         printf("%f ",INVERSA[i][j]);
        
        }
       printf("\n");
   }
   }
