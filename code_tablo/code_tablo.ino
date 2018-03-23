const char D = 2;   //serial        *output
const char OE = 3;  //output enable *output 
const char STR = 4; // strobe       *output
const char CP = 5;  //clock         *output

bool stateD =0;
bool stateOE=0;
bool stateSTR=0;
bool statePC=0;

long long a;

void setup() {
  pinMode(D, OUTPUT);
  pinMode(OE, OUTPUT);
  pinMode(STR, OUTPUT);
  pinMode(CP, OUTPUT);
}

void loop() {
  

}
