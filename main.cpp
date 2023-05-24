#include <iostream>
#include "lib.h"
using namespace std;


int main() {

    float max=0;
    int dim=0;
    //cout<< "inserire dim"<< endl;
    cin>> dim;
    float array[dim];
    for(int i=1; i<=dim; i++){
       cin >> array[i];
    }
    max = funzione(dim,array);
    cout << max;

    return 0;
}
