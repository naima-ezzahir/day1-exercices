#include <stdio.h>
#include <stdlib.h>

int main()
{
 float k,y;
 const float x=1093.61;


printf("entrer  la distance en kilometres");
scanf("%f",&k);
y = k * 1093.61;
    printf("la distance en yards:%f=%f*%f",y,k,x);

    return 0;
