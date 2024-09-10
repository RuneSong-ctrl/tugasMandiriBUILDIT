#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Deklarasi string, panjang max 101
    char A[101], B[101];
    
    // scanf untuk input kata
    scanf("%s", A);
    scanf("%s", B);
    
    // Membandingkan panjang string
    if (strlen(A) != strlen(B)) {
        // Jika panjang string berbeda, print "BERBEDA"
        printf("BERBEDA\n");
    } else {
        // Jika panjang string sama, dicek bila identik
        if (strcmp(A, B) == 0) {
            // Kalau karakter benar benar identik, print "IDENTIK"
            printf("IDENTIK\n");
        } else {
            // Kalau panjang sama tapi tidak identik, print "MIRIP"
            printf("MIRIP\n");
        }
    }
    
    return 0;
}