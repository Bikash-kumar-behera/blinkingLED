//To make a blinking LED which is sourcing circuit


#define LED1 0
#define LED2 1
#define LED3 2
#define LED4 3
#define LED5 4
#define LED6 5
#define LED7 6
#define LED8 7

#define DELAY 200

void setup() {
  //to configure pin 0 as the output pin
  pinMode(LED1, OUTPUT);
  //to configure pin 1 as the output pin
  pinMode(LED2, OUTPUT);
  //to configure pin 2 as the output pin
  pinMode(LED3, OUTPUT);


  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
}

void loop() {
  /*
  //to blink the LEDs repeatedly we need to put it in the loop

  //to turn ON the LED1
  digitalWrite(LED1, HIGH);
  //to control the speed of the blinking we have to provide a delay
  delay(100);
  //to turn OFF the LED1
  digitalWrite(LED1, LOW);

  //to turn ON the LED2
  digitalWrite(LED2, 1);
  delay(100);
  //to turn OFF the LED2
  digitalWrite(LED2, 0);

  //to turn ON the LED3
  digitalWrite(LED3, 1);
  delay(100);
  //to turn OFF the LED3
  digitalWrite(LED3, 0);

  */
  blinkLights();

}

void blinkLights(){
  //to turn ON the LED1
  digitalWrite(LED1, HIGH);
  delay(DELAY);
  digitalWrite(LED2, HIGH);
  delay(DELAY);
  digitalWrite(LED1, LOW);
  delay(DELAY);
  digitalWrite(LED2, LOW);
  delay(DELAY);

  digitalWrite(LED3, HIGH);
  delay(DELAY);
  digitalWrite(LED4, HIGH);
  delay(DELAY);
  digitalWrite(LED3, LOW);
  delay(DELAY);
  digitalWrite(LED4, LOW);
  delay(DELAY);

  digitalWrite(LED5, HIGH);
  delay(DELAY);
  digitalWrite(LED6, HIGH);
  delay(DELAY);
  digitalWrite(LED5, LOW);
  delay(DELAY);
  digitalWrite(LED6, LOW);
  delay(DELAY);

  digitalWrite(LED7, HIGH);
  delay(DELAY);
  digitalWrite(LED8, HIGH);
  delay(DELAY);
  digitalWrite(LED7, LOW);
  delay(DELAY);
  digitalWrite(LED8, LOW);
  delay(DELAY);
}
