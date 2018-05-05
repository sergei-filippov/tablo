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

void numSend1() {
  dataDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  dataUp();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  clockUp(); clockDown();
  dataDown();
  clockUp(); clockDown();
  dataUp();
  clockUp(); clockDown();
  dataDown();
  clockUp(); clockDown();
  dataUp();
  clockUp(); clockDown();

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
  numSend1();
  numSend1();
}

void loop() {



}
