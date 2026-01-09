#include "Core/HLE/sceKernelThread.h"

extern "C" {
void delay(int ms){
	int us = ms * 1000;
	SceUID curThread = __KernelGetCurThread();
	__KernelScheduleWakeup(curThread, us);
	__KernelWaitCurThread(WAITTYPE_DELAY, curThread, 0, 0, false, "thread delayed");
}
}
