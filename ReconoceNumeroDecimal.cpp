#include <iostream>
using namespace std;

int main(){
    enum TEstado{q0,q1,q2,q3,q4};

    //varieble de estados 
    TEstado estado;

    //otras variables 
    string Cadena; //almacena la maquina que se va avalidar
    int simbolo; // rango de validacion en ASCCi

    int i;// iterrador de carracter leid
    int longitud; //tamanio total de la caena a leer

    //valores iniciales 
    i=longitud=0;
    estado = q0;

    cout << "ingrese la cadena de numeros " << endl;

    cin>> Cadena;

    longitud = Cadena.size();

    while (longitud > i)
    {
        simbolo = Cadena[i];

        switch (estado)
        {
        case q0:

        if(simbolo == '-'  || simbolo == '+')
        {
            estado = q1;
        }
            break;
        
        case q1:
        if(simbolo >= '0' && simbolo <= '9'){
            estado = q2;
        }
        break;
        case q2:
        if(simbolo >=1 && simbolo <= 9){
            estado = q2;
        }
        else{
            if(simbolo == '.'){
                estado = q3;
            }
        }
        break;
        case q3:
        if(simbolo >= '0' && simbolo <= '9'){
            estado = q4;
        }
        break;
        case q4:
        if(simbolo >= '0' && simbolo <= '9'){
            estado = q4;
        }
        break;
    }
    if(!(simbolo >= '0' && simbolo <= '9') &&
      !(simbolo == '-'  || simbolo == '+')&&
      !(simbolo == '.')){
          break;
      }

      i++; 
    }

    if(estado == q4)
    cout << "cadena aceptada";
    else
    cout << "cadena Novalida";

    return 0;

}

