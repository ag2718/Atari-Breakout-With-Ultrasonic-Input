#include <NewPing.h>

int trig_pin = 12;
int echo_pin = 11;
int max_dist = 200;
NewPing sonar(trig_pin, echo_pin, max_dist);

void setup() {
  Serial.begin(115200);

}

void loop() {
  delay(10);
  Serial.println(sonar.ping_cm());

}
