#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int x;
    cin>>x;
    float a[x];
    float y;
    for(int i=0; i<x; i++){
        cin>>y;
        a[i]=y;
    }
    cout<<max(a,y);

    return 0;
}
