#include "Core/HLE/sceKernelThread.h"

extern "C" {
void delay(int ms){
	int us = ms * 1000;
	sceKernelDelayThread(us);
}
}
