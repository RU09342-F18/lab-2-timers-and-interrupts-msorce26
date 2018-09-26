# Button Interrupt

Sample code by TI
Edited by Michael Sorce
Last updated 9/26/18

The purpose of this code is to toggle an LED based on a button press.

To begin, the watchdog timer is stopped, the button pin is set to an output, and LED pin is set to an input. A pull up resistor is enabled on the button pin.

Next, P1E is enable for the button, making the button trigger an interrupt. P1IES is also set to 1 on the button pin to make the interrupt trigger when the button is depressed. P1IFG is then turned off for the button pin to assure that there isn't a button interrupt pending.
At the end of set up, the processor is put into low power mode 4.

#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)

These lines above indicate the code that will be run when the interrupt is pending. In our case when the button is depressed. For this code, all that runs in this interrupt is the LED is toggled, and P1IFG is turned off on the button pin to indicate the interrupt has been serviced.
