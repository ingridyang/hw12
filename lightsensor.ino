    int soundsensor = 3;
    int led = 7;

    void setup() {

        pinMode (soundsensor, INPUT);
        pinMode (led, OUTPUT);

    }

    void loop() {

        int sensorvalue = digitalRead (soundsensor);
  
        if (sensorvalue == 1)
        {
        digitalWrite (led, HIGH);
     }

    else
        {
        digitalWrite (led, LOW);
      }
    }


//pt 2:

int soundsensor = A0;
int led1 = 7;
int led2 = 10;

void setup() {

  pinMode (soundsensor, INPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  float val = analogRead (soundsensor);
  Serial.print("0 1024 ");
  Serial.println(val);

  if (val > 300)
  {
    digitalWrite (led1, HIGH);
  }
  else
  {
    digitalWrite (led1, LOW);
  }
  
  
  if (val > 200)
  {
    digitalWrite (led2, HIGH);
  }
  else
  {
    digitalWrite (led2, LOW);
  }
}
