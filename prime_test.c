#include <stdio.h>
#include <math.h>

int main() {
    int x, i;
    int prime = 1;

    scanf("Enter a positive integer: %d", &x);

    for (i = 2; i <= sqrt(x); ++i) {
	if (x % i == 0)
	    prime = 0;

    if (prime)
        printf("%d is prime.\n", x);
    else printf("%d is composite (or 1).\n", x);

    return 0;
}
