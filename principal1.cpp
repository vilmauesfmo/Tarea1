//Continuacion del EJERCICIO #1
#include <iostream>//nos permite usar el using y lo que contiene dentro
#include <stdio.h>//permite los datos de entrada y salida
#include "pila.h"//libreria con la que mandamos a llamar a la clase
#include <stack>////es una lista ordinal o estructura de datos en la que el modo de acceso a sus elementos es de tipo LIFO

using namespace std;//nos permite usar el cout y cin y los string
enum opciones{INSERTAR, MOSTRAR, VERIFICAR, VER, SALIR};//Nuestras opciones para el menu son 
int menu();

int main()//inicio de nuestra funcion main 
{
    pila objetoPila;//mandamos a llamar al objeto 
    stack <char> Letras;//implementamos la funcion stadk
    int op;
    int resp =0, opSub=1;
    //se creara un menu para que el usuario ingrese la opcion que desee
    do{
        opSub = menu();
        op=(opciones)opSub;

        switch (op)
        {
        case INSERTAR:
            cout<<" INGRESE LA LETRA PARA LA PILA "<<endl;
			cin>>objetoPila.letras;
			Letras.push(objetoPila.letras);
			cout<<" EL ELEMENTO FUE INSERTADO CORRECTAMENTE "<<endl;
        break;

        case MOSTRAR:
            if(Letras.empty()){
					cout<<" NO SE INSERTO NINGUNA LETRA PARA LA PILA "<<endl;
			}else{
				cout<<"\nDATOS"<<endl;
				while(!Letras.empty()){
						cout<<Letras.top()<<" || ";
						Letras.pop();
				}
			}
        break;

        case VERIFICAR:
            if(Letras.empty()){
				cout<<" LA PILA SE ENCUENTRA VASIA "<<endl;
			}else{
				cout<<" SE ENCUENTRA INFORMACION EN LA PILA "<<endl;
			}
        break;

        case VER:
            cout<<" LA PILA CONTIENE "<<Letras.size()<<" ELEMENTOS "<<endl;
        break;
        
        default:
            cout<<" LA OPCION INGRESADA NO ES VALIDA "<<endl;
        break;
        }
        cout<<" SI DESEA REALIZAR OTRA OPERACION \n1 - PARA SI, \n0 - PARA NO"<<endl;
        cin>>resp;

    }while (resp==1);

    return 0;// retorna el programa 
}
int menu()
{
    int optemporal;//declaramos nuestra opcion como entero
    //creamos las opciones del menu
    cout<<"|***********************************************|"<<endl;
	cout<<"|     SELECIONE LA OPCION QUE DESEE USUARIO     |"<<endl;
	cout<<"|          0-> INSERTAR ELEMENTOS               |"<<endl;
	cout<<"|          1->MOSTRAR ELEMENTOS                 |"<<endl;
	cout<<"|     2-> VERIFICAR SU LA PILA ESTA BASIA       |"<<endl;
	cout<<"|     3-> VER EL NUMERO DE REGISTRO DE LA PILA  |"<<endl;
    cout<<"|               4-> SALIR                       |"<<endl;
    cout<<"|***********************************************|"<<endl;
	cin>>optemporal;//con esto imprimismos la opcion que ingreso el usuario y a la vez la guardamos 
    return optemporal;
}
