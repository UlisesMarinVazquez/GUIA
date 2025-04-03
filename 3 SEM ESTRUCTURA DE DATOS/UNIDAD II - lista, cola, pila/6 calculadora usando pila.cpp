#include <iostream>
#include <stack>
using namespace std;

int main()
{
    char operador;
    stack<double> numeros;
    char continuar;

    cout << "Calculadora Simple" << endl;

    do
    {
        cout << "Ingrese un operador (+, -, *, /): ";
        cin >> operador;

        if (operador == '+' || operador == '-' || operador == '*' || operador == '/')
        {
            cout << "Ingrese dos numeros: ";
            double num1, num2;
            cin >> num1 >> num2;

            switch (operador)
            {
            case '+':
                numeros.push(num1 + num2);
                break;
            case '-':
                numeros.push(num1 - num2);
                break;
            case '*':
                numeros.push(num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                {
                    numeros.push(num1 / num2);
                }
                else
                {
                    cout << "Error: Division por cero" << endl;
                    continue;
                }
                break;
            default:
                cout << "Operador no valido" << endl;
                continue;
            }

            cout << "Resultado: " << numeros.top() << endl;
        }
        else
        {
            cout << "Operador no valido" << endl;
        }

        cout << "Desea realizar otra operacion? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');
    cout << "\nFin del programa";

    return 0;
}
