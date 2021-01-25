#define R_REF 985.0
#define V_IN 5.12
#define ALOG_RES 1024
#define ALOG_PIN A0
#define SAMPLE_FREQUENCY 1000

int ohmMeter(double rRef, double vIn, int analogResolution, int alogPin);

double rSensor;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(SAMPLE_FREQUENCY);
  rSensor = ohmMeter(R_REF, V_IN, ALOG_RES, ALOG_PIN);
  Serial.println(rSensor);
}
