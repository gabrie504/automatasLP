#include <iostream>
using namespace std;

int main() {
    //tabla de simbolos
    string TablaSimbolos[3] = {"mientras","si","sino"};

    //qe significa estado de error
    enum TEstado {q0,q1,qe};

    TEstado Estado;

    //otras variables
    string Cadena;
    int Simbolo;

    int longitud;
    int i; //posicion del caracter leido

    i = longitud = 0;
    Estado = q0;

<<<<<<< HEAD
    cout << "esto solo es una prueba para git  123456 " << endl;
    cout << "codigo escrtito desde el editor de git hub 2";
}
=======
    cout << "ingrese una de las palabras recervads ,mientras ,sino,si: ";
    cin >> Cadena;

    longitud = Cadena.size();

    while(longitud > i && Estado != qe){
        Simbolo = Cadena[i];

        switch (Estado) {
            case q0:
                if(Simbolo >= 'a' and Simbolo <= 'z'){
                    Estado = q1;
                }
                break;
            case q1:
                if (Simbolo >= 'a' and Simbolo <= 'z'){
                    Estado = q1;
                }
                else{
                    Estado = qe;
                }
                break;
        }
        i++;
    }

    if (Estado == q1){
        cout << "cadena valida" << endl;
        //ahora se busa si la cadena esta en el arreglo

        //devuelve un numero entero que dira la cantidad de elemneots que tiene el arreglo

        int tamanioArreglo = sizeof TablaSimbolos / sizeof TablaSimbolos[0];
        for(int j=0; j< tamanioArreglo ; j++){
            if(Cadena.compare(TablaSimbolos[j]) == 0){
                cout<<"palabra recerveda: " << Cadena <<endl;
                break;
            }
            else{
                cout<< "cadena no valida" << endl;
            }

        }

    }
    return 0;
}
>>>>>>> f32ed5b (todos los codigos de la clase replicados)
