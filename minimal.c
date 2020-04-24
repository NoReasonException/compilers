#include <stdio.h>
#include <stdlib.h>

union ilword {
    int n;
    union ilword* ptr;
    void(*f)();
};
typedef union ilword word;

word param[2];
int next_param = 0;

word r0 = {0};

word vg0 = {0};
word vg1 = {0};
word vg2 = {0};
void INIT();
void MAIN();
void Test_test();
int main() {
    INIT();
    MAIN();
    return 0;
}

void INIT() {
    word vl[0];
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= -1 && p < 2; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
INIT:
    r2.n = 0;
    vg0.ptr = calloc(r2.n, sizeof(word));
    r2.n = 0;
    vg1.ptr = calloc(r2.n, sizeof(word));
    r2.n = 1;
    vg2.ptr = calloc(r2.n, sizeof(word));
    r3 = vg2;
    r4.f = &Test_test;
    *(r3.ptr) = r4;
    return;
}

void MAIN() {
    word vl[0];
    word r8;
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= -1 && p < 2; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
MAIN:
    r1.n = 1;
    r2.ptr = calloc(r1.n, sizeof(word));
    *(r2.ptr) = vg2;
    r3.n = 19;
    r4 = *(r2.ptr);
    r5.n = 0;
    r6.ptr = r4.ptr + r5.n;
    r7 = *(r6.ptr);
    param[next_param++] = r2;
    param[next_param++] = r3;
    (*(r7.f))();
    r8 = r0;
    printf("%d\n", r8);
    return;
}

void Test_test() {
    word vl[3];
    word r8;
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= 2 && p < 2; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
Test_test:
    r1.n = 9;
    r2.n = vl[1].n < r1.n;
    r3.n = 15;
    r4.n = vl[1].n < r3.n;
    r5 = r2;
    r6.n = -1;
    r7.n = 0;
    r5.n = r5.n + r6.n;
    if (r5.n == 0) goto Test_test_0;
    r5 = r4;
    r5.n = r5.n + r6.n;
    if (r5.n == 0) goto Test_test_1;
    r8 = r2;
    if (r7.n == 0) goto Test_test_2;
Test_test_1:
    r8 = r4;
    if (r7.n == 0) goto Test_test_2;
Test_test_0:
    r8 = r2;
    
Test_test_2:
    if (r8.n == 0) goto Test_test_3;
    vl[2].n = 1;
    goto Test_test_4;
Test_test_3:
    vl[2].n = 0;
Test_test_4:
    r0 = vl[2];
    return;
}

