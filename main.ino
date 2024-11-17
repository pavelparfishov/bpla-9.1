#include <Arduino.h>

void setup() {
    pinMode(2, OUTPUT);  // Настройка пина 2 как выход
}

void loop() {
    digitalWrite(2, HIGH);  // Включение светодиода
    delay(500);             // Задержка 500 мс
    digitalWrite(2, LOW);   // Выключение светодиода
    delay(500);             // Задержка 500 мс
}
