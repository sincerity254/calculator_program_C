#include <stdio.h>
#include <string.h>

int main() {

    char name[50] ="";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0'; // Remove the newline character

    if(strlen(name) == 0) {
        printf("You did not enter a name.\n");
    } 
    // Remove the newline character
    else {
        printf("Hello, %s", name);
    }




    return 0;
}