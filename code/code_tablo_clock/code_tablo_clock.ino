#include <avr/wdt.h>
#include <DS1307RTC.h>
#include <TimeLib.h>
#include <Wire.h>


const char D = 5;   //serial            *output
const char OE = 6;  //output enable     *output
const char STR = 8; // strobe           *output
const char CP = 9;  //clock             *output
const char PhR = A1; // photoresistor   *input
const char LED = 13;
const char BRIGHT_MODE = 4; // pin for brightness
const char BUZZER = 11;

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
char finalDate = 31;
char ledBright;
int outerBright = 0;

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


void print2digits(int number) {
  if (number >= 0 && number < 10) {
    Serial.write('0');
  }
  Serial.print(number);
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

  pinMode(PhR, INPUT);

  clearAll();
  for (int i = 0; i < 5000; i++) {
    buzz();
  }

  wdt_enable (WDTO_8S);
}

void loop() {
  brightness();
  tmElements_t tm;
  if (RTC.read(tm)) {
   /*  Serial.println(tm.Second);
      Serial.println(tm.Minute);
      Serial.println(tm.Hour);
      Serial.println(tm.Day);*/
      Serial.println(tm.sysTime());
    Day = 31 - tm.Day;
    digitalWrite(STR, LOW);
    anyNum(Day / 10);
    anyNum(Day % 10);
    digitalWrite(STR, HIGH);
  }
  delay(1000);


  wdt_reset();  // resets watchdog count every loop
}
