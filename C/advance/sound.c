#include <windows.h>
#include <stdio.h>

int main() {
    // this is a simple C program to generate sound using the Beep function from the Windows API.
    // Frequency (Hz), Duration (milliseconds)
    Beep(1000, 1000);   // 1000 Hz for 0.5 second
    Beep(1500, 500);
    Beep(500, 500);
    return 0;
}


// and 


#include <stdio.h>

int main() {
    printf("\a");
    return 0;
}

// this is a simple C program to generate a beep sound using the ASCII bell character.
