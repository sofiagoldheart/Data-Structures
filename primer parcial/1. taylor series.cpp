//Fecha de creacion: 22/01/2022
//Fecha de ultima actualizacion: 24/01/2022
//Nombre del programa: Series de Taylor e^x - ciclos anidados
//Nombre del programador: Sofia Ruvalcaba de la Noval

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int i = 0, n, j;
    double x, f;
    float e = 0;

	cin >> x;// entrada de valor para x
    cin >> n;// entrada de n terminos 
	
    while (i <= n){
        j = 1;
        f = 1;
        while (j <= i){
            f = f * j;
            j = j + 1;
        }
        e = e + pow (x,i) / f;
        i = i + 1;
    }
        printf("%.3f",e); // salida
   }
   