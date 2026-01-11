// // WRITE CODE

// #include <SPI.h>
// #include <MFRC522.h>

// #define SS_PIN 10
// #define RST_PIN 9

// MFRC522 rfid(SS_PIN, RST_PIN);
// MFRC522::MIFARE_Key key;

// byte block = 4;   // safe data block (sector 1)

// void setup() {
//   Serial.begin(9600);
//   SPI.begin();
//   rfid.PCD_Init();

//   // Default key = FF FF FF FF FF FF
//   for (byte i = 0; i < 6; i++) {
//     key.keyByte[i] = 0xFF;
//   }

//   Serial.println("Place KEY RING to WRITE name...");
// }

// void loop() {

//   if (!rfid.PICC_IsNewCardPresent()) return;
//   if (!rfid.PICC_ReadCardSerial()) return;

//   byte dataBlock[16] = "ARKADIP MAHAPATRA";

//   MFRC522::StatusCode status;

//   status = rfid.PCD_Authenticate(
//     MFRC522::PICC_CMD_MF_AUTH_KEY_A,
//     block,
//     &key,
//     &(rfid.uid)
//   );

//   if (status != MFRC522::STATUS_OK) {
//     Serial.println("Authentication failed");
//     return;
//   }

//   status = rfid.MIFARE_Write(block, dataBlock, 16);

//   if (status == MFRC522::STATUS_OK) {
//     Serial.println("Name written successfully ✅");
//   } else {
//     Serial.println("Write failed ❌");
//   }

//   rfid.PICC_HaltA();
//   rfid.PCD_StopCrypto1();
// }



// READ CODE

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;

byte block = 4;

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }

  Serial.println("Place KEY RING to READ data...");
}

void loop() {

  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  byte buffer[18];
  byte size = sizeof(buffer);

  MFRC522::StatusCode status;

  status = rfid.PCD_Authenticate(
    MFRC522::PICC_CMD_MF_AUTH_KEY_A,
    block,
    &key,
    &(rfid.uid)
  );

  if (status != MFRC522::STATUS_OK) {
    Serial.println("Authentication failed");
    return;
  }

  status = rfid.MIFARE_Read(block, buffer, &size);

  if (status == MFRC522::STATUS_OK) {
    Serial.print("Data from card: ");
    for (byte i = 0; i < 16; i++) {
      Serial.print((char)buffer[i]);
    }
    Serial.println();
  } else {
    Serial.println("Read failed");
  }

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}
