#include <stdio.h>
#include <stdbool.h>

bool KStest(int r[], int n, float dAlpha) {
    float dPlus = 0, dMinus = 0, d1, d2, d;

    for (int i = 0; i < n; i++) {
        d1 = ((float)(i + 1) / n) - r[i];
        if (d1 > dPlus) {
            dPlus = d1;
        }

        d2 = r[i] - ((float)i / n);
        if (d2 > dMinus) {
            dMinus = d2;
        }
    }

    if (dPlus > dMinus) {
        d = dPlus;
    } else {
        d = dMinus;
    }

    if (d > dAlpha) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int r[100], n;
    float dAlpha;
    printf("Rojan Ghimire\n");
    printf("Enter number of data points: ");
    scanf("%d", &n);

    printf("Enter data points in ascending order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &r[i]);
    }

    printf("Enter Critical Value (dAlpha): For [0.05] Significance level ");
    scanf("%f", &dAlpha);

    if (KStest(r, n, dAlpha)) {
        printf(" Accept Null Hypothesis.\ni.e., The numbers are uniformly distributed.\n");
    } else {
        printf("Reject Null Hypothesis\n.i.e., The numbers are not uniformly distributed.\n");
    }

    return 0;
}