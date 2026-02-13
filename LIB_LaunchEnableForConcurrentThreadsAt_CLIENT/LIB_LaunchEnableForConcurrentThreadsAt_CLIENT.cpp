// LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.h"

class OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework = NULL;

// This is an example of an exported variable
LIBLAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API int nLIBLaunchEnableForConcurrentThreadsAtCLIENT=0;

// This is an example of an exported function.
LIBLAUNCHENABLEFORCONCURRENTTHREADSATCLIENT_API int fnLIBLaunchEnableForConcurrentThreadsAtCLIENT(void)
{
    return 0;
}
void* OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Initialise_LaunchEnableForConcurrentThreadsAt()
{
    Set_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(new class OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
    while (Get_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework() == NULL) {}
    return (void*)Get_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Request_Wait_Launch(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, unsigned char concurrent_CoreId)
{
    obj->Get_LaunchEnableForConcurrentThread()->Thread_Start(obj, concurrent_CoreId);
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Thread_End(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, unsigned char concurrent_CoreId)
{
    obj->Get_LaunchEnableForConcurrentThread()->Thread_End(obj, concurrent_CoreId);
}

__int8 OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Get_coreId_To_Launch(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_que_CoreToLaunch(0);
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Get_Flag_Active(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_flag_core_ACTIVE();
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Get_Flag_ConcurrentCoreState(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, unsigned char concurrent_CoreId)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_state_ConcurrentCore(concurrent_CoreId);
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Get_Flag_Idle(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_flag_core_IDLE();
}

bool OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Get_State_LaunchBit(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_state_ConcurrentCore(0);
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Set_state_ConcurrentCore(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, unsigned char concurrent_CoreId, bool value)
{
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_state_ConcurrentCore(concurrent_CoreId, value);
}

OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Get_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
{
    return ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework;
}

void OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::Set_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework(class OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* framework)
{
    ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework = framework;
}

// This is the constructor of a class that has been exported.
OpenAvril::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT()
{
    return;
}
