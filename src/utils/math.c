int round(double n) {
    double b = n;
    if (n >= 0)
        n+=0.5;
    else
        n-=0.5;
    if (b > n) b--;
    return (int)b; 
}