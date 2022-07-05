# `6.) DHT11 or DHT22`

# `DHT22 Circuit Diagram:`

![image](https://user-images.githubusercontent.com/63813881/177361184-88de2471-ee31-4a9d-927b-49c7996f5567.png)

# `Code: 1`
# `for DHT22`
<pre>
/* How to use the DHT-22 sensor with Arduino uno
   Temperature and humidity sensor
*/

//Libraries
#include <DHT.h>;

//Constants
#define DHTPIN 7     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino


//Variables
int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
    delay(2000);
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    delay(500); //Delay 2 sec.
}
</pre>

# `DHT11 Circuit Diagram`

![image](https://user-images.githubusercontent.com/63813881/177361281-9aa5ff77-4b20-4c26-a202-8b3da519554b.png)

# `Code: 2`
# `For DHT11`
<pre>
#include "DHT.h"
DHT dht(7, DHT22);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT22 test!");
  dht.begin();
}

void loop() {
  delay(2000);

  // Read temperature as Celsius (the default)
  float t_c = dht.readTemperature();
  float hum = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(t_c);
  Serial.println(" C");
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println(" %");
}
</pre>

# `Code: 1`
<pre>
#include "DHT.h"
DHT dht(7, DHT22);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT22 test!");
  dht.begin();
}

void loop() {

  delay(2000);
  float h = dht.readHumidity();
  float t_c = dht.readTemperature();
  float t_f = dht.readTemperature(true);

  if (isnan(h) || isnan(t_c) || isnan(t_f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(t_f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t_c, h, false);

  Serial.print(" Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.print("Temperature: ");
  Serial.print(t_c);
  Serial.println(" C");
  Serial.print("Temperature: ");
  Serial.print(t_f);
  Serial.println(" F");

  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.println(" C");
  Serial.print("Heat index: ");
  Serial.print(hif);
  Serial.println(" F");
}
</pre>
