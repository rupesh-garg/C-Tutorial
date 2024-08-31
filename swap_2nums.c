# include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x,y;
    printf("X = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    _swap(&x, &y);
    printf("x = %d, y = %d", x, y);
    return 0;
}

//call by value
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
