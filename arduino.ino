

 
void setup()
{
 Serial.begin(9600);
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
 pinMode(11, OUTPUT);
} 



void loop()
{
digitalWrite(11, HIGH);  
// Получаем команды на включение-выключение светодиода на 13 порту.
String str = Serial.readString();

// Если команда «TRUE» то выключаем красный светодиод и размыкаем реле.
if (str == "True") { 
digitalWrite(11, LOW);
digitalWrite(12, HIGH);
delay(5000);
digitalWrite(11, HIGH);
digitalWrite(12, LOW);
} 
}
