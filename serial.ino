int serialData[5];
int A=11;
int B=10;
int C=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() >=3) {
    for (int i=0; i<=5; i++){
      serialData[i] = Serial.read();      
    }
    analogWrite(A, serialData[0]);
    analogWrite(B, serialData[1]);
    analogWrite(C, serialData[2]);

  }
}
