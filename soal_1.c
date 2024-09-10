#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// pembanding dua nilai Rama
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int nilaiRama;
    
    // scanf untuk input nilai Rama
    scanf("%d", &nilaiRama);
    
    // array untuk nilai Rama
    int nilai[nilaiRama];
    
    for(int i = 0; i < nilaiRama; i++) {
        scanf("%d", &nilai[i]);
        
    }
    // qsort untuk mengurutkan nilai Rama
    qsort(nilai, nilaiRama, sizeof(int), compare);
    
    // print output nilai Rama
    for(int i = 0; i < nilaiRama; i++) {
        printf("%d\n", nilai[i]);
    }
    
    return 0;
}
