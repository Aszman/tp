//
// Generated By: dol2asm
// Translation Unit: JASProbe
//

#include "JSystem/JAudio2/JASProbe.h"
#include "dolphin/os.h"

//
// Types:
//

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//
/* 80290D74-80290DC4 28B6B4 0050+00 1/1 0/0 0/0 .text            start__8JASProbeFPCc */
void JASProbe::start(char const* name) {
	volatile BOOL interrupts = OSDisableInterrupts();
	mName          = name;
	mStartTime     = OSGetTime();
	OSRestoreInterrupts(interrupts);
}

/* ############################################################################################## */

/* 80290DC4-80290EE4 28B704 0120+00 1/1 0/0 0/0 .text            stop__8JASProbeFv */
void JASProbe::stop() {
	volatile int interrupts = OSDisableInterrupts();
	_08            = (u32)OSGetTime() - mStartTime;
	_08 /= OS_TIMER_CLOCK / 59.94f;
	if (_10 < _08 && 100 < _1A8) {
		_10 = _08;
	}
	_0C             = _0C * 0.96f + _08 * 0.04f;
	u32 resultIndex = _1A8 % 100;
	_14 -= _18[resultIndex];
	_18[resultIndex] = _08;
	_14 += _08;
	_1A8++;
	OSRestoreInterrupts(interrupts);
}

/* ############################################################################################## */
/* 80431620-80431660 05E340 0040+00 2/2 0/0 0/0 .bss             sProbeTable__8JASProbe */
JASProbe* JASProbe::sProbeTable[16];

/* 80290EE4-80290F24 28B824 0040+00 0/0 7/7 0/0 .text            start__8JASProbeFlPCc */
void JASProbe::start(s32 index, char const* name) {
    if (index < 16) {
        if (sProbeTable[index] != NULL) {
            sProbeTable[index]->start(name);
        }
    }
}

/* 80290F24-80290F64 28B864 0040+00 0/0 6/6 0/0 .text            stop__8JASProbeFl */
void JASProbe::stop(s32 index) {
    if (index < 16) {
        if (sProbeTable[index] != NULL) {
            sProbeTable[index]->stop();
        }
    }
}