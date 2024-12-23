#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_TEMPLATE_NAME ""

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "";
char ssid[] = "";
char pass[] = "";

int pins[] = {13, 14, 27, 26};

BLYNK_WRITE(V1) {
  digitalWrite(pins[0], param.asInt());
}
BLYNK_WRITE(V2) {
  digitalWrite(pins[1], param.asInt());
}
BLYNK_WRITE(V3) {
  digitalWrite(pins[2], param.asInt());
}
BLYNK_WRITE(V4) {
  digitalWrite(pins[3], param.asInt());
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

  for (pin : pins) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  Blynk.run();
}