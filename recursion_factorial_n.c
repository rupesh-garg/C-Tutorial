# include<stdio.h>
int factorial(int n);

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Factorial of the number is %d", factorial(n));

    return 0;
}

int factorial(int n) {
    if(n==1) {
        return 1;
    }
    int fNm1 = factorial(n-1);
    int fN = fNm1 * n;

    return fN;
}