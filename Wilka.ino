#include <LiquidCrystal_I2C.h> 
LiquidCrystal I2C lcd(0x27, 16, 2);
const int trigpin 25:
const int echopin 26:
const int buzzer 14:
long durasi:
int jarak;
void setup() {
Serial.begin(115200): 
lcd.begin(); 
pinMode(trigpin, OUTPUT); 
pinMode(echopin, INPUT);
 pinMode(buzzer, OUTPUT);
digitalWrite(buzzer. HIGH):
}
void loop() {
digitalWrite(buzzer. HIGH):
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10):
digitalWrite(trigpin, LOW);
durasi pulseIn(echopin, HIGH);
jarak durasi 0.0372://Mengubah Durasi
Menjadi Jarak
Serial.print(jarak);
Serial.println(" cm');
lcd.setCursor(0, 0);
lcd.print("Jarak:"); lcd.setCursor(8.0);
lcd.print(jarak);
lcd.setCursor(11, 01:
lcd.print("cm");
delay(500);
lcd.clear();
if (jarak <= 50) (
digitalWrite(buzzer, LOW);
Serial.println('Sirine Menyala"); 
lcd.setCursor(0, 1);
 lcd.print("Sirine Menyala"); 
delay(500);
} else {
digitalWrite(buzzer, HIGH):
Serial.println("Sirine Mati");
 lcd.setCursor(0, 1);
lcd.print("Sirine Mati");
delay(100);
}
}