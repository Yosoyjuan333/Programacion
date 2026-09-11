#include <iostream>
#include <string>
using namespace std;

struct reg_estudiantes{
    string nombre, carrera, semestre;
    float promedio;

}estudiante[5];

int main()
{
    int i;
    for (i=0;i<5;i++)
    {
    cout <<"ingresa el nombre del estudiante"<<endl;
    cin>>estudiante[i] .nombre;

    cout<<"ingresa la carrera del estudiante" <<endl;
    cin>>estudiante[i] .carrera;

    cout <<"ingresa el semestre del estudiante"<<endl;
    cin>>estudiante[i] .semestre;

    cout<<"ingresa el promedio del estudiante"<<endl;
    cin>>estudiante [i] .promedio;
    }

    
}