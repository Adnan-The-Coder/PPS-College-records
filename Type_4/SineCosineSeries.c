#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    double x, sine = 0, cosine = 0, term;
    int n, i;

    printf("Enter angle in radians: ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        term = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
        cosine += term;

        if (i > 0)
            sine += pow(-1, i - 1) * pow(x, 2 * i - 1) / factorial(2 * i - 1);
    }

    printf("Sine: %lf\n", sine);
    printf("Cosine: %lf\n", cosine);
    return 0;
}
