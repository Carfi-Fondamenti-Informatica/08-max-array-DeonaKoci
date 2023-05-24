using namespace std;
#include "lib.h"
float funzione(int dim){
    int i;
    float array[dim];
    float max=array[dim];

    
    max=array[0];
    for(i=1;i<dim;i++){
        if(max> array[i]){
        }else {max=array[i];
        }
    }return max;
}
