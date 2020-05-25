
/*FOR THE DETAILED INFORMATION OF THE FUNCTIONS DECLARED PLEASE REFER CONTROLLER'S ROM GUIDE*/
#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"


int main(void)
{
    const int HIGH = 0x04;
    //TO ENABLE THE GPIO PORT G
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
    //TO SELECT THE GPIO PORT G AS OUTPUT
    GPIOPinTypeGPIOOutput(GPIO_PORTG_BASE, GPIO_PIN_2);

    while(1)
    {
        // TO SEND HIGH OR 1 ON PORTG_PIN_2
        GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_2, HIGH);

    }
}
