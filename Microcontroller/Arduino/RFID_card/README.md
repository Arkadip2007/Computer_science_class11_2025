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
