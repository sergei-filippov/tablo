#include <Time.h>
#include <TimeLib.h>

#include <DS1307RTC.h>



#include <Wire.h>                           // Подключаем библиотеку Wire                           
                  
          
 
void setup() {
  Serial.begin(9600);                       // Устанавливаем скорость передачи данных 
  //while (!Serial) ;                         // Ожидаем подключение последовательного порта. Нужно только для Leonardo
  delay(200);                               // Ждем 200 мкс
  Serial.println("DS3231RTC Read Test");    // Выводим данные на последовательный порт
  Serial.println("-------------------");    // Выводим данные на последовательный порт
}
 
void loop() {
  Serial.println ("g");
 tmElements_t tm;                          
 Serial.println ("gg");
  if (RTC.read(tm)) {
    Serial.println ("ggg");
    Serial.print("Ok, Time = ");
    print2digits(tm.Hour);
    Serial.write(':');
    print2digits(tm.Minute);
    Serial.write(':');
    print2digits(tm.Second);
    Serial.print(", Date (D/M/Y) = ");
    Serial.print(tm.Day);
    Serial.write('/');
    Serial.print(tm.Month);
    Serial.write('/');
    Serial.print(tmYearToCalendar(tm.Year));
    Serial.println();
  } else {
    Serial.println ("gggg");
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
  delay(1000);
}
 
void print2digits(int number) {
  if (number >= 0 && number < 10) {
    Serial.write('0');
  }
  Serial.print(number);
}
