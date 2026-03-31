volatile char* video = (volatile char*)0xB8000;

void put(int pos, char symbol, char col) {
    video[pos] = symbol;
    video[pos+1] = col;
}

void print(int pos, char* text, char col) {
    for (int i=0; text[i]!='\0';i++) {
        put((pos+i)*2, text[i], col);
    }
}