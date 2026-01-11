#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("RC522 Ready...");
}

void loop() {
  // Check if a new card is present
  if ( !mfrc522.PICC_IsNewCardPresent() ) {
    return;
  }

  // Try to read the card serial
  if ( !mfrc522.PICC_ReadCardSerial() ) {
    return;
  }


  // Card detected
  Serial.println("DETECTED");
}
  // Halt the card
  mfrc522.PICC_HaltA();
