#include <stdio.h>

void temperaturesInCelsius(float temp){ // remember the data type has to be simmilar with the one on the variable declaration
   printf("The following are the temps in C");
   printf("\n The temp in farenheit is : %.1f \n", temp);
}

// returning types
double temperaturesInFahrenheit(float temp){
    printf("Calculating the temps in F: \n");
    temp = (temp * 9 /5) +32;   
    return temp;
}

void whatDidYouType(){
   printf("bove are the temperatures");
}

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
        temperaturesInCelsius(temp);
    }else if(unit == 'f'){
        printf("\n please enter the temperature in Fahrenheit \n");
        scanf("%f", &temp);
        double tempsInFahrenheit = temperaturesInFahrenheit(temp);
        printf("The temperature in fahrenheit is %.2lf \n ", tempsInFahrenheit);       
    }else{       
        whatDidYouType();
    }
   
    return(0);

}