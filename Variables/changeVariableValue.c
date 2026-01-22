#include <stdio.h>

/* Basic Case */
// Here I declare a variable and assign a value
int myNum = 15;

// Now I replace the old value with a new one
myNum = 10;

/* Replace a value with another variable value*/
int myFirstNum = 15;

int mySecNum = 23;

// myFirstNum now is 23 (was 15)
myFirstNum = mySecNum;

/* Variable add*/

int main(){
    int x = 5;
    int y = 2;
    int sum = x + y;
    printf("%d\n", sum);

    int a = 2;
    a = a + 1;
    printf("%d\n", a);
    return 0;
}