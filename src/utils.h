// video.c
extern volatile char* video;
extern void print(int pos, char* text, char col);
extern void put(int pos, char symbol, char col);
// math.c

typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

extern int round(double n);
// memory.c

