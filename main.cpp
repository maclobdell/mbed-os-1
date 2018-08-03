#include "mbed.h"

DigitalOut led_r(LED_RED);
DigitalOut led_g(LED_GREEN);
DigitalOut led_b(LED_BLUE);

// main() runs in its own thread in the OS
int main() {
    while (true) {
        led_r = 0;
        wait(0.5);
        led_r = 1;
        led_g = 0;
        wait(0.5);
        led_g = 1;
        led_b = 0;
        wait(0.5);
        led_b = 1;
    }
}
