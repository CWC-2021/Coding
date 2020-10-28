int pin = 3;
unsigned long duration;
int temp; 
int points; //number of measuring points
int i = 0;


void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
  digitalWrite (3, LOW);
}

void loop() {
  // attempt at looping
  
  i = 0;
  duration = 0;
 while(i < 4) {
    
    duration = duration + pulseIn(3, HIGH, 1500000);
    
    i++;
    }
 
duration = duration / 4;
duration = ((1000000*60)/(200*duration));
//duration = (((1/200)/(duration))*10^6)*60;
  Serial.println(duration);
}
