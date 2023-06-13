void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // set the LED on 
  delay(2050); // wait for 2 seconds
  digitalWrite(LED_BUILTIN, LOW); //set the LED off
  delay(2050); // wait for 2 seconds
}