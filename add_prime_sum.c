#include <stdlib.h>
#include <stdio.h>

int approxSqrt(int n);
int isPrime(int n);

int main(int argc, char** argv) {
	int maxN = atoi(argv[1]);
	int acc = 0;
	
	if (argc != 2 || maxN <= 0) {
		printf("0\n");
		return 0;
	}
	
	for (int i = 2; i <= maxN; ++i) {
		if (isPrime(i)) {
			acc += i;
		}
	}
	
	printf("%d\n", acc);
	
	return 0;
}

int isPrime(int n) {
	int sqrt = approxSqrt(n);
	for (int i = 2; i <= sqrt; ++i) {
		if (n % i == 0) return 0;
	}
	
	return 1;
}

int approxSqrt(int n) {
	int sqrt = 1;
	
	while (sqrt * sqrt < n) {
		sqrt++;
	}
	
	if (sqrt >= n) sqrt--;
	
	return sqrt;
}
