#include <stdio.h>
#include <stdlib.h>

int main() {
	int infinite = 0;
	int num = 2;
	int div = 2;
	int is_prime = 0; //0 = num is prime / 1 = num not is prime

	while (infinite == 0) { //infinite condition 

		while (div < num) {
			if (num % div == 0) {
				is_prime = 1;
			}
			div++;
		}
		if (is_prime == 0) {
			printf("-> %i\n", num);
		}
		num++;
		div = 2;
		is_prime = 0;

	}	

	return 0;
}