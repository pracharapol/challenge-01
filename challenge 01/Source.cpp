#include<stdio.h>
#include<math.h>
int main() {
	printf("total of :");
	int a, b, x = 0;
	float y = 0, z, c{};
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		for (; a <= b; a++) {
			printf("%d ", a);
			x += a;
			y += 1;
			c += a * a;
		}
		printf("\nAverage = %.2f", x / y);
		z = sqrt(((y * c) - (x * x)) / (y * (y - 1)));
		printf("\nSD = %.2f", z);
	}
	else {
		if (a > b) {
			for (; b <= a; a--) {
				printf("%d ", a);
				x += a;
				y += 1;
				c += a * a;
			}
			printf("\nAverage = %.2f", x / y);
			z = sqrt(((y * c) - (x * x)) / (y * (y - 1)));
			printf("\nSD = %.2f", z);
		}
	}
	return 0;
}