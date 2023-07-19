#include <stdio.h>
#include <string.h> 

/*
    When dealing with string functions remember to include the header <string.h>
*/

int main(void){
    char string1[] = "Bro";
    char string2[] = "code"
    //strlwr(string1);   // converts a string to lowercase
    //strupr(String1);  // converts a string to uppercase
    //strcat(string1, string2); // concantenates both string 1 and 2 into one string
    //strncat(string1, string2, n); // appends n characters from string1 to string2
    //strcpy(string1, string2); // copy string2 to string1;
    //strncpy(string1, string2, n); // copy n characters of string2 to string 1

    //strset(string1, 'n' ); //sets all characters of a string to a given character. In this case, sets all characters of string 1 to n;
    //strset(string1, 'n', 1); // sets first n characters of a string to a given character. In this case, set the first character of string1 to n
    //strrev(string1); //reverses a string


    // int result = strlen(string1);  // returns the length of a string as an integer
    // int result = strcmp(string1, string2); //compares all string characters and returns 0 if they're same;
    // int result = strncmp(string1, string2, n); //compares n strings of string1 and string2;
    // int result = strncmpi(string1, string2) // compares string1 and string2 except that here they cases are ignored
    // int result = strnicmp(string1, string1, n); // compares n characters of string1 and string2 except that cases are ignored

    printf("%s", string1)
   
    return(0);

}

