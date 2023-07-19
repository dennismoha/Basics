#include <stdio.h>
#include <stdbool.h>



int main(void){
    int x; // declaration 
    char name[] = "my name";
    char school[] = "my school";
    int age = 10;
    char grade = 'C';
    float gpa = 2.05; // 4 bytes (32 bits of precision) . %f
    double average = 3.92345; // 8 bytes (64 bits of precision)n   . %
    bool e = true; // uses only 1 byte of memory  %d

    short int h = 32767; //2 bytes (-32,768 to + 32,767)  %d  can also be short h = 32767
    unsigned short int i = 65535; //2bytes (1 to + 65,535 ) %d   can also be unsigned short i = 65535
    int j = 23455677; // 4 bytes () %d
    unsigned int k = 456666; // 4 bytes() %u

    long long int i = 999999999999; // 8 bytes () %//lld
    unsigned long long  int m = 8899938939U; //8 bytes () %llu   .. be aware of the u

    printf("You are %d years old \n", age);
    printf("your grade is %c \n", grade);
    printf("the name of yoru school is %s :\n", school);
    printf(" your gpa is %f \n", gpa);
    return(0);

}