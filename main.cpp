#include <string>
#include <vector>

void sum_range() {
    int acc = 0;
    for (int i = 10; i <= 20; ++i) acc += i;
    (void)acc;
}

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

void xor_checksum() {
    int values[4] = {12, 7, 25, 40};
    int checksum = 0;
    for (int i = 0; i < 4; ++i) checksum ^= values[i];
    (void)checksum;
}

void small_factorial() {
    int result = 1;
    for (int i = 1; i <= 6; ++i) result *= i;
    (void)result;
}

extern "C" int noble_thorn();
extern "C" void calm_orbit();
extern "C" void radiant_canyon();

int main() {
    sum_range();
    sum_evens();
    xor_checksum();
    small_factorial();
    calm_orbit();
    radiant_canyon();
    return noble_thorn();
}
