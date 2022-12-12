#include "lib.h"
float massimo(float a[], int h) {
    float d=1;
    for (int i=0; i<h; i++){
        if(a[i]>d){
            d=a[i];
        }
    }
    return d;
}

