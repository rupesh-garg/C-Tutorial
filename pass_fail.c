# include<stdio.h>

int main() {

    //First method -
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

    if(marks > 30 && marks < 100 ) {
        printf("PASS \n");
    }
    else if(marks <= 30 && marks >= 0) {
        printf("FAIL \n");
    }
    else {
        printf("Wrong marks \n");
    }

    //Second method - 
    //marks > 30 ? printf("PASS") : printf("FAIL");

    return 0;

    
}