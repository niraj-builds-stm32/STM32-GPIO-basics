# Two LEDs Blinking in Sync

Two LEDs blinking together in sync on the STM32 Nucleo F446RE, written in embedded C using STM32CubeIDE.

## Hardware
- Board: STM32 Nucleo F446RE
- LEDs: external LEDs on a breadboard, connected to PA5 and PA6
- Current limiting: two 100 ohm resistors in series per LED (200 ohm total)

## How it works
Both pins are configured as GPIO outputs, and they are toggled together with a delay, so both LEDs turn on and off at the same time.

## Demo
A video of the working circuit is included in this folder.
