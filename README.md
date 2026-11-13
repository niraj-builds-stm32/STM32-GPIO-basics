

https://github.com/user-attachments/assets/b3012144-2175-4321-a58c-c7e320d50da2



https://github.com/user-attachments/assets/f59d4574-90d8-4b92-84fd-fdcd09e8b7f1



https://github.com/user-attachments/assets/462303b6-404d-488b-80a4-9f18858c43da



https://github.com/user-attachments/assets/464923bd-3032-40d4-9e49-61f4765228b5



https://github.com/user-attachments/assets/67732f11-65ed-42f4-adcd-808d17047373



https://github.com/user-attachments/assets/e6e73e53-d86d-4275-b94e-6ea5f3070c3e



https://github.com/user-attachments/assets/ef5c3cf2-2b18-471a-9218-192be16ef132



https://github.com/user-attachments/assets/d24c132a-3fc8-4636-a5c8-80da4f4825ca

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
