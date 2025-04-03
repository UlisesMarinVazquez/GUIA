#include <iostream>
using namespace std;

class ALumnos {
   private:
      int Nbol;
      float calif[10];
   public:
      void ASIGNAR(int nc, float calif) {
         Nbol = nc;
         calif = calif;
      }
      int obtenerNumCuenta() {
         return Nbol;
      }
      float IMPRIMIR() {
         return calif;
      }
};

int main() {
   ALumnos obj[10];
   int Nbol;
   float calif;
   
   for(int i = 0; i < 10; i++) {
      cout << "Ingrese el número de cuenta de los Alumnos " << i+1 << ": ";
      cin >> Nbol;
      cout << "Ingrese la calificación de los Alumnos " << i+1 << ": ";
      cin >> calif;
      Alumnos[i].ASIGNAR(Nbol, calif);
   }
   
   for(int i = 0; i < 10; i++) {
      cout << "Alumnos " << i+1 << ": número de cuenta " << Alumnos[i].obtenerNumCuenta() << " con calificación " << Alumnos[i].IMPRIMIR() << endl;
   }
   
   return 0;
}