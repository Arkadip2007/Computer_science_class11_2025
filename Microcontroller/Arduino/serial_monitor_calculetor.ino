// Define a constant for the maximum length of the input string
const int MAX_INPUT_LENGTH = 32;
char inputString[MAX_INPUT_LENGTH]; // Buffer to store the incoming string
int stringIndex = 0;              // Index to track the position in the buffer
bool stringComplete = false;      // Flag to indicate when the input is complete

void setup() {
  // Initialize serial communication at a common baud rate
  Serial.begin(9600);
  Serial.println("Simple Serial Calculator Ready.");
  Serial.println("Send a simple addition expression (e.g., 2+5) followed by Enter.");
  // Reserve space for the string buffer, filling it with null terminators
  memset(inputString, 0, MAX_INPUT_LENGTH);
}

void loop() {
  // 1. Read Serial Input
  // This function is designed to run in the background and build the input string
  serialEvent();

  // 2. Process Input when Complete
  if (stringComplete) {
    Serial.print("Received: ");
    Serial.println(inputString);

    // Call the function to calculate the result
    calculateAndReply(inputString);

    // Reset the input state for the next command
    stringIndex = 0;
    stringComplete = false;
    // Clear the buffer for the next input
    memset(inputString, 0, MAX_INPUT_LENGTH);
  }
}

// Function to handle the calculation logic
void calculateAndReply(char* expression) {
  // Pointers to hold the positions of the two numbers and the operator
  int num1 = 0;
  int num2 = 0;
  char op = '\0'; // Initialize operator to null character
  int result = 0;
  bool success = false;

  // Find the operator (+, -, *, /) and its position
  char* opPos = NULL;
  for (int i = 0; i < strlen(expression); i++) {
    if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
      opPos = &expression[i];
      op = expression[i];
      break; // Found the operator, stop searching
    }
  }

  // Check if an operator was found
  if (opPos != NULL) {
    // Temporarily replace the operator with a null terminator to isolate the first number
    *opPos = '\0';

    // Parse the first number (left of the operator)
    num1 = atoi(expression);

    // The second number starts right after the original operator position
    // opPos + 1 points to the character immediately following the operator
    num2 = atoi(opPos + 1);

    // Perform the calculation based on the operator
    switch (op) {
      case '+':
        result = num1 + num2;
        success = true;
        break;
      case '-':
        result = num1 - num2;
        success = true;
        break;
      case '*':
        result = num1 * num2;
        success = true;
        break;
      case '/':
        // Handle division by zero
        if (num2 != 0) {
          result = num1 / num2;
          success = true;
        } else {
          Serial.println("Error: Division by zero!");
        }
        break;
      default:
        // This case should not be reached if opPos != NULL, but it's good practice
        Serial.println("Error: Unknown operator.");
        break;
    }
  } else {
    Serial.println("Error: No operator (+, -, *, /) found in the expression.");
  }
  delay(10000);
  // Print the final result if calculation was successful
  if (success) {
    Serial.print("Result: ");
    Serial.println(result);
  }
  Serial.println("---");
}

// Standard Arduino function to handle serial data reception
void serialEvent() {
  while (Serial.available()) {
    // Get the new byte:
    char inChar = (char)Serial.read();

    // If it's the end of line, set the flag and terminate the string
    if (inChar == '\n' || inChar == '\r') {
      // Ignore carriage return often sent with newline
      if (inChar == '\r' && Serial.peek() == '\n') {
          Serial.read(); // Consume the next newline
          continue;
      }
      // If we got a carriage return or newline and it's not empty, complete the string
      if (stringIndex > 0) {
          inputString[stringIndex] = '\0'; // Null-terminate the string
          stringComplete = true;
      }
    }
    // If we have room in the buffer, add the character
    else if (stringIndex < MAX_INPUT_LENGTH - 1) {
      // Only store printable characters
      if (inChar >= ' ') {
          inputString[stringIndex++] = inChar;
      }
    }
  }
}