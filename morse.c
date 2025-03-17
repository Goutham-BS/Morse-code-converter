#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char* morseEncode(char x) {
    switch (x) {
        case 'a': return ".-";
        case 'b': return "-...";
        case 'c': return "-.-.";
        case 'd': return "-..";
        case 'e': return ".";
        case 'f': return "..-.";
        case 'g': return "--.";
        case 'h': return "....";
        case 'i': return "..";
        case 'j': return ".---";
        case 'k': return "-.-";
        case 'l': return ".-..";
        case 'm': return "--";
        case 'n': return "-.";
        case 'o': return "---";
        case 'p': return ".--.";
        case 'q': return "--.-";
        case 'r': return ".-.";
        case 's': return "...";
        case 't': return "-";
        case 'u': return "..-";
        case 'v': return "...-";
        case 'w': return ".--";
        case 'x': return "-..-";
        case 'y': return "-.--";
        case 'z': return "--..";
        case '1': return ".----";
        case '2': return "..---";
        case '3': return "...--";
        case '4': return "....-";
        case '5': return ".....";
        case '6': return "-....";
        case '7': return "--...";
        case '8': return "---..";
        case '9': return "----.";
        case '0': return "-----";
        case ' ': return " ";
        default: return "";
    }
}

void morseCode(const char text[]) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == '\n') continue;
        printf("%s ", morseEncode(text[i])); 
    }
    printf("\n");
}

int main() {
    char text[100];
    printf("Enter text to convert to Morse code: ");
    fgets(text, sizeof(text), stdin);
    for(int i = 0; text[i]; i++){
        text[i] = tolower(text[i]);
    }
    printf(">> ");
    morseCode(text);
    return 0;
}
