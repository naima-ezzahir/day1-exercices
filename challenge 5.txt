#include <stdio.h>
#include <stdlib.h>

int main()
{
 float t;

printf("donner la température en Celsius ");
scanf("%f",&t);

 if(0 <= t|| t< 100){
        printf(" Liquide");

 }
 if( t >= 100 ){
     printf(" gaz");}
    else('Solide');
    return 0;
}
