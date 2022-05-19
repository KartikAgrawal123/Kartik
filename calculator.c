#include<stdio.h>
int main(){
    int add, diffrence, multiply, choice, num1, num2;
    float division, int1, int2;
    printf("Enter the first number ");
    scanf("%d", &num1);
    printf("Enter the second number ");
    scanf("%d", &num2);
    printf("1. If you want to add two number enter 1 \n");
    printf("2. If you want to subtract two number enter 2 \n");
    printf("3. If you want to multiply two number enter 3\n");
    printf("4. If you want to divide two number enter 4 \n");
    printf("from the given instruction which calculation you need to do chose <1/2/3/4> ");
    scanf("%d", &choice);

    add = num1 + num2;
    diffrence = num1 - num2;
    multiply = num1 * num2;
    int1 = num1;
    int2 = num2;
    division = int1 / int2;
    if(choice==1){
        printf("the sum is %d", add);
    }
    else if (choice==2){
        printf("the diffrenrce is %d" ,diffrence);
    }
    else if (choice==3)
    {
        printf("the result of multiplication is %d", multiply);
    }
    else if (choice==4)
    {
        printf("the result of divison is %f", division);
    }
    else{
        printf("Invalid choice");
    } 
    return 0;
} 
