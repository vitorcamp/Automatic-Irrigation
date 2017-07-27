void setup() {
  pinMode(13, OUTPUT); // configura pino como saída

}

void loop() {
  // read the input on analog pin 0:
    int sensorValue = analogRead(A0);
    if (sensorValue > 500){   //sensor vai de 1023 (mais úmido) até 340 (mais seco)
      digitalWrite(13, HIGH);
      delay(200);
    }

     if (sensorValue < 500){   //sensor vai de 1023 (mais úmido) até 340 (mais seco)
      digitalWrite(13, LOW);
      delay(200);
    }

}
