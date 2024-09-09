/*
 * st12864H.h
 *
 * Created on: Sep 2, 2024
 * Author: yazilim
 */

#ifndef ST12864H_H_
#define ST12864H_H_

#include "stm32f4xx_hal.h"

#define PIN  GPIO_PIN_4 // Seçilen Pin ---CS--
#define PORT GPIOA      //Seçilen Port ---CS--

#define LCD_CLS         0x01
#define LCD_HOME        0x02
#define LCD_ADDRINC     0x06
#define LCD_DISPLAYON   0x0C
#define LCD_DISPLAYOFF  0x08
#define LCD_CURSORON    0x0E
#define LCD_CURSORBLINK 0x0F
#define LCD_BASIC       0x30
#define LCD_EXTEND      0x34
#define LCD_GFXMODE     0x36
#define LCD_TXTMODE     0x34
#define LCD_STANDBY     0x01
#define LCD_SCROLL      0x03
#define LCD_SCROLLADDR  0x40
#define LCD_ADDR        0x80
#define LCD_LINE0       0x80
#define LCD_LINE1       0x90
#define LCD_LINE2       0x88
#define LCD_LINE3       0x98




void ST7920_Clear(void);
void Delay_Interup_us(uint16_t us);
void ST7920_Update(void);


void ST7920_SendCmd(uint8_t cmd);
void ST7920_SendData(uint8_t data);
void ST7920_GraphicMode(int enable);
void ST7920_init(void);
void ST7920_DrawBitmap(const unsigned char* graphic);
void ST7920_SendString(int row, int col, char* string);
void DrawLine(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1);
void DrawRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h);
void DrawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h);
void DrawCircle(uint8_t x0, uint8_t y0, uint8_t radius);
void DrawFilledCircle(int16_t x0, int16_t y0, int16_t r);
void DrawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3);
void DrawFilledTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3);

#endif /* ST12864H_H_ */
