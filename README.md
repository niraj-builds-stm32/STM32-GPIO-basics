# STM32 GPIO Basics

Basic LED blinking projects on the STM32 Nucleo F446RE, using HAL GPIO functions.

## How it works
- `HAL_GPIO_TogglePin()` flips the LED state each time it is called.
- after a delay of 500 milliseconds the cycle repeats.
  
## Hardware

- Board: STM32 Nucleo F446RE
- LED pin: PA5 (onboard LED)

## CODE
``` c
while(1)
{
HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_5);
HAL_Delay(500);
}
