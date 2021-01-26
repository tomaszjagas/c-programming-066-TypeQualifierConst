#include <stdio.h>

int main(void) {
    const double pi = 3.1415925654;
    
    const int days[12]={31,28,31,30,31,28,31,30,31,28,31,30};

    typedef const int zip;
    const zip q=8;

    const float *pf; // pf points to a constant float value
    float *const pt; //pt is const pointer
    const float *const ptr;
    float const *pfc; // same as const float *pfc;

    return 0;
}