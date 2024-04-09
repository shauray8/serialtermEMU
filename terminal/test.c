#include <unistd.h>
#include <stdio.h>

int main() {
    char message[] = "Hello, world!\n";
    int bytes_written = write(STDOUT_FILENO, message, sizeof(message) - 1); // Minus 1 to exclude the null terminator
    if (bytes_written == -1) {
        perror("write");
        return 1; // Return an error code
    }
    return 0; // Return success
}
