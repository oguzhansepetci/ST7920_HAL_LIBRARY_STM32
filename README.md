## RepRap Ramps 1.4 128x64 GLCD HALL Library
## Pinout

RepRap Ramps 1.4 Pinout:

![pinout](https://github.com/user-attachments/assets/5bc935df-f9ba-491c-8267-bfa0ca309795)

### Example
![IMG_20240909_181456](https://github.com/user-attachments/assets/9c7de2f1-c374-4b9a-bf01-c3bcca995ca0)
## Changing Pins and Ports

If you need to use a different pin or port in the project, you will need to modify the `PIN` and `PORT` macros in the code.

### Changing the Pin

By default, the project uses `GPIO_PIN_4`. To change this to a different pin, follow these steps:

1. **Modify the Code:** Change the `PIN` macro to the new pin number.
    ```c
    #define PIN GPIO_PIN_X // X represents the pin number you want to use.
    ```

2. **Example Change:** For instance, if you want to use `GPIO_PIN_7`, you would modify it as follows:
    ```c
    #define PIN GPIO_PIN_7
    ```

### Changing the Port

By default, the project uses `GPIOA`. To change this to a different port, update the `PORT` macro to the new port.
```c
#define PORT GPIOX // X represents the port you want to use.
