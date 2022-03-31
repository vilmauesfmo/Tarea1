//Continuacion del EJERCICIO#2
#include <iostream>//nos permite usar el using y lo que contiene dentro
#include <stdio.h>//permite los datos de entrada y salida
#include "dias.h"//mandamos a llamar a la clase creada

using namespace std;//permite usar los string y cout y cin 

enum propiedades{LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

propiedades dia;

int main()//implementacion del programa 
{
    dias objetodia;
    do{
        cout<<"|************************************************|"<<endl;
        cout<<"| INGRESE UN NUMERO QUE ESTE ENTRE EL RAGO 0 Y 6 |"<<endl;
        cout<<"|************************************************|"<<endl;
        cin>>objetodia.num;
        dia = (propiedades)objetodia.num;

        if(dia==LUNES){
            cout<<"|*************************************************************|"<<endl;
            cout<<"| EL NUMERO INGRESADO ES CORRESPONDIENTE AL DIA LUNES USUARIO |"<<endl;
            cout<<"|*************************************************************|"<<endl;

        }else if(dia==MARTES){
            cout<<"|**************************************************************|"<<endl;
            cout<<"| EL NUMERO INGRESADO ES CORRESPONDIENTE AL DIA MARTES USUARIO |"<<endl;
            cout<<"|**************************************************************|"<<endl;
            
        }else if(dia==MIERCOLES){
            cout<<"|*****************************************************************|"<<endl;
            cout<<"| EL NUMERO INGRESADO ES CORRESPONDIENTE AL DIA MIERCOLES USUARIO |"<<endl;
            cout<<"|*****************************************************************|"<<endl;
        }else if(objetodia.num==JUEVES){
            cout<<"|**************************************************************|"<<endl;
            cout<<"| EL NUMERO INGRESADO ES CORRESPONDIENTE AL DIA JUEVES USUARIO |"<<endl;
            cout<<"|**************************************************************|"<<endl;
        }else if(dia==VIERNES){
            cout<<"|***************************************************************|"<<endl;
            cout<<"| EL NUMERO INGRESADO ES CORRESPONDIENTE AL DIA VIERNES USUARIO |"<<endl;
            cout<<"|***************************************************************|"<<endl; 
        }else if(dia==SABADO){
            cout<<"|**************************************************************|"<<endl;
            cout<<"| EL NUMERO INGRESADO ES CORRESPONDIENTE AL DIA SABADO USUARIO |"<<endl;
            cout<<"|**************************************************************|"<<endl;
        }else if(dia==DOMINGO){
            cout<<"|***************************************************************|"<<endl;
            cout<<"| EL NUMERO INGRESADO ES CORRESPONDIENTE AL DIA DOMINGO USUARIO |"<<endl;
            cout<<"|***************************************************************|"<<endl; 
        }else{
            cout<<"|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|"<<endl;
            cout<<"| LO SENTIMOS AL PARECER INGRESO UN NUMERO FUERA DEL RANGO ESTABLEDICO |"<<endl;
            cout<<"|xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx|"<<endl;
        }

        cout<<" SI DESEA REALIZAR OTRA OPERACION \n1 - PARA SI, \n0 - PARA NO "<<endl;
        cin>>objetodia.op;
    }while(objetodia.op==1);

    system("PAUSE");//nos pausa el programa
    return 0;//retorna el programa
}


