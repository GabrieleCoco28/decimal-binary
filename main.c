#include <stdio.h>

int findPower(int number);
int power(int number, int pow);

int main() {

    int number = 0;
    int nextNumber;

    printf("inserisci un numero: ");
    scanf("%d", &number);
    
    nextNumber = number;
    int iterations = findPower(number);

    for(int i = iterations; i >= 0; i--) {
        if(nextNumber - power(2, i) >= 0) {
            printf("1");
            nextNumber -= power(2, i);
        }else {
            if(i == 0) {
                printf("1");
            }else {
                printf("0");
            }
        }
    }

    return 0;
}
int findPower(int number) {
    int pow = 1;
    int value = 0;

    while(power(2, pow + 1) <= number) {
        pow++;
        value = power(2, pow);
    }

    return pow;
}
int power(int number, int pow) {
    int _pow = 1;
    if(pow == 0) 
        return 1;
    else {
        for(int i = 1; i <= pow; i++)  {
            _pow *= number;
        }
        return _pow;
    }
}