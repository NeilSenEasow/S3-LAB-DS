#include<stdio.h>
struct poly {
    int coeff;
    int expo;
}p1[10],p2[20],p3[30];

int readPoly(struct poly p[]) {
    int terms,i;
    
    printf("Enter terms: ");
    scanf("%d",&terms);
    for( i = 0 ; i< terms ; i++) {
        printf("Enter coefficient: ");
        scanf("%d",&p[i].coeff);
        printf("Enter exponent: ");
        scanf("%d",&p[i].expo);
    }
    return terms;
}

void display(struct poly p[],int t) {
    int i;
    printf("\n");
    for( i = 0 ; i < t-1 ; i++ ) {
        printf("%d x^%d +",p[i].coeff,p[i].expo);
    }
    printf("%d x^%d ",p[t-1].coeff,p[t-1].expo);
}

int addPoly(struct poly p1[],struct poly p2[],int t1,int t2,struct poly p3[]) {
    int i= 0;
    int j = 0;
    int k = 0;
    while( i < t1 && j < t2 ) {
        if(p1[i].expo == p2[i].expo) {
            p3[k].expo = p1[i].expo;
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            i++;
            j++;
            k++;
        }
        else if(p1[i].expo < p2[j].expo) {
            p3[k].expo = p2[j].expo;
            p3[k].coeff = p2[j].coeff;
            k++;
            j++;
        }
        else {
            p3[k].expo = p1[i].expo;
            p3[k].coeff = p1[i].coeff;
            k++;
            i++;
        }

    }
    return k;
}

int main() {
    int t1,t2,t3;
    printf("\nPolynomial 1\n");
    t1 = readPoly(p1);
    display(p1,t1);
    printf("\nPolynomial 2\n");
    t2 = readPoly(p2);
    display(p2,t2);
    printf("\nSum\n");
    t3 = addPoly(p1,p2,t1,t2,p3);
    display(p3,t3);
}
