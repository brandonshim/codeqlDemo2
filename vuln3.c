#include <stdio.h>
#include <string.h>

void vuln_function() {
    char buffer[10];
    printf("input: ");
    gets(buffer);  

    char another_buffer[10];
    strcpy(another_buffer, buffer);  // no bounds check
}

int main() {
    vuln_function();
    return 0;
}
