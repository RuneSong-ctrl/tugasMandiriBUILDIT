#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    
int isPrime(long long N) {
    if (N <= 1) return 0; // N bukan bilangan prima jika kurang dari sama dengan 1
    if (N == 2 || N == 3) return 1; // 2 dan 3 termasuk bilangan prima
    if (N % 2 == 0 || N % 3 == 0) return 0; // Bilangan genap dan atau kelipatan 3 bukan prima

    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    long long N;
    scanf("%lld", &N);

    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}