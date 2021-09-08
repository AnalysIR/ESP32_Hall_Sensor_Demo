#include "driver/adc.h"
int hallSensorVal = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Example test of ESP32 Hall Sensor");
  Serial.println("Place a magnet near the metal can on the ESP32");
  Serial.println("Depending on orientation of magnet the result returned will be positive or negative.");
  Serial.println("Visit: http://www.AnalysIR.com");
  
  //following line not required in Arduino IDE
  //adc1_config_width(ADC_WIDTH_BIT_12); //initialise the ADC
}

void loop() {
  hallSensorVal = hall_sensor_read();

  Serial.println(hallSensorVal); 
  
  delay(1000); //pring a result every second
}
