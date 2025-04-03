
#include <iostream>

using namespace std;

class Menor
{
    private:
    int A1, A2;
    int MENOR1();

    public:
    void ASIGNAR();
    void VER();

};

void Menor::ASIGNAR()
{
   cout<<"INGRESA UN NUMERO: ";
   cin>>A1;
   cout<<"INGRESA UN NUMERO: ";
   cin>>A2;
   
}

int Menor::MENOR1()
{
        
         if(A1<=A2
         {
            return A1;
         }else 
         {
            return A2;
         }
}

void Menor::VER()
{

             cout<<A1<<" y "<<A2<<" El MENOR ES: " <<MENOR1()<<endl;
         
   
}

int main()
{
	Menor obj;
	obj.ASIGNAR();
	obj.VER();
}
