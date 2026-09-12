#include <iostream>
#include <string>
using namespace std;


struct reg_estudiantes{

    string nombre, carrera, semestre;
    float promedio;

} estudiante[5];



  int main(){
    string buscar;

    //registro de alumnos

    for(int i=0; i < 5; i++)
    {

        cout <<"Ingresa el nombre del estudiante" << endl;
        cin >> estudiante[i].nombre;

        cout <<"Ingresa la carrera del estudiante" << endl;
        cin >> estudiante[i].carrera;

        cout <<"Ingresa el semestre del estudiante" << endl;
        cin >> estudiante[i].semestre;

        cout <<"Ingresa el promedio del estudiante" << endl;
        cin >> estudiante[i].promedio;
    }

    
    // Mostrar datos de los alumnos inscritos
    cout << "Alumnos Inscritos" << endl;    
    for(int i=0; i < 5; i++){
         

        cout << "Nombre:" << estudiante[i].nombre << endl;
        cout << "Carrera:" << estudiante[i].carrera << endl;
        cout << "Semestre Actual:" << estudiante[i].semestre << endl;
        cout << "Promedio:" << estudiante[i].promedio << endl;
        cout << "-------------------------------------------" << endl;

    }

    //Buscar alumnos

 

    cout << "Ingresa el nombre del alumno que quieres buscar: ";
    cin >> buscar;

    for(int i=0; i < 5; i++)
    {
        if(estudiante[i].nombre == buscar)
        {
            cout << "Nombre: " << estudiante[i].nombre << endl;
            cout << "Carrera: " << estudiante[i].carrera << endl;
            cout << "Semestre: " << estudiante[i].semestre << endl;
            cout << "Promedio: " << estudiante[i].promedio << endl;
        }

        else{
            cout <<"Alumno no registrado en el sistema" << endl;
        }
    }


    //Busqueda por carrera 

    cout << "Ingresa la carrera que quieres buscar: ";
    cin >> buscar;

    for(int i=0; i < 5; i++)
    {
        if(estudiante[i].carrera == buscar)
        {
            cout << "Nombre: " << estudiante[i].nombre << endl;
            cout << "Carrera: " << estudiante[i].carrera << endl;
            cout << "Semestre: " << estudiante[i].semestre << endl;
            cout << "Promedio: " << estudiante[i].promedio << endl;
        }
    }


    return 0;
}