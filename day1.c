#include <stdio.h>
int main() {
//print my information
printf("My name:Jondy\n");
printf("My age:25\n");
printf("My favorite hobby: coding\n");
// Get user input
char name[50];
int age;
printf("Enter your name: ");
scanf("%s", name);
printf("Enter your age: ");
scanf("%d", &age);
printf("Hello %s! you are %d years old. Welcome\n", name, age);
return 0;
}
