#include <stdio.h>
#include <stdlib.h>

int main()
{
 float vk,vs;
 const float x=0.27778;


printf("la vitesse en kilomètres par heure (km/h)");
scanf("%f",&vk);
vs = vk * 0.27778;
    printf("la vitesse mètres par seconde:%f=%f*%f",vs,vk,x);

    return 0;
}

