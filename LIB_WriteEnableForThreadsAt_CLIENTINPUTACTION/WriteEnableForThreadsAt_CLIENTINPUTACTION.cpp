#include "pch.h"

#include <cstddef>

class OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* ptr_global = NULL;
class OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* ptr_WriteEnable_Control = NULL;

OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION()
{
    Set_global(new class OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global());
    while (Get_global() == NULL) {}
}

OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::~WriteEnableForThreadsAt_CLIENTINPUTACTION()
{
    delete ptr_global;
    delete ptr_WriteEnable_Control;
}

void OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::Initialise_Control()
{
    Set_writeEnable_Control(new class OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control(ptr_global));
    while (Get_writeEnable_Control() == NULL) {}
}

void OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::Write_End(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Get_writeEnable_Control()->Set_flag_WriteState(coreId, obj->Get_writeEnable()->Get_global()->Get_flag_write_IDLE());
    obj->Get_writeEnable()->Get_writeEnable_Control()->Set_new_writeCycle_Try_CoreId_Index(obj->Get_writeEnable()->Get_writeEnable_Control()->Get_count_CoreId_WriteActive(coreId) + 1);
    if(obj->Get_writeEnable()->Get_writeEnable_Control()->Get_new_writeCycle_Try_CoreId_Index() == 2)
    {
        obj->Get_writeEnable()->Get_writeEnable_Control()->Set_new_writeCycle_Try_CoreId_Index(0);
    }
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteQue_Update(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_SortQue(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->Set_flag_praisingWrite(false);
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::Write_Start(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_Request(obj, coreId);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteQue_Update(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_SortQue(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_Activate(obj, coreId);
}
OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::Get_global()
{
    return ptr_global;
}
OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::Get_writeEnable_Control()
{
    return ptr_WriteEnable_Control;
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::Set_global(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* global)
{
    ptr_global = global;
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION::Set_writeEnable_Control(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* writeEnableControl)
{
    ptr_WriteEnable_Control = writeEnableControl;
}