# Button Interrupt

Sample code by TI
Edited by Michael Sorce
Last updated 9/26/18

The purpose of this code is to toggle an LED based on a button press.

To begin, the watchdog timer is stopped, the button pin is set to an output, and LED pin is set to an input. A pull up resistor is enabled on the button pin.

Next, P1E is enable for the button, making the button trigger an interrupt. P1IES is also set to 1 on the button pin to make the interrupt trigger when the button is depressed.
