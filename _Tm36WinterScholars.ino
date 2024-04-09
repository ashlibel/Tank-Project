int sensorPin = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);

}

void loop() 
{
  int reading = analogRead(sensorPin);

  float voltage = reading * 5.0;
  voltage /= 1024.0;

  Serial.print(voltage); Serial.println(" volts");
  float temperatureC = (voltage - 0.5) * 100;

  Serial.print(temperatureC); Serial.println (" degress C");
  
  //convert fareneheit to celcius 
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print (temperatureF); Serial.println(" degrees F");

  delay (1000); //waitng for a second

 
}
