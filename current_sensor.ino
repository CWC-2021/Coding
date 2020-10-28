void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
unsigned int x=0;
pinMode(4,INPUT);
float AcsValue=0.0,Samples=0.0,AvgAcs=0.0,AcsValueF=0.0;

  for (int x = 0; x < 150; x++){
    AcsValue = analogRead(A0);
    Samples = Samples + AcsValue;
    delay(3);
  }
  AvgAcs = Samples/150.0;

  AcsValueF = (2.5 - (AvgAcs * (5.0/1024.0)) )/0.185;

  Serial.print(AcsValueF);
  delay(50);
  
}
