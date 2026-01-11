#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  Serial.println("Place RFID card near reader");
}

void loop() {

  // যদি কার্ড না থাকে
  if (!rfid.PICC_IsNewCardPresent()) {
    return;
  }

  // যদি কার্ড পড়া না যায়
  if (!rfid.PICC_ReadCardSerial()) {
    return;
  }

  // কার্ড ডিটেক্ট হলে UID দেখাও
  Serial.print("Card UID: ");

  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
  }

  Serial.println();

  // কার্ড রিলিজ
  rfid.PICC_HaltA();
}
