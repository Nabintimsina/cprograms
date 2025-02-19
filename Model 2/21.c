#include<stdio.h>

int main() {
    int n, i;

    printf("Enter the number to check: ");
    scanf("%d", &n);

    // Check if the number is less than 2
    if (n < 2) {
        printf("The number is not prime.\n");
        return 0;  // Corrected: return 0 instead of 1
    }
    if(n==2)
    	{
    		printf("The number is prime . \n");
    		return 0;
		}

    i = 2;

check:
    if (n % i == 0) {
        printf("Number is not prime.\n");
        goto end;
    }

    i++;

    if (i <= n / 2) {
        goto check;
    }

    printf("Number is prime.\n");

end:
    return 0;  // Corrected: return 0
}
