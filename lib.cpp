#include "lib.h"
float funzione(int dim, float array[]){

    float max=array[1];
    for(int i=1; i<=dim ; i++){
        float array[i];
        float b= array[i];
        if( b > max ){
            max=b;
        }
    }
    return max;

}


