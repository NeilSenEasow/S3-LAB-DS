#include <stdio.h>

struct poly {
    int coeff;
    int expo;
} p1[10], p2[20], p3[30];

int readPoly(struct poly p[]) {
    int terms, i;
    
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    for (i = 0; i < terms; i++) {
        printf("Enter coefficient and exponent (e.g., 3 2 for 3x^2): ");
        scanf("%d %d", &p[i].coeff, &p[i].expo);
    }
    return terms;
}

void display(struct poly p[], int terms) {
    int i;
    printf("\n");
    for (i = 0; i < terms; i++) {
        printf("%dx^%d", p[i].coeff, p[i].expo);
        if (i < terms - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

int addPoly(struct poly p1[], struct poly p2[], int t1, int t2, struct poly p3[]) {
    int i = 0, j = 0, k = 0;

    while (i < t1 && j < t2) {
        if (p1[i].expo == p2[j].expo) {
            p3[k].expo = p1[i].expo;
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            i++;
            j++;
            k++;
        } else if (p1[i].expo > p2[j].expo) {
            p3[k].expo = p1[i].expo;
            p3[k].coeff = p1[i].coeff;
            i++;
            k++;
        } else {
            p3[k].expo = p2[j].expo;
            p3[k].coeff = p2[j].coeff;
            j++;
            k++;
        }
    }

    // Add remaining terms from p1, if any
    while (i < t1) {
        p3[k].expo = p1[i].expo;
        p3[k].coeff = p1[i].coeff;
        i++;
        k++;
    }

    // Add remaining terms from p2, if any
    while (j < t2) {
        p3[k].expo = p2[j].expo;
        p3[k].coeff = p2[j].coeff;
        j++;
        k++;
    }

    return k;
}

int main() {
    int t1, t2, t3;

    printf("\nPolynomial 1\n");
    t1 = readPoly(p1);
    printf("Polynomial 1: ");
    display(p1, t1);

    printf("\nPolynomial 2\n");
    t2 = readPoly(p2);
    printf("Polynomial 2: ");
    display(p2, t2);

    printf("\nSum\n");
    t3 = addPoly(p1, p2, t1, t2, p3);
    printf("Sum: ");
    display(p3, t3);

    return 0;
}
