#include <DS1307RTC.h>
#include <TimeLib.h>
#include <Wire.h>                                                
                  
          
 
void setup() {
  Serial.begin(9600);                       // Устанавливаем скорость передачи данных 
  //while (!Serial) ;                         // Ожидаем подключение последовательного порта. Нужно только для Leonardo
  delay(200);                               // Ждем 200 мкс
 /* Serial.println("DS3231RTC Read Test");    // Выводим данные на последовательный порт
  Serial.println("-------------------");    // Выводим данные на последовательный порт*/
}
 
void loop() {
 tmElements_t tm;                          
  if (RTC.read(tm)) {
        Serial.println(tm.Day);
  } else {
    if (RTC.chipPresent()) {
      Serial.println("The DS3231 is stopped.  Please run the SetTime");
      Serial.println("example to initialize the time and begin running.");
      Serial.println();
    } else {
      Serial.println("DS3231 read error!  Please check the circuitry.");
      Serial.println();
    }
    delay(9000);
  }
  delay(2000);
}
 
void print2digits(int number) {
  if (number >= 0 && number < 10) {
    Serial.write('0');
  }
  Serial.print(number);
}
