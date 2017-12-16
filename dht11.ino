#include <DHT.h>

#define DHTPIN0 A0 // pino que conecta o controle do sensor 1
#define DHTPIN1 A1 // pino que conecta o controle do sensor 2
#define DHTPIN2 A2 // pino que conecta o controle do sensor 3
#define DHTPIN3 A3 // pino que conecta o controle do sensor 4
#define DHTPIN4 A4 // pino que conecta o controle do sensor 5
#define DHTPIN5 A5 // pino que conecta o controle do sensor 6
#define DHTTYPE DHT11

DHT dht0(DHTPIN0,DHTTYPE);
DHT dht1(DHTPIN1,DHTTYPE);
DHT dht2(DHTPIN2,DHTTYPE);
DHT dht3(DHTPIN3,DHTTYPE);
DHT dht4(DHTPIN4,DHTTYPE);
DHT dht5(DHTPIN5,DHTTYPE);

void setup() {
  Serial.begin(9600);  
}

void loop() {
  float h0 = dht0.readHumidity();
  float t0 = dht0.readTemperature();
  float h1 = dht1.readHumidity();
  float t1 = dht1.readTemperature();
  float h2 = dht2.readHumidity();
  float t2 = dht2.readTemperature();
  float h3 = dht3.readHumidity();
  float t3 = dht3.readTemperature();
  float h4 = dht4.readHumidity();
  float t4 = dht4.readTemperature();
  float h5 = dht5.readHumidity();
  float t5 = dht5.readTemperature();
  // Sensor 1
  if (isnan(t0) || isnan(h0)) {
    Serial.println("Failed to read from DHT0!");
  } else {
    Serial.print("S1 Umidade: ");
    Serial.print(h0);
    Serial.println(" %t");
    Serial.print("S1 Temperatura: ");
    Serial.print(t0);
    Serial.println(" *C");
    Serial.println("--------------");
  }
  // Sensor 2
  if (isnan(t1) || isnan(h1)) {
    Serial.println("Failed to read from DHT1!");
  } else {
    Serial.print("S2 Umidade: ");
    Serial.print(h1);
    Serial.println(" %t");
    Serial.print("S2 Temperatura: ");
    Serial.print(t1);
    Serial.println(" *C");
    Serial.println("--------------");
  }
  // Sensor 3
  if (isnan(t2) || isnan(h2)) {
    Serial.println("Failed to read from DHT2!");
  } else {
    Serial.print("S3 Umidade: ");
    Serial.print(h2);
    Serial.println(" %t");
    Serial.print("S3 Temperatura: ");
    Serial.print(t2);
    Serial.println(" *C");
    Serial.println("--------------");
  }
  // Sensor 4
  if (isnan(t3) || isnan(h3)) {
    Serial.println("Failed to read from DHT3!");
  } else {
    Serial.print("S4 Umidade: ");
    Serial.print(h3);
    Serial.println(" %t");
    Serial.print("S4 Temperatura: ");
    Serial.print(t3);
    Serial.println(" *C");
    Serial.println("--------------");
  }
  // Sensor 5
  if (isnan(t4) || isnan(h4)) {
    Serial.println("Failed to read from DHT4!");
  } else {
    Serial.print("S5 Umidade: ");
    Serial.print(h4);
    Serial.println(" %t");
    Serial.print("S5 Temperatura: ");
    Serial.print(t4);
    Serial.println(" *C");
    Serial.println("--------------");
  }
  // Sensor 6
  if (isnan(t5) || isnan(h5)) {
    Serial.println("Failed to read from DHT5!");
  } else {
    Serial.print("S6 Umidade: ");
    Serial.print(h5);
    Serial.println(" %t");
    Serial.print("S6 Temperatura: ");
    Serial.print(t5);
    Serial.println(" *C");
    Serial.println("--------------");
  }
    delay(9000);
}
