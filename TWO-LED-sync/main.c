# STM32 Embedded C Learning Projects

Hands-on projects from my journey into embedded systems, built on the STM32 Nucleo F446RE board using embedded C.

## Hardware
- Board: STM32 Nucleo F446RE
- LEDs: external LEDs on a breadboard, connected to PA5 and PA6
- Current limiting: each LED has two 100 ohm resistors in series (200 ohm total)

## Projects

### 1. GPIO Basics
Toggling a GPIO pin to control an LED. Covers configuring a pin as output and switching its state in code.

### 2. Two LEDs Blinking in Sync
Two LEDs on PA5 and PA6 blinking together in sync. A demo video of the working circuit is included in the folder.

## What I Learned
- GPIO output configuration
- Toggling pins and timing delays
- Driving multiple pins together

## Next Steps
- GPIO input (push button)
- External interrupts (EXTI)

## Tools
- STM32CubeIDE
- Embedded C
