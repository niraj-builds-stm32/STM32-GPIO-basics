# STM32 GPIO Basics

Basic LED blinking projects on the STM32 Nucleo F446RE, using HAL GPIO functions.

## How it works

- `HAL_GPIO_WritePin()` sets the LED pin high or low directly.
- `HAL_GPIO_TogglePin()` flips the LED state each time it is called.

## Hardware

- Board: STM32 Nucleo F446RE
- LED pin: PA5 (onboard LED)
