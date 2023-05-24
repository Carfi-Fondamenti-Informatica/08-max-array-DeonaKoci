#include <iostream>
#include "lib.h"
using namespace std;

int main() {
   int dim=0;
    //cout<< "inserire dim"<< endl;
    cin>> dim;
    float array[dim];
    for(int i=0; i<dim; i++){
       cin >> array[i];
    }
    cout << funzione(dim,array) << endl;
    return 0;
}
