#include <U8g2lib.h>
#include <U8x8lib.h>

U8G2_KS0108_128X64_F u8g2(U8G2_R0, 13, 12, 11, 10, 9, 8, 7, 6,
                          2, 3, 5, 4, U8X8_PIN_NONE, U8X8_PIN_NONE);

void setup() {
  // начало работы с дисплеем
  u8g2.begin();
  // включаем поддержку UTF8
  u8g2.enableUTF8Print();
  // очищаем память дисплея
  u8g2.clearBuffer();
  // выбираем шрифт
  u8g2.setFont(u8g2_font_4x6_t_cyrillic);
  // указываем положение курсора
  u8g2.setCursor(0, 5);
  // выводим строку на дисплей
  u8g2.print("Графический дисплей");
  // выбираем шрифт
  u8g2.setFont(u8g2_font_5x8_t_cyrillic);
  // указываем положение курсора
  u8g2.setCursor(0, 20);
  // выводим строку на дисплей
  u8g2.print("Экран: 128x64");
  // выбираем шрифт
  u8g2.setFont(u8g2_font_cu12_t_cyrillic);
  // указываем положение курсора
  u8g2.setCursor(0, 40);
  // выводим строку на дисплей
  u8g2.print("Русский язык");
  // выбираем шрифт
  u8g2.setFont(u8g2_font_10x20_t_cyrillic);
  // указываем положение курсора
  u8g2.setCursor(0, 60);
  // выводим строку на дисплей
  u8g2.print("Тест для роботов");
  // отсылаем данные на дисплей
  u8g2.sendBuffer();

}

void loop() {
  // put your main code here, to run repeatedly:

}
