


const int TouchPin=3;        // number of touch pin
const int ledPin=4;        // number of LED pin
const int buttonPin = 2;    // number of button pin
const int ledPin2=5;   // number of red led
int buttonState = 0;
const int buzzer = 6;




void setup() {
    pinMode(TouchPin, INPUT);
    pinMode(ledPin,OUTPUT);
    pinMode(buttonPin, INPUT);
    pinMode(ledPin2, INPUT);
    pinMode(buzzer, OUTPUT);
    
    
   
}

void loop() {
    int sensorValue = digitalRead(TouchPin);
    buttonState = digitalRead(buttonPin);
    int sensorValue2 = analogRead(A0);
    Serial.println(sensorValue);
    delay(1);
    
    if(sensorValue==1 && buttonState == HIGH  )
    {
        digitalWrite(ledPin,HIGH);
        digitalWrite(ledPin2,LOW);
        digitalWrite(buzzer,HIGH);
        delay(analogRead(0));
        digitalWrite(buzzer,LOW);
        delay(analogRead(0));
       
    }    
    else
    {
        digitalWrite(ledPin,LOW);
        digitalWrite(ledPin2,HIGH);
        
    }
}

