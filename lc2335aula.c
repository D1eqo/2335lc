#include <stdio.h>

int fillCups(int* amount, int amountSize){

    int C=0, S=0, CC=0;
    
    while(1){
        CC=0;
        for(int i=0; i<amountSize; i++){
            if (amount[i]>0 && C<=2){
                amount[i]--;
                C++;
            } else {
                CC++;
            }
        }
        S++;
        if(CC==3) break;
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
