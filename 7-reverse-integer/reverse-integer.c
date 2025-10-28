int reverse(int x) {
    char b[20];
    int depo[20];
    int a = 0;

    long val = x;  // long yapıyoruz
    int isNegative = 0;

    if (val < 0) {
        isNegative = 1;
        val = -val;  // artık güvenli
    }

    sprintf(b, "%ld", val);

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] >= '0' && b[i] <= '9') {
            depo[a] = b[i] - '0';
            a++;
        }
    }

    long result = 0;
    for (int i = a - 1; i >= 0; i--) {
        result = result * 10 + depo[i];
    }

    if (isNegative) result = -result;

    if (result > 2147483647 || result < -2147483648) return 0;

    return (int)result;
}
