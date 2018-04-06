const char D = 2;   //serial        *output
const char OE = 3;  //output enable *output
const char STR = 4; // strobe       *output
const char CP = 5;  //clock         *output

bool stateD = 0;
bool stateOE = 1;
bool stateSTR = 1;
bool stateCP = 0;

long long a;


void dataSend() {
  if (stateD) {
    digitalWrite(D, LOW);
    stateD = 0;
  } else {
    digitalWrite(D, HIGH);
    stateD = 1;
  }
  delay(1);
}

void clockSend() {
  if (stateCP) {
    digitalWrite(CP, LOW);
    stateCP = 0;
  } else {
    digitalWrite(CP, HIGH);
    stateCP = 1;
  }
  delay(100);
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
  dataSend();    //up
  clockSend();   //up
  
  clockSend();   //down
  
 // dataSend();    //down
  clockSend();   //up
  
  clockSend();   // down


 


}
