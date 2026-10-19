int motorPin = 3;
int ledPin = 8;
 
int velBaja  = 100;
int velMedia = 180;
int velAlta  = 255;
 
void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
 
  analogWrite(motorPin, 0);
  digitalWrite(ledPin, LOW);
 
  Serial.begin(9600);
  while (!Serial);
 
  Serial.println("Elige la velocidad del motor:");
  Serial.println("1 = Velocidad baja");
  Serial.println("2 = Velocidad media");
  Serial.println("3 = Velocidad alta");
}
 
void loop()
{
  if (Serial.available())
  {
    int opcion = Serial.parseInt();
 
    while (Serial.available())
    {
      Serial.read();
    }
 
    if (opcion == 1)
    {
      analogWrite(motorPin, velBaja);
      digitalWrite(ledPin, HIGH);
      Serial.println("Motor en velocidad BAJA");
    }
    else if (opcion == 2)
    {
      analogWrite(motorPin, velMedia);
      digitalWrite(ledPin, HIGH);
      Serial.println("Motor en velocidad MEDIA");
    }
    else if (opcion == 3)
    {
      analogWrite(motorPin, velAlta);
      digitalWrite(ledPin, HIGH);
      Serial.println("Motor en velocidad ALTA");
    }
    else
    {
      Serial.println("Opcion invalida. Escribe 1, 2 o 3.");
    }
  }
}
