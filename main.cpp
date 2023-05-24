#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int dim;
    float array[dim];
    
    //cout << "inserire dimensione dell'array"<< endl;
    cin >> dim;

    //cout << "inserire i valori dell'array uno dopo l'altro"<<endl;
    for(int i=0;i<dim;i++){
        //cout<< "inserire il valore n ""+i+ ""dell'array "<<endl;
        cin >> array[i];
    }
   float max=funzione(dim);
    //return y;
    cout << max;

return 0;
}
