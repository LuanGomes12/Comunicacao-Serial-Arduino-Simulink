// Setup
void setup()
{
  Serial.begin(115200);
}

// Main loop
void loop()
{
  // Sends the first integer value
  int value = 8;
  Serial.println(value);
  writeToSimulink(value);
  delay(1000); // 1s

  // Sends the second integer value
  int value1 = 12;
  Serial.println(value1);
  writeToSimulink(value1);
  delay(1000); // 1s
}

// Convert a float value to a byte array using a pointer
void writeToSimulink(float number)
{
  byte *b = (byte *)&number;
  Serial.write(b, 4);
  Serial.write(13); // "\r" CR
  Serial.write(10); // "\n" LF
}
