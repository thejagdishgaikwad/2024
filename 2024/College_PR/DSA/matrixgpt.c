#include <stdio.h>
#include <stdlib.h>

// Function declarations
void add_mat();
void mul_mat();
void trans_mat();
void print_mat(int x[3][3]);

int main() {
    int ch = 0;

    // Loop until the user selects 'Exit'
    while (ch != 4) {
        printf("\n1. Addition\n2. Multiplication\n3. Transpose\n4. Exit");
        printf("\nSelect the operation: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                add_mat();
                break;
            case 2:
                mul_mat();
                break;
            case 3:
                trans_mat();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice, please select again.");
        }

        // Clear screen is not standard, removed getch() and clrscr()
        // to make it more portable.
    }

    return 0;
}

void add_mat() {
    int a[3][3], b[3][3], c[3][3], i, j;
    
    // Input matrix A
    printf("\nEnter the matrix A (3x3): \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input matrix B
    printf("\nEnter the matrix B (3x3): \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Addition of A and B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Print the matrices
    printf("\nMatrix A: ");
    print_mat(a);
    printf("\nMatrix B: ");
    print_mat(b);
    printf("\nMatrix A + B: ");
    print_mat(c);
}

void mul_mat() {
    int i, j, k;
    int a[3][3], b[3][3], c[3][3] = {0};

    // Input matrix A
    printf("\nEnter the matrix A (3x3): \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter the matrix B (3x3): \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplication of A and B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the matrices
    printf("\nMatrix A: ");
    print_mat(a);
    printf("\nMatrix B: ");
    print_mat(b);
    printf("\nMatrix A * B: ");
    print_mat(c);
}

void trans_mat() {
    int i, j;
    int a[3][3], at[3][3];

    // Input matrix A
    printf("\nEnter matrix A (3x3): \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose of A
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            at[j][i] = a[i][j];
        }
    }

    // Print the matrices
    printf("\nMatrix A: ");
    print_mat(a);
    printf("\nTranspose of A: ");
    print_mat(at);
}

void print_mat(int x[3][3]) {
    int i, j;
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d\t", x[i][j]);
        }
    }
    printf("\n");
}
