#include <stdio.h>


int main(void){
    char unit;
    float temp;

    printf("\n is the temperature in F or C ?");
    scanf("%c", &unit);

    if(unit == 'c'){
        printf("The temperature is in c: \n");
        printf("\n please enter the temperature \n");
        scanf("%f", &temp);
        temp = (temp * 9 /5) +32;
        printf("\n The temp in farenheit is : %.1f \n", temp);
    }else if(unit == 'f'){
        printf("The temperature is in F: \n");
    }else{
        printf("What exactly did you type \n");
    }
   
    return(0);

}