#include <iostream>
using namespace std;

int main(){

    int a;
    int mayor = 0;

    cout << "Ingrese numeros y para finalizar ingrese 0" << endl;



    while (a != 0){

        cin >> a;

        if(a > mayor)
        {
            mayor = a;
        }
    }

    cout << "El numero mayor es: " << mayor;
    
    return 0;
}
