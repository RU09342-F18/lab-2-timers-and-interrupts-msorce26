# Button Based Delay

Sample code by TI
Edited by Michael Sorce
last updated 9/26/18

The purpose of this program is to blink an LED at the frequency that the button is pressed.

For the initial set up the WDT is stopped, the necessary pins are set to the proper direction, the pull up resistor is enabled on the button, and proper interrupt initialization is done so that there is an inturrupt on button depress.

A timer is controlled by aclk, put in upmode, with a /8 divider, and initialized to 10 Hz by setting the CCR0.

All that the timer interrupt does is toggle the state of the LED.

The button interrupt is split up in to two sections through an if statement. 

If the button is initally pressed, the timer is cleared, it is reset to run in continuous mode, and the buttton interrupt is set to go off when the button is released.

When the button is released, the timer is stopped, the CCR0 is set to the value the timer counted to since the initial press. The button interrupt is then set to go off when the button is depressed and the timer is set back to up-mode.

This sets the led blink frequency to the rate at which the button is pressed then released.

At the end of the interrupt, the interrupt flag is reset.
