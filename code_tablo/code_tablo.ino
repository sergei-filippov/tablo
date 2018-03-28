const char D = 2;   //serial        *output
const char OE = 3;  //output enable *output
const char STR = 4; // strobe       *output
const char CP = 5;  //clock         *output

bool stateD = 0;
bool stateOE = 0;
bool stateSTR = 0;
bool stateCP = 0;

long long a;

void clockSend() {
  if (stateCP) {
    digitalWrite(CP, LOW);
    stateCP = 0;
  } else {
    digitalWrite(CP, HIGH);
    stateCP = 1;
  }
}

void strobSend() {
  if (stateSTR) {
    digitalWrite(STR, LOW);
    stateSTR = 0;
  } else {
    digitalWrite(STR, HIGH);
    stateSTR = 1;
  }
}

void setup() {
  pinMode(D, OUTPUT);
  pinMode(OE, OUTPUT);
  pinMode(STR, OUTPUT);
  pinMode(CP, OUTPUT);
}

void loop() {


}
