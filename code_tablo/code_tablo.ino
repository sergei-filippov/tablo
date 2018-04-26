const char D = 6;   //serial        *output
const char OE = 3;  //output enable *output
const char STR = 4; // strobe       *output
const char CP = 7;  //clock         *output
const char LED = 13;
bool stateD = 0;
bool stateOE = 1;
bool stateSTR = 1;
bool stateCP = 0;
bool stateLED = 0;
long long a;


void ledSend() {
  if (stateLED) {
    digitalWrite(LED, LOW);
    stateLED = 0;
  } else {
    digitalWrite(LED, HIGH);
    stateLED = 1;
  }
  delay(1);
}
void dataDown() {
  digitalWrite(D, LOW);
  stateD = 0;
  delay(1);
}

void dataUp() {
  digitalWrite(D, HIGH);
  stateD = 1;
  delay(1);
}
void cUD() {
  clockUp();
  clockDown();
}

void clockDown() {
  digitalWrite(CP, LOW);
  stateCP = 0;
  ledSend();
  delay(100);
}

void clockUp() {
  digitalWrite(CP, HIGH);
  stateCP = 1;
  delay(100);
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
void setup() {
  Serial.begin(9600);


  pinMode(D, OUTPUT);
  pinMode(OE, OUTPUT);
  pinMode(STR, OUTPUT);
  pinMode(CP, OUTPUT);
  pinMode(LED, OUTPUT);

  dataDown();
  for (char i = 0; i < 32; i++) {
    clockUp();
    clockDown();
  }
  numSend0();
  delay(5000);
  numSend1();
  delay(5000);
  numSend2();
  delay(5000);
  numSend3();
  delay(5000);
  numSend4();
  delay(5000);
  numSend5();
  delay(5000);
  numSend6();
  delay(5000);
  numSend7();
  delay(5000);
  numSend8();
  delay(5000);
  numSend9();
}

void loop() {



}
