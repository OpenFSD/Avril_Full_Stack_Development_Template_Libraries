#include "pch.h"

class OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* ptr_global = NULL;
class OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* ptr_WriteEnable_Control = NULL;

OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE()
{
    Set_global(new class OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global());
    while (Get_global() == NULL) {}
}

OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE()
{
    delete ptr_global;
    delete ptr_WriteEnable_Control;
}

void OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Initialise_Control()
{
    Set_writeEnable_Control(new class OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control(ptr_global));
    while (Get_writeEnable_Control() == NULL) {}
}

void OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Write_End(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Get_writeEnable_Control()->Set_flag_WriteState(coreId, obj->Get_writeEnable()->Get_global()->Get_flag_write_IDLE());
    obj->Get_writeEnable()->Get_writeEnable_Control()->Set_new_writeCycle_Try_CoreId_Index(obj->Get_writeEnable()->Get_writeEnable_Control()->Get_count_CoreId_WriteActive(coreId) + 1);
    if(obj->Get_writeEnable()->Get_writeEnable_Control()->Get_new_writeCycle_Try_CoreId_Index() == 3)
    {
        obj->Get_writeEnable()->Get_writeEnable_Control()->Set_new_writeCycle_Try_CoreId_Index(0);
    }
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteQue_Update(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_SortQue(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->Set_flag_praisingWrite(false);
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Write_Start(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_Request(obj, coreId);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteQue_Update(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_SortQue(obj);
    obj->Get_writeEnable()->Get_writeEnable_Control()->WriteEnable_Activate(obj, coreId);
}
OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Get_global()
{
    return ptr_global;
}
OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Get_writeEnable_Control()
{
    return ptr_WriteEnable_Control;
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Set_global(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* global)
{
    ptr_global = global;
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Set_writeEnable_Control(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* writeEnableControl)
{
    ptr_WriteEnable_Control = writeEnableControl;
}