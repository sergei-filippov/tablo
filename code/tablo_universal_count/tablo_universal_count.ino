
#include <avr/wdt.h>
#include <DS1307RTC.h>
#include <TimeLib.h>
//#include <Wire.h>


const char D = 5;   //serial            *output
const char OE = 6;  //output enable     *output
const char STR = 8; // strobe           *output
const char CP = 9;  //clock             *output
const char PhR = A1; // photoresistor   *input
const char LED = 13;
const char BRIGHT_MODE = 4; // pin for brightness
const char BUZZER = 11;
const char PUMP = 3; // pump to water the plant
const char V5 = 7;    // 5v pin

bool stateD = 0;
bool stateOE = 1;
bool stateSTR = 1;
bool stateCP = 0;
bool stateLED = 0;
const char stateBRIGHT_MODE = 4;

long long a;
char Day;
char Minute;
char Second;
char numberD;
int finalDate;  // from the 1 January
char ledBright;
int outerBright = 0;

const int daysInMonth[] {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int day01, day10, month01, month10;
int today;  // from the 1 January
int daysBefore;  //Beforeee finalDate

int realHour = 24; // for rain
bool flagtime = 1;  // for rain

int date2day(int day_num, int month_num) {    // transforms date "day.month" to number of days since the 1st January
  int days = 0;
  for (int i = 1; i < month_num; i++) {
    days += daysInMonth[i];
  }
  days += day_num;
  return days;
}

void buzz() {
  digitalWrite(BUZZER, HIGH);
  delayMicroseconds(500);
  digitalWrite(BUZZER, LOW);
  delayMicroseconds(500);
}

void brightness() {
  outerBright = analogRead(PhR ) / 4;
  if ( outerBright > 230) {
    analogWrite(OE, 0);
  } else {
    analogWrite(OE, 255 - outerBright);    // WITH LESS VALUE COMES MORE BRIGHTNESS*/
  }
  // Serial.println( outerBright);

}

void ledSend() {
  if (stateLED) {
    digitalWrite(LED, LOW);
    stateLED = 0;
  } else {
    digitalWrite(LED, HIGH);
    stateLED = 1;
  }
  // delay(1);
}

void dataDown() {
  digitalWrite(D, LOW);
  stateD = 0;
  // delay(1);
}

void dataUp() {
  digitalWrite(D, HIGH);
  stateD = 1;
  //delay(1);
}
void cUD() {
  clockUp();
  clockDown();
}

void clockDown() {
  digitalWrite(CP, LOW);
  stateCP = 0;
  ledSend();
  //delay(1);
}

void clockUp() {
  digitalWrite(CP, HIGH);
  stateCP = 1;
  //delay(1);
}


void clearAll() {
  dataDown();
  for (char i = 0; i < 32; i++) {
    clockUp();
    clockDown();
  }
}

void anyNum(int numberD) {
  switch (numberD) {
    case 0: numSend0(); break;
    case 1: numSend1(); break;
    case 2: numSend2(); break;
    case 3: numSend3(); break;
    case 4: numSend4(); break;
    case 5: numSend5(); break;
    case 6: numSend6(); break;
    case 7: numSend7(); break;
    case 8: numSend8(); break;
    case 9: numSend9(); break;
  }
}

void numSend0() {
  //--microchip 2 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  //--microchip 1 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
}
void numSend9() {
  //--microchip 2 --//
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  //--microchip 1 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
}

void numSend8() {
  //--microchip 2 --//
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  //--microchip 1 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
}

void numSend7() {
  //--microchip 2 --//
  dataDown();
  cUD();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  cUD();
  cUD();
  //--microchip 1 --//
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
}
void numSend6() {
  //--microchip 2 --//
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  //--microchip 1 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
}

void numSend5() {
  //--microchip 2 --//
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  //--microchip 1 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
}
void numSend4() {
  //--microchip 2 --//
  dataUp();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  cUD();
  dataUp();
  cUD();
  dataDown();
  cUD();
  cUD();
  //--microchip 1 --//
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
}

void numSend3() {
  //--microchip 2 --//
  dataUp();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  //--microchip 1 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
}
void numSend2() {
  dataUp();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  //--microchip 1 --//
  dataDown();
  cUD();
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
}

void numSend1() {
  dataDown();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  cUD();
  //--microchip 1 --//
  dataUp();
  cUD();
  cUD();
  cUD();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
  dataDown();
  cUD();
  dataUp();
  cUD();
}

void printNow(tmElements_t tm){
    Serial.print("Ok, Time = ");
    Serial.print(tm.Hour);
    Serial.write(':');
    Serial.print(tm.Minute);
    Serial.write(':');
    Serial.print(tm.Second);
    Serial.print(", Date (D/M/Y) = ");
    Serial.print(tm.Day);
    Serial.write('/');
    Serial.print(tm.Month);
    Serial.write('/');
    Serial.print(tmYearToCalendar(tm.Year));
    Serial.println();
}



void rain() {                    // turns on the pump to water the plant
  for (int i = 0; i < 1; i++) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(PUMP, LOW);    // INVERTION
    delay(500);
    digitalWrite(BUZZER, LOW);
    delay(5000);
    digitalWrite(PUMP, HIGH);
    
    //wdt_reset();  // resets watchdog count every loop  // necessary if more then 8 seconds
  }
}


void setup() {
  Serial.begin(9600);

  pinMode(BRIGHT_MODE, OUTPUT);
  digitalWrite(BRIGHT_MODE, HIGH);
  pinMode(BUZZER, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(OE, OUTPUT);
  pinMode(STR, OUTPUT);
  pinMode(CP, OUTPUT);
  pinMode(LED, OUTPUT);

  pinMode(PUMP, OUTPUT);
  pinMode(V5, OUTPUT);
  digitalWrite(PUMP, HIGH);
  digitalWrite(V5, HIGH);


  pinMode(PhR, INPUT);

  day10 = 2;
  day01 = 8;
  month10 = 1;
  month01 = 2;
  finalDate = date2day(day10 * 10 + day01, month10 * 10 + month01);

  /// Serial.println(finalDate);

  clearAll();
  for (int i = 0; i < 1000; i++) {
    buzz();
  }
  wdt_enable (WDTO_8S);   // watchdog
  // RTC.read(tm);           // read RTC
}
 
void loop() {
 tmElements_t tm;
  RTC.read(tm);
  // brightness();


  if (realHour < tm.Hour-1) { // every 1 hours 
    flagtime = 1;
    rain();
  }

   
    
  today = date2day(tm.Day, tm.Month);    // since the 1st January
 // Serial.println(today);
  daysBefore = finalDate - today;    // how many days Before the final date
 //  Serial.println( daysBefore); 
  digitalWrite(STR, LOW);
  anyNum(daysBefore / 10);
  anyNum(daysBefore % 10);
  digitalWrite(STR, HIGH);

  if (flagtime) {
    realHour = tm.Hour;   
    flagtime = 0;
  }
  
  if (tm.Hour == 0) {
    realHour = 0;
  }

  printNow(tm);
  delay(1000);


  wdt_reset();  // resets watchdog count every loop
}
