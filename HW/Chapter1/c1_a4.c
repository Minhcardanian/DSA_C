#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store worker details
typedef struct {
    int id;
    char fullName[50];
    int age;
    float salary;
} Worker;

// Function to calculate total salary using pointers
float totalSalary(Worker* workers, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (workers + i)->salary;  // Pointer notation
    }
    return sum;
}

// Function to sort workers by salary in descending order using Selection Sort
void sortWorkersBySalary(Worker* workers, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((workers + i)->salary < (workers + j)->salary) {
                Worker temp = *(workers + i);
                *(workers + i) = *(workers + j);
                *(workers + j) = temp;
            }
        }
    }
}

int main() {
    int n;

    // (a) Get the number of workers
    printf("Enter the number of workers: ");
    scanf("%d", &n);
    getchar();  // Consume newline left by scanf

    // Dynamically allocate memory for workers
    Worker* workers = (Worker*) malloc(n * sizeof(Worker));
    if (workers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input worker details
    printf("\nEnter details of %d workers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nWorker %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(workers + i)->id);
        getchar();  // Consume newline

        printf("Full Name: ");
        fgets((workers + i)->fullName, 50, stdin);
        (workers + i)->fullName[strcspn((workers + i)->fullName, "\n")] = 0; // Remove newline

        printf("Age: ");
        scanf("%d", &(workers + i)->age);

        printf("Salary: ");
        scanf("%f", &(workers + i)->salary);
        getchar();  // Consume newline
    }

    // (b) Compute and print total salary
    printf("\nTotal salary paid: %.2f\n", totalSalary(workers, n));

    // (c) Sort workers by salary in descending order
    sortWorkersBySalary(workers, n);

    // Print sorted worker details
    printf("\nWorkers sorted by salary (Descending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Salary: %.2f\n",
               (workers + i)->id, (workers + i)->fullName, (workers + i)->age, (workers + i)->salary);
    }

    // Free allocated memory
    free(workers);

    return 0;
}
