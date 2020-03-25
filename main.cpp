#include "mbed.h"

AnalogOut Aout(DAC0_OUT);
AnalogIn Ain(A0);

int main(void)
{
    while (true) {
        Aout = Ain;
    }

    return 0;
}