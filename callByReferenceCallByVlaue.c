// Introduction to pointers. Call by Value and Call by reference.

#include<stdio.h>
#include<conio.h>

void callByValue(int m, int n){
    int temp;
    temp=m;
    m=n;
    n=temp;
}

void callByReference(int *m, int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}

void main()
{
    int a=10,b=20;
    printf("Value of before any function call a = %d and b = %d\n",a,b);
    
    callByValue(a,b);
    printf("Value of after callByValue call a = %d and b = %d\n",a,b);
    
    callByReference(&a,&b);
    printf("Value of after callByReference call a = %d and b = %d\n",a,b);

    getch();
}
