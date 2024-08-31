# include<stdio.h>

//this code uses if-else function instead of reccursion for checking a number is an arastrong no. or not.
//however this code can only check a no. of upto 4 digits only. 
int main() {
    int number, sum;
    printf("enter your number : ");
    scanf("%d", &number);

    if(number / 10 == 0) {
        int a;
        a = number % 10;
        sum = a;
    }
    else if(number / 100 == 0) {
        int a, b;
        a = number % 10;
        b = number / 10;
        sum = a * a + b * b;
    }
    else if(number / 1000 == 0) {
        int a, b, c;
        a = number % 10;
        b = number / 10;
        b = b % 10;
        c = number / 100;
        sum = a * a * a + b * b * b + c * c * c;
    }
    else if(number / 10000 == 0) {
        int a, b, c, d;
        a = number % 10;
        b = number / 10;
        b = b % 10;
        c = number / 100;
        c = c % 10;
        d = number / 1000;
        sum = a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d;
    }
    else {
        printf("I have devloped these armstrong no. for upto 4 digits only you can make it upto any digits similarly \n");
    }

    if(sum == number) {
        printf("%d is an armstrong number", number);
    }
    else {
        printf("%d is not an armstrong number", number);
    }

return 0;
}