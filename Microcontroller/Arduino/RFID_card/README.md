<img width="100%" alt="Screenshot from 2026-01-11 21-30-02" src="https://github.com/user-attachments/assets/fbf8e723-5160-42f3-b9ee-4ace4b137a5c" />

> 02

<img width="100%" alt="Screenshot from 2026-01-11 21-36-40" src="https://github.com/user-attachments/assets/1b13da85-ca7a-43c0-9521-33c112e92e6c" />

>03

---

## 🖥️ What this output means

### 1️⃣

```
RC522 Reader Initialized
```

**Meaning:**
The RFID reader has powered on correctly and is ready to scan cards.

---

## 🪪 First RFID card scanned

### 2️⃣

```
Card UID: 92:B7:78:51
```

**Meaning:**
This is the **unique identity number** of the first RFID card.
It is written in a computer-friendly format (hexadecimal).
This number uniquely identifies that specific card.

---

### 3️⃣

```
UID (dec): 2461497425
```

**Meaning:**
The same card ID is shown again, but this time in **decimal (normal number) format**.
It is just another way to represent the same identity.

Hex and decimal both represent the **same card**, only written differently.

---

### 4️⃣

```
SAK: 0x8
```

**Meaning:**
This tells the **type of RFID card** that was detected.
`0x08` means it is a **standard MIFARE Classic card**.
This value is mainly for information and debugging.

---

<img width="100%" alt="Screenshot from 2026-01-11 21-48-30" src="https://github.com/user-attachments/assets/cfdb775e-c98f-4212-958c-ed07be7d2874" />

> **these two cards are definitely different**

---

## 1️⃣ Proof that the two cards are different
### 📌 Card-1

```
UID (HEX): 90:9D:38:0E
UID (DEC): 2426222606
SAK: 0x08
```

### 📌 Card-2

```
UID (HEX): B9:CF:13:5A
UID (DEC): 3117355866
SAK: 0x18
```

### 🔍 UID comparison

* UID is the **hardware-level unique identifier** burned into the RFID chip.
* UID is transmitted during **ISO/IEC 14443-A anti-collision**.
* If **even one byte differs**, the card is **physically different**.

| Byte | Card-1 | Card-2 |
| ---- | ------ | ------ |
| 1    | 90     | B9     |
| 2    | 9D     | CF     |
| 3    | 38     | 13     |
| 4    | 0E     | 5A     |

- **All bytes are different**
- **Decimal UID also different**
- **These are two completely different RFID chips**

> This difference is at `silicon level`, `not software`.

---

## 2️⃣ What exactly is SAK?

**SAK = Select Acknowledge**

* Sent by the card during **ISO 14443-A SELECT command**
* Tells the reader:

  * Card type
  * Memory structure
  * UID completeness
  * Whether more cascade levels exist

---

## 3️⃣ Meaning of `SAK = 0x08` vs `SAK = 0x18`

### 🔹 `SAK = 0x08`

* **MIFARE Classic 1K**
* Memory: **1024 bytes**
* UID: 4-byte (single size)
* Crypto: **CRYPTO1 only**
* Old, widely cloned

Used in:

* Old access cards
* Simple attendance systems

---

### 🔹 `SAK = 0x18` (IMPORTANT)

This is **better and more capable**.

### Technical meaning of `0x18`:

Binary:

```
0x18 = 00011000
```

| Bit    | Meaning                                |
| ------ | -------------------------------------- |
| Bit 3  | Indicates **MIFARE Classic 4K**        |
| Bit 4  | Indicates **higher memory & security** |
| Others | Protocol features                      |

### Card Type:

✅ **MIFARE Classic 4K**

---

## 4️⃣ Advantages of `SAK = 0x18` (MIFARE Classic 4K)

### 🧠 1. Larger memory

| Card | Memory   |
| ---- | -------- |
| 0x08 | 1 KB     |
| 0x18 | **4 KB** |

➡️ Can store:

* User data
* IDs
* Access levels
* Encrypted blocks

---

### 🔐 2. More sectors

| Card | Sectors        |
| ---- | -------------- |
| 1K   | 16 sectors     |
| 4K   | **40 sectors** |

➡️ Allows:

* Multiple applications on same card
* Better data separation

---

### 🧩 3. Better access control design

You can do:

* Sector-wise authentication
* Different keys for different services
* Wallet + ID on same card

---

### 🛠️ 4. More professional / industrial use

Commonly used in:

* Transport cards
* University ID cards
* Multi-service access cards

---

## 5️⃣ Important security note (very important)

⚠️ **Both `0x08` and `0x18` use CRYPTO1**

* CRYPTO1 is **cryptographically broken**
* UID can be cloned using special tools

✅ Still OK for:

* Learning
* DIY
* Small projects

❌ Not OK for:

* Banking
* Secure authentication

---

## 6️⃣ Final technical conclusion

✔️ Cards are **physically different**
✔️ UID confirms uniqueness
✔️ `SAK = 0x18` card is:

* Bigger memory
* More flexible
* More powerful than `0x08`

---

