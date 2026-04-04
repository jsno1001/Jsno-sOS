typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

int round(double n) {
    double b = n;
    if (n >= 0)
        n+=0.5;
    else
        n-=0.5;
    if (b > n) b--;
    return (int)b; 
}