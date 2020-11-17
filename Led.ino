enum leds { LED5=3, LED4=4, LED3=5, LED2=6, LED1=7 };

void setup() {
  // put your setup code here, to run once:
  pinMode (LED5, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED1, OUTPUT);
}

int viive = 150;

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (LED5, LOW);
  delay (viive);
  digitalWrite (LED5, HIGH);

  digitalWrite (LED4, LOW);
  delay (viive);
  digitalWrite (LED4, HIGH);

  digitalWrite (LED3, LOW);
  delay (viive);
  digitalWrite (LED3, HIGH);

  digitalWrite (LED2, LOW);
  delay (viive);
  digitalWrite (LED2, HIGH);

  digitalWrite (LED1, LOW);
  delay (viive);
  digitalWrite (LED1, HIGH);
  
//reverse

   digitalWrite (LED2, LOW);
  delay (viive);
  digitalWrite (LED2, HIGH);
  
  digitalWrite (LED3, LOW);
  delay (viive);
  digitalWrite (LED3, HIGH);

  digitalWrite (LED4, LOW);
  delay (viive);
  digitalWrite (LED4, HIGH);
}
