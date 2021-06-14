#include <U8g2lib.h>

U8G2_KS0108_128X64_F u8g2(U8G2_R0, 13, 12, 11, 10, 9, 8, 7, 6,
                          2, 3, 5, 4, U8X8_PIN_NONE, U8X8_PIN_NONE);
 
void setup(void) 
{
  // начало работы с дисплеем
  u8g2.begin();
  // очищаем память дисплея
  u8g2.clearBuffer();
  // выбираем шрифт
  u8g2.setFont(u8g2_font_ncenB08_tr);
  // выводим строку
  u8g2.drawStr(0,10,"Hello, World!");
  // отсылаем данные на дисплей
  u8g2.sendBuffer();
}
 
void loop(void)
{
}
