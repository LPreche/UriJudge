#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, maiorab, maiorac,maiorf;
    scanf ("%d" "%d" "%d",&A, &B, &C);
    maiorab = ((A+B+ abs(A-B))/2);
    maiorac = ((A+C+ abs(A-C))/2);
    maiorf = ((maiorab + maiorac + abs(maiorab-maiorac))/2);



    printf ("%i eh o maior\n",maiorf);
    return 0;
}