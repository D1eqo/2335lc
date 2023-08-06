#include <stdio.h>

int fillCups(int* amount, int amountSize){

    int C=0, S=0;
    
    while(amount[0]>0 || amount[1]>0 || amount[2]>0){
        C=0;
        if (amount[0]>0 && amount[0]>=amount[2]){
            amount[0]--;
            C++;
        }
        if (amount[1]>0){
            amount[1]--;
            C++;
        }
        if (amount[2]>0 && C!=2){
            amount[2]--;
        }
        S++;
    }
    return S;
}

int main() {
    int amount[] = {1, 2, 3};
    int amountSize = sizeof(amount) / sizeof(amount[0]);
    int S = fillCups(amount, amountSize);
    printf("%d\n", S);

    return 0;
}
