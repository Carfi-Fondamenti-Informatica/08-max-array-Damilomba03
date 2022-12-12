#include "lib.h"
float max(float a[], int x) {
    float b=1;
    for (int i=0; i<x; i++){
        if(a[i]>b){
            b=a[i];
        }
    }
    return b;
}

