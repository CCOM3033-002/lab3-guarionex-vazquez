/*
    Lab3 - numeros aleatorios
    Guarionex Vazquez Soto
    801-22-1825
*/

#include <iostream>
#include <cstdlib>

using namespace std;


int main (){

    //inicializa el rng (random number generator)
    srand(time(0));

    //inicializa las variables con numeros aleatorios
    int n1aleatorio = rand() % (100 - 0 + 1) + 0, n2aleatorio = rand() % (100 - 0 + 1) + 0 ,
        n3aleatorio = rand() % (100 - 0 + 1) + 0;

    //desplega el proposito y los numeros sin orden
    cout << "\tEl proposito de este programa es generar 3 numero aleatorios y organizarlos segun orden descendiente."
         << "\n\tLos numeros genrados fueron: " << n1aleatorio << ", " << n2aleatorio << ", " << n3aleatorio << "." << endl;

    //la condicion de la estructura se cumple si n1 >= n2 y n2 >= n3 y despliega los numero en descendencia
    if (n1aleatorio >= n2aleatorio && n2aleatorio >= n3aleatorio){
        cout << "\tLos numero ordenados son: " << n1aleatorio << " >= " << n2aleatorio << " >= " 
             << n3aleatorio << ". " << endl;
    }
    
    //la condicion de la estructura se cumple si n1 >= n3 y n3 >= n2 y despliega los numero en descendencia
    else if (n1aleatorio >= n3aleatorio && n3aleatorio >= n2aleatorio){
        cout << "\tLos numero ordenados son: " << n1aleatorio << " >= " << n3aleatorio << " >= " 
             << n2aleatorio << ". " << endl;
    }

    //la condicion de la estructura se cumple si n2 >= n1 y n1 >= n3 y despliega los numero en descendencia
    else if (n2aleatorio >= n1aleatorio && n1aleatorio >= n3aleatorio){
        cout << "\tLos numero ordenados son: " << n2aleatorio << " >= " << n1aleatorio << " >= " 
             << n3aleatorio << ". " << endl;
    }

    //la condicion de la estructura se cumple si n2 >= n3 y n3 >= n1 y despliega los numero en descendencia
    else if (n2aleatorio >= n3aleatorio && n3aleatorio >= n1aleatorio ){
        cout << "\tLos numero ordenados son: " << n2aleatorio << " >= " << n3aleatorio << " >= " 
             << n1aleatorio << ". " << endl;
    }

    //la condicion de la estructura se cumple si n3 >= n1 y n1 >= n2 y despliega los numero en descendencia
    else if (n3aleatorio >= n1aleatorio && n1aleatorio >= n2aleatorio ){
        cout << "\tLos numero ordenados son: " << n3aleatorio << " >= " << n1aleatorio << " >= " 
             << n2aleatorio << ". " << endl;
        }

   
    //la condicion de la estructura se cumple si ninguna de las anteriores son ciertas
    // y despliega los numero en descendencia
    else {
        cout << "\tLos numero ordenados son: " << n3aleatorio << " >= " << n2aleatorio << " >= " 
             << n1aleatorio << ". " << endl;
    }

    return 0;
}
