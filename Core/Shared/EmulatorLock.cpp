#include "pch.h"
#include "Shared/EmulatorLock.h"
#include "Shared/Emulator.h"
#include "Shared/DebuggerRequest.h"
#include "Debugger/DebugBreakHelper.h"

EmulatorLock::EmulatorLock(Emulator* emu, bool allowDebuggerLock)
{
	_emu = emu;
	_emu->Lock();
}

EmulatorLock::~EmulatorLock()
{
	_emu->Unlock();
}
