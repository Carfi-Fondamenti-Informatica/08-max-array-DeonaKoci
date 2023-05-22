#include <iostream>
using namespace std;
#include "lib.h"
float funzione(int v){
    int i;
    float array[v];
    float b=array[v];
    float r;
    cout << "inserire i valori dell'array uno dopo l'altro"<<endl;
    for(i=0;i<v;i++){
        cout<< "inserire il valore n ""+i+""dell'array "<<endl;
        cin >> array[i];
    }r=array[0];
    for(i=1;i<v;i++){
        if(r> array[i]){
        }else {r=array[i];
        }
    }return r;
}
