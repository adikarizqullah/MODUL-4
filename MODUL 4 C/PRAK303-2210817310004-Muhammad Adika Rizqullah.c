#include <stdio.h>

int main()
{
    for (int i = 0; i<=4; i++){
            int a;
    scanf("%d", &a);

    if(a>0){
        printf("Positif", a);
    }
    else if (a<0){
        printf("Negatif", a);
    }
    else{
        printf("Nol", a);
    }
    }
}

