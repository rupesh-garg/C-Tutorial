# include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    int a = 0;
    for(int i = n ; i >= 0 ; i--) {
        a = a + i;
        printf("%d \n", i);
    }

    printf("sum is : %d", a);
    return 0;
}