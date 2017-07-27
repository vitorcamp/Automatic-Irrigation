void setup() {
  pinMode(13, OUTPUT); // configura pino como saída

}

void loop() {
  // read the input on analog pin 0:
    int sensorValue = analogRead(A0);
    
    if (sensorValue > 500){   //sensor vai de 1023 (mais seco) até 380 (mais úmido)
      digitalWrite(13, HIGH);
      delay(200);
    }

     if (sensorValue < 500){   
      digitalWrite(13, LOW);
      delay(200);
    }
      
      /* Para visualizar no hiperterminal os testes de úmidade (leitura do sensor)
      Serial.begin(9600);
      Serial.println(sensorValue);
      delay(1);
      */
}
