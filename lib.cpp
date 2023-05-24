#include "lib.h"
float funzione(int dim, float array[]){

    float max=array[0];
    for(int i=0; i<dim ; i++){

        if( array[i] > max ){
            max=array[i];
        }
    }
    return max;

}
