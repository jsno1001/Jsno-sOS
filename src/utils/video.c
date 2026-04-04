#include "utils.h"
volatile char* video = (volatile char*)0xB8000;

void put(int pos, char symbol, char col) {
    video[pos] = symbol;
    video[pos+1] = col;
}

void print(int pos, char* text, char col) {
    for (int i=0; text[i]!='\0';i++) {
        if (text[i]=='\n') {
            pos=(pos/80+1)*80;
        } else
        if (text[i]=='\r'){
            pos=(pos/80)*80;
        } else {
            put((pos)*2, text[i], col);
            pos++;
        }
    }
}