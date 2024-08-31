# include<stdio.h>
void spda2(float a, float b);

int main() {
    float x, y;
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);

    spda2(x, y);

    return 0;
}

void spda2(float a, float b) {
    printf("sum = %f \n", a + b);
    printf("multiplication = %f \n", a * b);
    printf("division = %f \n", a/b);
    printf("average = %f", (a + b)/2);
}