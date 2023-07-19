#include <stdio.h>
#include <math.h>



int main(void){
    const double PI = 3.14159;  
    double radius ;
    double circumference;
    double diameter = radius + radius; 
    
    printf("\n Enter the radius of the circle");
    scanf("%lf", &radius);
    circumference = PI * 2 * radius;

    printf(" The circumference is %lf ", circumference );
    return(0);

}