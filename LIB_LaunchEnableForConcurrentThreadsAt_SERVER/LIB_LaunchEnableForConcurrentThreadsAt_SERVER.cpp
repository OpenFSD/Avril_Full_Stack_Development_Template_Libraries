// LIB_LaunchEnableForConcurrentThreadsAt_SERVER.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"

class OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework = NULL;

// This is an example of an exported variable
LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API int nLIBLaunchEnableForConcurrentThreadsAtSERVER=0;

// This is an example of an exported function.
LIBLAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API int fnLIBLaunchEnableForConcurrentThreadsAtSERVER(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER()
{
    return;
}

// This is an example of an exported function.
void* OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Initialise_LaunchEnableForConcurrentThreadsAt()
{
    Set_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(new class OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
    while (Get_LaunchEnableForConcurrentThreadsAt_SERVER_Framework() == NULL) {}
    return (void*)Get_LaunchEnableForConcurrentThreadsAt_SERVER_Framework();
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Request_Wait_Launch(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId)
{
    obj->Get_LaunchEnableForConcurrentThread()->Thread_Start(obj, concurrent_CoreId);
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Thread_End(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId)
{
    obj->Get_LaunchEnableForConcurrentThread()->Thread_End(obj, concurrent_CoreId);
}

__int8 OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_coreId_To_Launch(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_que_CoreToLaunch(0);
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_Active(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_flag_core_ACTIVE();
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_ConcurrentCoreState(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_state_ConcurrentCore(concurrent_CoreId);
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_Flag_Idle(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_flag_core_IDLE();
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_State_LaunchBit(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_state_ConcurrentCore(0);
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Set_state_ConcurrentCore(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, unsigned char concurrent_CoreId, bool value)
{
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_state_ConcurrentCore(concurrent_CoreId, value);
}

OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Get_LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
{
    return ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework;
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtSERVER::Set_LaunchEnableForConcurrentThreadsAt_SERVER_Framework(class OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* framework)
{
    ptr_LaunchEnableForConcurrentThreadsAt_SERVER_Framework = framework;
}
