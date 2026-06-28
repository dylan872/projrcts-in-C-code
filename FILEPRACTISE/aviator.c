#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
    #include <windows.h>  // For Sleep() in milliseconds (Windows)
    #define SLEEP(ms) Sleep(ms)  
#else
    #include <unistd.h>   // For usleep() in microseconds (Linux/macOS)
    #define SLEEP(ms) usleep((ms) * 1000)  
#endif

float generate_crash_multiplier(int seed) {
    srand(seed); // Seed the random number generator
    return 1.00 + ((float)rand() / RAND_MAX) * (1500.00 - 1.00); // Random crash value between 1.00 and 10.00
}

int main() {
    int seed;
    float crash_point;

    printf("Enter seed: ");
    scanf("%d", &seed);

    crash_point = generate_crash_multiplier(seed); // Generate crash point

    printf("\n🚀 Starting at  ");

    // Simulate the rising multiplier
    float multiplier = 1.00;
    while (multiplier < crash_point) {
        printf("💰 %.2fx\n", multiplier);
        multiplier += 0.10 + ((float)rand() / RAND_MAX) * 0.25; // Random increase
        SLEEP(300); // 300ms delay for animation
    }

    printf("🔥 CRASHED at %.2fx! 🔥\n", crash_point);
    return 0;
}
