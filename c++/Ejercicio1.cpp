#include <iostream>
using namespace std;
int main()
{
float salario, s_retenido;
float s_recibido=0;
cin>>salario;
    cout<<"ingresa tu salario mensual: ";

    if (salario>=8000)
    {
        s_retenido=salario*0.03;
        s_recibido=salario-s_retenido;
    }

    else if(salario>=80000 && salario<=10000)
    {
        s_retenido=salario*0.08;
        s_recibido=salario-s_retenido;
    }

    else if(salario>18000 && salario<=20000)
    {
        s_retenido=salario*0.10;
        s_recibido=salario-s_retenido;
    }

    else if (salario>20000)
    {
        s_retenido=salario*0.15;
        s_recibido=salario-s_retenido;
    }

     cout << "\n--- RESULTADOS ---" << endl;
    cout << "Salario original: $" << salario << endl;
    cout << "Descuento aplicado: $" << s_recibido << endl;
    cout << "Salario final a recibir: $" << (salario - s_recibido) << endl;

    return 0;
}
