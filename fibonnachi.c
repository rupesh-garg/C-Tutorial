# include<stdio.h>

int main() {
    int n;
    printf("Enter number of terms required : ");
    scanf("%d", &n);

    int a, b, c, d;
    a = 0;
    b = 1; 
    printf("0, ");
    printf("1, ");
    
    int i = 0;
    while(i <= n-3) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
        i++;
    }

    // 2nd Method-
    // for or recursion.
    
    return 0;
}