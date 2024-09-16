## RepRap Ramps 1.4 128x64 GLCD HAL Library
### Using the ST7920 Driver

To use the **ST7920** display driver in the project, the following steps must be completed:

1. **Include the Header File:**
    You need to include the `st12864h.h` header file in your code. This file contains the necessary definitions for the ST7920 driver.
    ```c
    #include "st12864h.h"
    ```

2. **Call the Initialization Function:**
    You must call the `ST7920_init()` function to properly initialize the display.
    ```c
    ST7920_init();
    ```

Failure to complete these steps may result in the display not functioning correctly.

### ST7920 Sürücü Kullanımı

Projede **ST7920** ekran sürücüsünü kullanmak için aşağıdaki adımların uygulanması gerekmektedir:

1. **Başlık Dosyasını Dahil Edin:**
    Kodunuzda `st12864h.h` başlık dosyasını dahil etmeniz gerekmektedir. Bu dosya, ST7920 sürücüsü için gerekli tanımlamaları içerir.
    ```c
    #include "st12864h.h"
    ```

2. **ST7920 Başlatma Fonksiyonu:**
    Ekranı doğru bir şekilde başlatmak için `ST7920_init()` fonksiyonunu çağırmanız gerekmektedir.
    ```c
    ST7920_init();
    ```

Bu iki adımın uygulanmaması durumunda ekran düzgün çalışmayabilir.

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
```

## Pin ve Port Değişiklikleri

Eğer projede farklı bir pin veya port kullanılması gerekiyorsa, kodun içinde belirtilen `PIN` ve `PORT` makrolarını değiştirmeniz gerekir.

### Pin Değişikliği

Proje varsayılan olarak `GPIO_PIN_4` pinini kullanmaktadır. Eğer farklı bir pin kullanmak isterseniz, aşağıdaki adımları izleyin:

1. **Kodda Değişiklik Yapın:** `PIN` makrosunu yeni pin numarasına göre değiştirin.
    ```c
    #define PIN GPIO_PIN_X // X, kullanmak istediğiniz yeni pin numarasıdır.
    ```

2. **Örnek Değişiklik:** Örneğin, `GPIO_PIN_7` pinini kullanmak istiyorsanız:
    ```c
    #define PIN GPIO_PIN_7
    ```

### Port Değişikliği

Proje varsayılan olarak `GPIOA` portunu kullanmaktadır. Eğer farklı bir port kullanmak isterseniz, `PORT` makrosunu yeni porta göre değiştirin.
```c
#define PORT GPIOX // X, kullanmak istediğiniz yeni port adıdır.
```
## Important Note on TIM1 Configuration

When configuring the TIM1 settings, it is crucial to adjust the clock signal so that the period is set to **1 microsecond**. This ensures that the timing is accurate and the system functions as expected. Failure to do so may lead to incorrect timing and unexpected behavior in your project.

Make sure to verify the clock configuration in your microcontroller settings to meet this requirement.


## TIM1 Konfigürasyonu Hakkında Önemli Not

TIM1 ayarlarını yaparken, clock sinyalinin periyodunun **1 mikro saniye** olacak şekilde ayarlanması kritik öneme sahiptir. Bu ayar, doğru zamanlamanın sağlanması ve sistemin beklenildiği gibi çalışması için gereklidir. Bu ayar yapılmadığında, zamanlama hataları ve projede beklenmeyen davranışlar oluşabilir.

Bu gereksinimi karşılamak için mikrodenetleyicinizin clock yapılandırmasını kontrol ettiğinizden emin olun.

