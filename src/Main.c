#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

clock_t tp1;

void Start(){
    tp1 = clock();
}

float TimeElapsed(){
    clock_t tp2 = clock();
	float w->ElapsedTime = (float)(tp2-tp1)/CLOCKS_PER_SEC;
    return w->ElapsedTime;
}

int sqrtInt32(long long a){
    int max = 1000;
    long long  num = 1;
    for(int i = 0;i<max;i++){
        long long  z = num;
        num = (num + (a / num)) >> 1;
        if(num==z) break;
    }
    return num;
}

float sqrtFloat32(float a){
    float max = 1000;
    float num = 1.0f;
    for(int i = 0;i<max;i++){
        num = (num + (a / num)) * 0.5f;
    }
    return num;
}

int main(){
    Start();
    printf("Number: %f\n",sqrtf(100000000000));
    printf("w->ElapsedTime: %f\n",TimeElapsed());

    Start();
    printf("Number: %f\n",sqrtFloat32(100000000000));
    printf("w->ElapsedTime: %f\n",TimeElapsed());

    Start();
    printf("Number: %f\n",(float)(sqrtInt32(100000000000)));
    printf("w->ElapsedTime: %f\n",TimeElapsed());

    return 0;
}
