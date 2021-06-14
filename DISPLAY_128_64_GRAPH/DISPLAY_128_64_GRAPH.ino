// библиотека для работы с графическими дисплеями
#include <U8g2lib.h>

 
U8G2_KS0108_128X64_F u8g2(U8G2_R0, 13, 12, 11, 10, 9, 8, 7, 6,
                          2, 3, 5, 4, U8X8_PIN_NONE, U8X8_PIN_NONE);
 
void setup(void) 
{
  Serial.begin(9600);
  // начало работы с дисплеем
  u8g2.begin();
  // переменные для хранения высоты и ширины дисплея
  int width = u8g2.getBufferTileWidth() * 8;
  int height = u8g2.getBufferTileHeight() * 8;
  // рисуем две диаганали
  u8g2.drawLine(0, 0, width - 1, height - 1);
  u8g2.drawLine(0, height - 1, width - 1, 0);
  // рисуем окружность в центре дисплея и радиусом 30
  u8g2.drawCircle(width / 2, height / 2, 30, U8G2_DRAW_ALL);
  // отсылаем данные на дисплей
  u8g2.sendBuffer();
}
 
void loop(void)
{
}







  // рисуем диск (закрашенную окружность) в центре дисплея и радиусом 20
  //u8g2.drawDisc(width / 2, height / 2, 20, U8G2_DRAW_ALL);
 
/* пины дисплея:
  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 |
  |+5В|Vdd|Vo |DB0|DB1|DB2|DB3|DB4|DB5| DB6| DB7| CS1| CS2| RST| R/W| D/I| E  | Vee| A  | K  |
 
  создаём объект для работы с графическим дисплеем
  U8G2_KS0108_128X64_F u8g2(ROTATION, D0, D1, D2, D3, D2, D3, D4, D5, D6, D7,
                            EN, D/I, CS0, CS1, CS2, RESET);
  ROTATION:   угол поворота дисплея
    U8G2_R0:  0 градусов
    U8G2_R1:  90 градусов
    U8G2_R2:  180 градусов
    U8G2_R3:  270 градусов
  D0..D7: пины данных
  EN: стробирование данных
  D/I: команды / данные
  CS0-CS2: выбор кристала
  RESET: сброс
  R/W: чтение / запись (подключайте к земле)
*/
