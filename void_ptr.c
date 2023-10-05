#include <stdio.h>
void main() 
{
    int a =5;
    double b =3.233;
    void*vp;

    vp = &a;
    printf("\n a=%d",((int*)vp));
    vp = &b;
    printf("\n b=%d",((double*)vp));
    // return 0;
}