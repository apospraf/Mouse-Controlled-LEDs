int serialData[5];
int A=11;
int B=10;
int C=9;
int D=6;
int E=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  Serial.begin(9600);
  for (int i=0; i<5; i++){
    serialData[i] = 0;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() >=5) {
    for (int i=0; i<5; i++){
      serialData[i] = Serial.read();
    }
    analogWrite(A, serialData[0]);
    analogWrite(B, serialData[1]);
    analogWrite(C, serialData[2]);
    analogWrite(D, serialData[3]);
    analogWrite(E, serialData[4]); 
  }
}
