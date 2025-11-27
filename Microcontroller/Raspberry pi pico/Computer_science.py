from machine import Pin
import time

led = Pin("LED", Pin.OUT)  # Initialize the on-board LED on GPIO 25

while True:
    led.value(1)  # Turn the LED on
    time.sleep(0.5)  # Wait for 0.5 seconds
    led.value(0)  # Turn the LED off
    time.sleep(0.5)  # Wait for 0.5 seconds   