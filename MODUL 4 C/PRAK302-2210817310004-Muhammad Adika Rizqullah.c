#include<stdio.h>

int main()
{
    for (int i = 0; i<=4; i++){
            int a;
    scanf("%d", &a);

    if(a>=80){
        printf("A", a);
    }
    else if(a>=70){
        printf("B", a);
    }
    else if(a>=60){
        printf("C", a);
    }
    else if(a>=50){
        printf("D", a);
    }
    else{
        printf("E", a);
    }
    }
}
