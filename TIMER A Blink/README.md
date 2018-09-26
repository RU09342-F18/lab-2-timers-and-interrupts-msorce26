# TIMER A Blink

The purpose if this program is to use two timers to blink two leds at differing frequencies.

Initially, the watchdog timer is stopped and the LED pins are set to outputs.

Next, the two timers are set up. The interrupts are enabled. Then the Capture Compare registers are set using a function that computes the value needed to toggle the LED at a desired Hz. One timer is set to 2.5Hz, and the other is set to 20Hz. Finally, the clock used, clock mode, and divider are set. For this example SMclk is used with a /8 divider, used in upmode. 

After this the leds are toggled on initially, then the processor is put into low power mode 0.

In the interrupt service, the only thing that occurs is that the respective LED for each timer is toggled.
