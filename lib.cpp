#include "lib.h"
float funzione(int dim, float array[]){

    float max=array[1];
    for(int i=1; i<=dim ; i++){

        if( array[i] > max ){
            max=array[i];
        }
    }
    return max;

}
