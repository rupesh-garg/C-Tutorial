#include<stdio.h>

int main() {
    long nc;

    nc = 0;
    while ((getchar() != EOF)) {
        ++nc;
       }
         printf("%2d\n", nc);

    return 0;
}