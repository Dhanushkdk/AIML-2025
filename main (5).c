#include <stdio.h>

void findIntersection(int firstRegion[], int m, int secondRegion[], int n) {
    int i = 0, j = 0;

    printf("[");
    int first = 1; 
    while (i < m && j < n) {
        if (firstRegion[i] < secondRegion[j]) {
            i++;
        } else if (firstRegion[i] > secondRegion[j]) {
            j++;
        } else {
            if (first) {
                printf("%d", firstRegion[i]);
                first = 0;
            } else {
                printf(", %d", firstRegion[i]);
            }
            i++;
            j++;
        }
    }
    printf("]");
}

int main() {
    int m, n;

   printf("enter the number of elements in first array :");
    scanf("%d", &m);
    int firstRegion[m];

   
    for (int i = 0; i < m; i++) {
        printf("enter array elemets   :");
        scanf("%d", &firstRegion[i]);
    }

   printf("enter the number of elements in second array :");
    scanf("%d", &n);
    int secondRegion[n];

    
    for (int i = 0; i < n; i++) {
        printf("enter the array elements : " );
        scanf("%d", &secondRegion[i]);
    }

    
    findIntersection(firstRegion, m, secondRegion, n);

    return 0;
}
