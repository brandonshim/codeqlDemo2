#include <stdio.h>
//simple buffer overflow program
void vuln() {
    char buffer[64]; 
    printf("Input: ");
    gets(buffer); 
    printf("You entered: %s\n", buffer);
}

int main() {
    vuln();
    return 0;
}
