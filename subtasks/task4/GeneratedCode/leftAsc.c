#include <stdio.h>
#include <stdlib.h>

union ilword {
    int n;
    union ilword* ptr;
    void(*f)();
};
typedef union ilword word;

word param[12];
int next_param = 0;

word r0 = {0};

word vg0 = {0};
word vg1 = {0};
word vg2 = {0};
word vg3 = {0};
word vg4 = {0};
word vg5 = {0};
void INIT();
void MAIN();
void BasicTest_test();
void LeftAsc_condition();
void LeftAsc_test();
void ShortCircut_condition();
void ShortCircut_test();
void Precedence_condition();
void Precedence_test();
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
    for(p = 0; p <= -1 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
INIT:
    r1.n = 1;
    r2.n = 0;
    vg0.ptr = calloc(r2.n, sizeof(word));
    r2.n = 0;
    vg1.ptr = calloc(r2.n, sizeof(word));
    r2.n = 1;
    vg2.ptr = calloc(r2.n, sizeof(word));
    r3 = vg2;
    r4.f = &BasicTest_test;
    *(r3.ptr) = r4;
    r2.n = 2;
    vg3.ptr = calloc(r2.n, sizeof(word));
    r3 = vg3;
    r4.f = &LeftAsc_condition;
    *(r3.ptr) = r4;
    r3.ptr = r3.ptr + r1.n;
    r4.f = &LeftAsc_test;
    *(r3.ptr) = r4;
    r2.n = 2;
    vg4.ptr = calloc(r2.n, sizeof(word));
    r3 = vg4;
    r4.f = &ShortCircut_condition;
    *(r3.ptr) = r4;
    r3.ptr = r3.ptr + r1.n;
    r4.f = &ShortCircut_test;
    *(r3.ptr) = r4;
    r2.n = 2;
    vg5.ptr = calloc(r2.n, sizeof(word));
    r3 = vg5;
    r4.f = &Precedence_condition;
    *(r3.ptr) = r4;
    r3.ptr = r3.ptr + r1.n;
    r4.f = &Precedence_test;
    *(r3.ptr) = r4;
    return;
}

void MAIN() {
    word vl[0];
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= -1 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
MAIN:
    r1.n = 1;
    r2.ptr = calloc(r1.n, sizeof(word));
    *(r2.ptr) = vg3;
    r3 = *(r2.ptr);
    r4.n = 1;
    r5.ptr = r3.ptr + r4.n;
    r6 = *(r5.ptr);
    param[next_param++] = r2;
    (*(r6.f))();
    r7 = r0;
    printf("%d\n", r7);
    return;
}

void BasicTest_test() {
    word vl[2];
    word r25;
    word r24;
    word r23;
    word r22;
    word r21;
    word r20;
    word r19;
    word r18;
    word r17;
    word r16;
    word r15;
    word r14;
    word r13;
    word r12;
    word r11;
    word r10;
    word r9;
    word r8;
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= 1 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
BasicTest_test:
    r2.n = 1;
    r4.n = 1;
    r5.n = -1;
    r6.n = 0;
    r4.n = r4.n + r5.n;
    if (r4.n == 0) goto BasicTest_test_0;
    r3.n = 1;
    r4.n = 1;
    r4.n = r4.n + r5.n;
    if (r4.n == 0) goto BasicTest_test_1;
    r7 = r2;
    if (r6.n == 0) goto BasicTest_test_2;
BasicTest_test_1:
    r7 = r3;
    if (r6.n == 0) goto BasicTest_test_2;
BasicTest_test_0:
    r7 = r2;
    
BasicTest_test_2:
    if (r7.n == 0) goto BasicTest_test_18;
    r8.n = 1;
    r10.n = 1;
    r11.n = -1;
    r12.n = 0;
    r10.n = r10.n + r11.n;
    if (r10.n == 0) goto BasicTest_test_3;
    r9.n = 0;
    r10.n = 0;
    r10.n = r10.n + r11.n;
    if (r10.n == 0) goto BasicTest_test_4;
    r13 = r8;
    if (r12.n == 0) goto BasicTest_test_5;
BasicTest_test_4:
    r13 = r9;
    if (r12.n == 0) goto BasicTest_test_5;
BasicTest_test_3:
    r13 = r8;
    
BasicTest_test_5:
    if (r13.n == 0) goto BasicTest_test_16;
    r14.n = 0;
    r16.n = 0;
    r17.n = -1;
    r18.n = 0;
    r16.n = r16.n + r17.n;
    if (r16.n == 0) goto BasicTest_test_6;
    r15.n = 1;
    r16.n = 1;
    r16.n = r16.n + r17.n;
    if (r16.n == 0) goto BasicTest_test_7;
    r19 = r14;
    if (r18.n == 0) goto BasicTest_test_8;
BasicTest_test_7:
    r19 = r15;
    if (r18.n == 0) goto BasicTest_test_8;
BasicTest_test_6:
    r19 = r14;
    
BasicTest_test_8:
    if (r19.n == 0) goto BasicTest_test_14;
    r20.n = 0;
    r22.n = 0;
    r23.n = -1;
    r24.n = 0;
    r22.n = r22.n + r23.n;
    if (r22.n == 0) goto BasicTest_test_9;
    r21.n = 0;
    r22.n = 0;
    r22.n = r22.n + r23.n;
    if (r22.n == 0) goto BasicTest_test_10;
    r25 = r20;
    if (r24.n == 0) goto BasicTest_test_11;
BasicTest_test_10:
    r25 = r21;
    if (r24.n == 0) goto BasicTest_test_11;
BasicTest_test_9:
    r25 = r20;
    
BasicTest_test_11:
    if (r25.n == 0) goto BasicTest_test_12;
    vl[1].n = 0;
    goto BasicTest_test_13;
BasicTest_test_12:
    vl[1].n = 1;
BasicTest_test_13:
    goto BasicTest_test_15;
BasicTest_test_14:
    vl[1].n = 0;
BasicTest_test_15:
    goto BasicTest_test_17;
BasicTest_test_16:
    vl[1].n = 0;
BasicTest_test_17:
    goto BasicTest_test_19;
BasicTest_test_18:
    vl[1].n = 0;
BasicTest_test_19:
    r0 = vl[1];
    return;
}

void LeftAsc_condition() {
    word vl[3];
    int p;
    for(p = 0; p <= 2 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
LeftAsc_condition:
    printf("%d\n", vl[1]);
    r0 = vl[2];
    return;
}

void LeftAsc_test() {
    word vl[2];
    word r29;
    word r28;
    word r27;
    word r26;
    word r25;
    word r24;
    word r23;
    word r22;
    word r21;
    word r20;
    word r19;
    word r18;
    word r17;
    word r16;
    word r15;
    word r14;
    word r13;
    word r12;
    word r11;
    word r10;
    word r9;
    word r8;
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= 1 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
LeftAsc_test:
    r1.n = 1;
    r2.n = 0;
    r3 = *(vl[0].ptr);
    r4.n = 0;
    r5.ptr = r3.ptr + r4.n;
    r6 = *(r5.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r1;
    param[next_param++] = r2;
    (*(r6.f))();
    r7 = r0;
    r15 = r7;
    r16.n = -1;
    r17.n = 0;
    r15.n = r15.n + r16.n;
    if (r15.n == 0) goto LeftAsc_test_0;
    r8.n = 2;
    r9.n = 0;
    r10 = *(vl[0].ptr);
    r11.n = 0;
    r12.ptr = r10.ptr + r11.n;
    r13 = *(r12.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r8;
    param[next_param++] = r9;
    (*(r13.f))();
    r14 = r0;
    r15 = r14;
    r15.n = r15.n + r16.n;
    if (r15.n == 0) goto LeftAsc_test_1;
    r18 = r7;
    if (r17.n == 0) goto LeftAsc_test_2;
LeftAsc_test_1:
    r18 = r14;
    if (r17.n == 0) goto LeftAsc_test_2;
LeftAsc_test_0:
    r18 = r7;
    
LeftAsc_test_2:
    r26 = r18;
    r27.n = -1;
    r28.n = 0;
    r26.n = r26.n + r27.n;
    if (r26.n == 0) goto LeftAsc_test_3;
    r19.n = 3;
    r20.n = 0;
    r21 = *(vl[0].ptr);
    r22.n = 0;
    r23.ptr = r21.ptr + r22.n;
    r24 = *(r23.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r19;
    param[next_param++] = r20;
    (*(r24.f))();
    r25 = r0;
    r26 = r25;
    r26.n = r26.n + r27.n;
    if (r26.n == 0) goto LeftAsc_test_4;
    r29 = r18;
    if (r28.n == 0) goto LeftAsc_test_5;
LeftAsc_test_4:
    r29 = r25;
    if (r28.n == 0) goto LeftAsc_test_5;
LeftAsc_test_3:
    r29 = r18;
    
LeftAsc_test_5:
    if (r29.n == 0) goto LeftAsc_test_6;
    vl[1].n = 1;
    goto LeftAsc_test_7;
LeftAsc_test_6:
    vl[1].n = 0;
LeftAsc_test_7:
    r0 = vl[1];
    return;
}

void ShortCircut_condition() {
    word vl[3];
    int p;
    for(p = 0; p <= 2 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
ShortCircut_condition:
    printf("%d\n", vl[1]);
    r0 = vl[2];
    return;
}

void ShortCircut_test() {
    word vl[2];
    word r29;
    word r28;
    word r27;
    word r26;
    word r25;
    word r24;
    word r23;
    word r22;
    word r21;
    word r20;
    word r19;
    word r18;
    word r17;
    word r16;
    word r15;
    word r14;
    word r13;
    word r12;
    word r11;
    word r10;
    word r9;
    word r8;
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= 1 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
ShortCircut_test:
    r1.n = 1;
    r2.n = 1;
    r3 = *(vl[0].ptr);
    r4.n = 0;
    r5.ptr = r3.ptr + r4.n;
    r6 = *(r5.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r1;
    param[next_param++] = r2;
    (*(r6.f))();
    r7 = r0;
    r15 = r7;
    r16.n = -1;
    r17.n = 0;
    r15.n = r15.n + r16.n;
    if (r15.n == 0) goto ShortCircut_test_0;
    r8.n = 2;
    r9.n = 0;
    r10 = *(vl[0].ptr);
    r11.n = 0;
    r12.ptr = r10.ptr + r11.n;
    r13 = *(r12.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r8;
    param[next_param++] = r9;
    (*(r13.f))();
    r14 = r0;
    r15 = r14;
    r15.n = r15.n + r16.n;
    if (r15.n == 0) goto ShortCircut_test_1;
    r18 = r7;
    if (r17.n == 0) goto ShortCircut_test_2;
ShortCircut_test_1:
    r18 = r14;
    if (r17.n == 0) goto ShortCircut_test_2;
ShortCircut_test_0:
    r18 = r7;
    
ShortCircut_test_2:
    r26 = r18;
    r27.n = -1;
    r28.n = 0;
    r26.n = r26.n + r27.n;
    if (r26.n == 0) goto ShortCircut_test_3;
    r19.n = 3;
    r20.n = 0;
    r21 = *(vl[0].ptr);
    r22.n = 0;
    r23.ptr = r21.ptr + r22.n;
    r24 = *(r23.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r19;
    param[next_param++] = r20;
    (*(r24.f))();
    r25 = r0;
    r26 = r25;
    r26.n = r26.n + r27.n;
    if (r26.n == 0) goto ShortCircut_test_4;
    r29 = r18;
    if (r28.n == 0) goto ShortCircut_test_5;
ShortCircut_test_4:
    r29 = r25;
    if (r28.n == 0) goto ShortCircut_test_5;
ShortCircut_test_3:
    r29 = r18;
    
ShortCircut_test_5:
    if (r29.n == 0) goto ShortCircut_test_6;
    vl[1].n = 1;
    goto ShortCircut_test_7;
ShortCircut_test_6:
    vl[1].n = 0;
ShortCircut_test_7:
    r0 = vl[1];
    return;
}

void Precedence_condition() {
    word vl[3];
    int p;
    for(p = 0; p <= 2 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
Precedence_condition:
    printf("%d\n", vl[1]);
    r0 = vl[2];
    return;
}

void Precedence_test() {
    word vl[2];
    word r37;
    word r36;
    word r35;
    word r34;
    word r33;
    word r32;
    word r31;
    word r30;
    word r29;
    word r28;
    word r27;
    word r26;
    word r25;
    word r24;
    word r23;
    word r22;
    word r21;
    word r20;
    word r19;
    word r18;
    word r17;
    word r16;
    word r15;
    word r14;
    word r13;
    word r12;
    word r11;
    word r10;
    word r9;
    word r8;
    word r7;
    word r6;
    word r5;
    word r4;
    word r3;
    word r2;
    word r1;
    int p;
    for(p = 0; p <= 1 && p < 12; p++) {
        vl[p] = param[p];
    }
    next_param = 0;
Precedence_test:
    r1.n = 1;
    r2.n = 0;
    r3 = *(vl[0].ptr);
    r4.n = 0;
    r5.ptr = r3.ptr + r4.n;
    r6 = *(r5.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r1;
    param[next_param++] = r2;
    (*(r6.f))();
    r7 = r0;
    r23 = r7;
    r24.n = -1;
    r25.n = 0;
    r23.n = r23.n + r24.n;
    if (r23.n == 0) goto Precedence_test_1;
    r8.n = 2;
    r9.n = 0;
    r10 = *(vl[0].ptr);
    r11.n = 0;
    r12.ptr = r10.ptr + r11.n;
    r13 = *(r12.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r8;
    param[next_param++] = r9;
    (*(r13.f))();
    r14 = r0;
    r22 = r14;
    if (r22.n == 0) goto Precedence_test_0;
    r15.n = 3;
    r16.n = 0;
    r17 = *(vl[0].ptr);
    r18.n = 0;
    r19.ptr = r17.ptr + r18.n;
    r20 = *(r19.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r15;
    param[next_param++] = r16;
    (*(r20.f))();
    r21 = r0;
    r22 = r21;
Precedence_test_0:
    r23 = r22;
    r23.n = r23.n + r24.n;
    if (r23.n == 0) goto Precedence_test_2;
    r26 = r7;
    if (r25.n == 0) goto Precedence_test_3;
Precedence_test_2:
    r26 = r22;
    if (r25.n == 0) goto Precedence_test_3;
Precedence_test_1:
    r26 = r7;
    
Precedence_test_3:
    r34 = r26;
    r35.n = -1;
    r36.n = 0;
    r34.n = r34.n + r35.n;
    if (r34.n == 0) goto Precedence_test_4;
    r27.n = 4;
    r28.n = 1;
    r29 = *(vl[0].ptr);
    r30.n = 0;
    r31.ptr = r29.ptr + r30.n;
    r32 = *(r31.ptr);
    param[next_param++] = vl[0];
    param[next_param++] = r27;
    param[next_param++] = r28;
    (*(r32.f))();
    r33 = r0;
    r34 = r33;
    r34.n = r34.n + r35.n;
    if (r34.n == 0) goto Precedence_test_5;
    r37 = r26;
    if (r36.n == 0) goto Precedence_test_6;
Precedence_test_5:
    r37 = r33;
    if (r36.n == 0) goto Precedence_test_6;
Precedence_test_4:
    r37 = r26;
    
Precedence_test_6:
    if (r37.n == 0) goto Precedence_test_7;
    vl[1].n = 1;
    goto Precedence_test_8;
Precedence_test_7:
    vl[1].n = 0;
Precedence_test_8:
    r0 = vl[1];
    return;
}

