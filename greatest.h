// greatest.h
#ifndef GREATEST_H
#define GREATEST_H

inline int findGreatest(int a, int b, int c) {
    int greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }
    return greatest;
}

#endif // GREATEST_H
