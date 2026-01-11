#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("RC522 Reader Initialized");
}

void loop() {
  // Check for a new card
  if ( !mfrc522.PICC_IsNewCardPresent() ) {
    return;
  }

  // Try to read the card serial
  if ( !mfrc522.PICC_ReadCardSerial() ) {
    return;
  }

  // Print UID in hex (colon-separated)
  Serial.print("Card UID: ");
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    if (mfrc522.uid.uidByte[i] < 0x10) Serial.print('0');
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    if (i < mfrc522.uid.size - 1) Serial.print(":");
  }
  Serial.println();

  // Print UID as decimal
  unsigned long uidDec = 0;
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    uidDec = (uidDec << 8) | mfrc522.uid.uidByte[i];
  }
  Serial.print("UID (dec): ");
  Serial.println(uidDec);

  // Optional: print SAK
  Serial.print("SAK: 0x");
  Serial.println(mfrc522.uid.sak, HEX);

  // Halt card and stop encryption
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();

  delay(300);
}
