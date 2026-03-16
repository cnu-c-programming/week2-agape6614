#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int ls[a+1];

    for(int i = 0; i <= a; i++){
        ls[i] = 0;
    }

    ls[0] = 1;
    ls[1] = 1;
    long temp = 2;
    for(int i = 2; i*i <= a; i++){
        if(ls[i] == 0){
            for(int j = 1; i*j <= a; j++){
                ls[i*j] = 1;
            }
        }
    }

    if(ls[a] == 1){
        printf("false");
    }
    else{
        printf("true");
    }


    
    return 0;
}

