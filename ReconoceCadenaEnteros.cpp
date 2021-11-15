#include <iostream>
using namespace  std;

int main() {

    enum TEstado{q0,q1};

    TEstado estado;

    string Cadena;
    int Simbolo;
    bool EsNumero;

    int i;
    int longitud;

    i = longitud =0;
    estado = q0;

    EsNumero = false;
     cout << "ingrese una cadena de numeros: " << endl;
     cin >> Cadena;

     longitud = Cadena.size();

    while (longitud > i){
        Simbolo = Cadena[i];

        EsNumero = (Simbolo >= '0' and Simbolo <= '9');

        if (estado == q0){
            if (EsNumero){
                estado = q1;
            }
        }

        if (estado == q1){
            if(EsNumero){
                estado = q1;
            }
        }

        if (!EsNumero){
            estado = q0;
            break;
        }

        i++;
    }

    if (estado == q1){
        cout << "cadena aceptada"<<endl;
    }else{
        cout <<" caedena NO valida" << endl;
    }



    return 0;
}