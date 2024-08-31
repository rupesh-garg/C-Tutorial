# include<stdio.h>
//if got 1 -> evn
//if got 0 -> odd

int main() {
    int x;
    printf("enter the number : ");
    scanf("%d", &x);

    printf("%d", x % 2 == 0);
    return 0;
}