#include "pch.h"

OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* ptr_Global = NULL;
OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* ptr_LaunchConcurrency_Control = NULL;

OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT()
{
    Create_LaunchEnableForConcurrentThreadsAt_CLIENT_Global();
}

OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::~LaunchEnableForConcurrentThreadsAt_CLIENT()
{
    delete ptr_LaunchConcurrency_Control;
}

void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Initialise_Control()
{
    Create_Control_Of_LaunchConcurrency();
}

void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Thread_Start(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, unsigned char concurrent_CoreId)
{
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->LaunchEnable_Request(obj, concurrent_CoreId);
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->LaunchQue_Update(obj, obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_number_Implemented_Cores());
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->LaunchEnable_SortQue(obj, obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_number_Implemented_Cores());
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->LaunchEnable_Activate(obj);
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->LaunchQue_Update(obj, obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_number_Implemented_Cores());
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->LaunchEnable_SortQue(obj, obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_number_Implemented_Cores());
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_flag_praisingLaunch(false);
}

void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Thread_End(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, unsigned char concurrent_CoreId)
{
    while (obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_flag_praisingLaunch() == true)
    {

    }
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_flag_praisingLaunch(true);
    obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_concurrentCycle_Try_CoreId_Index(obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_new_concurrentCycle_Try_CoreId_Index());
    if (obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_concurrentCycle_Try_CoreId_Index() == concurrent_CoreId)
    {
        obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_state_ConcurrentCore(concurrent_CoreId, obj->Get_LaunchEnableForConcurrentThread()->Get_LaunchConcurrency_Global()->Get_flag_core_IDLE());
    }
    else
    {
        obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_new_concurrentCycle_Try_CoreId_Index(obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_concurrentCycle_Try_CoreId_Index() + 1);

        if (obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
        {
            obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_new_concurrentCycle_Try_CoreId_Index(0);
        }
        obj->Get_LaunchEnableForConcurrentThread()->Get_Control_Of_LaunchConcurrency()->Set_flag_praisingLaunch(false);
        obj->Get_LaunchEnableForConcurrentThread()->Thread_End(obj, concurrent_CoreId);
    }
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Create_LaunchEnableForConcurrentThreadsAt_CLIENT_Global()
{
    Set_LaunchConcurrency_Global(new class OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Global());
    while (Get__LaunchConcurrency_Global() == NULL) {}
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Create_Control_Of_LaunchConcurrency()
{
    Set_Control_Of_LaunchConcurrency(new class OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Control(Get__LaunchConcurrency_Global(), Get__LaunchConcurrency_Global()->Get_number_Implemented_Cores()));
    while (Get__Control_Of_LaunchConcurrency() == NULL) { /* wait untill created */ }
}
OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Get_LaunchConcurrency_Global()
{
    return ptr_Global;
}
OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Get_Control_Of_LaunchConcurrency()
{
    return ptr_LaunchConcurrency_Control;
}
OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Get__LaunchConcurrency_Global()
{
    return ptr_Global;
}
OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Get__Control_Of_LaunchConcurrency()
{
    return ptr_LaunchConcurrency_Control;
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Set_LaunchConcurrency_Global(LaunchEnableForConcurrentThreadsAt_CLIENT_Global* global)
{
    ptr_Global = global;
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT::Set_Control_Of_LaunchConcurrency(LaunchEnableForConcurrentThreadsAt_CLIENT_Control* control)
{
    ptr_LaunchConcurrency_Control = control;
}