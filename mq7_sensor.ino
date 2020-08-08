void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int sensorValue = analogRead(A0);   // read the input
    Serial.println(sensorValue);    // print out the value you read
    delay(1);
}