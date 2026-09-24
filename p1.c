#include <stdio.h>


int main() {
    char name[50];
    printf("enter your name:");
    fgets(name,sizeof(name),stdin);

    printf("My name is %s", name);

    return 0;
}