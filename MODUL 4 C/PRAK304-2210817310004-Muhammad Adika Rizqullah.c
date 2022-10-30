#include <stdio.h>

int main()
{
    for(int i = 1; i<=5; i++){
    int a;
    scanf("%d", &a);

    if(a==0){
        printf("Nol\n", a);
    }
    else if(a<=9){
        printf("Satuan\n", a);
    }
    else if (a<=19) {
            printf("Belasan\n", a);
    }
    else if (a>=100){
        printf("Anda Menginput Melebihi Limit Bilangan\n", a);
    }
    else {
        printf("Puluhan\n");
    }
    }
}

