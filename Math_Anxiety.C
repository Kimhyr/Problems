#include <stdio.h>

int get_input(char buf[64]) {
    int i = 0;
    for (; i < 64; ++i) {
        buf[i] = getchar();
        if (buf[i] == '\n')
            return i;
    }
    return i;
}

int math_anxiety() {
    char buf[64][2];
    int size[2];
    if ((size[0] = get_input(buf[0]))
        return -1;
    if ((get_input(buf[1])) == -1)
        return -1;
    for ()
}

int main() {
    return 0;
}
