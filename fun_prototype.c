#include <stdio.h>
#include <stdbool.h>

void MerryChristmas(char name[], int age); // function prototype
bool AgeCheck(int age);

int main(){

    if(AgeCheck(24)){
        printf("You can apply for the job\n");

    }
    else{
        printf("You are children you can't apply\n");
    }

    MerryChristmas("Sampaul", 23);


    return 0;
}

void MerryChristmas(char name[], int age){
    printf("Merry Christmas %s\n", name);
    printf("You are %d years old\n", age);
    
}

bool AgeCheck(int age){
    return age >= 23;
}