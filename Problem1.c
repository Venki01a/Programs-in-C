#include <stdio.h>
#include <stdlib.h>

int fact(int k) {
    return k==1? 1 : k*fact(k-1);
}
typedef int*  Perm;

typedef Perm* PermList;

PermList create_perm_list(int k) {
    int fk = fact(k); 
    PermList M = (PermList) malloc(sizeof(Perm) * fk); 
    for (int i = 0; i <fk;i++) {
        M[i] = (Perm) malloc(sizeof(int) * k);
    }
    return M;
}

void destroy_perm_list(PermList A, int size) {
    for (int i = 0; i <size;i++) {
        free(A[i]);
    }
    free(A);
}

void print_perm(Perm A, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}


void insert_copy_perm(Perm A, int size, int pos, Perm B) {
    for (int i = 0; i <= size; i++) {
        if (i < pos) {
            B[i] = A[i];
        } else if ( i == pos) {
            B[i] = size + 1;
        } else {
            B[i] = A[i-1];
        }
    }
}


PermList perm(int k) {
    PermList M = create_perm_list(k);
    if (k==1) { // base case
        M[0][0] = 1;
    } else { // recursive case
        PermList A = perm(k-1); // recursive call
        int t = fact(k-1);
        int c = 0;
        for (int i = 0; i < t; i++) {
            for(int pos = 0; pos < k; pos++) {
                insert_copy_perm(A[i],k-1, pos, M[c]);
                c++;
            }
        }
        destroy_perm_list(A, k-1);
    }
    return M;
}

int main() {
    int k = 5;
    PermList M = perm(k);
    int fk = fact(k);
    for(int i = 0;i <fk;i++) {
        print_perm(M[i], k);
    }
    return 0;
}