# include<stdio.h>

int main() {
    int n;
    printf("Multipcation table of : ");
    scanf("%d", &n);
    
    for(int x = 0; x <= 10; x++) { 
        printf("%d \n", n*x);
    }

    return 0;
}