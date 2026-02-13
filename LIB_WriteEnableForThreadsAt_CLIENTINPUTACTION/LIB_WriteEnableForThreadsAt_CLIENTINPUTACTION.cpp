#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.h"

OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* ptr_WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework = NULL;

OpenAvril::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION()
{

}
void* OpenAvril::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Initialise_WriteEnable()
{
    Set_writeEnable(new class OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
    while (Get_Framework_WriteEnable() == NULL) {}
    return (void*)Get_Framework_WriteEnable();
}
void OpenAvril::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Write_End(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_End(obj, coreId);
}
void OpenAvril::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Write_Start(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_Start(obj, coreId);
}
OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvril::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Get_Framework_WriteEnable()
{
    return ptr_WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework;
}
void OpenAvril::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Set_writeEnable(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* writeEnable)
{
    ptr_WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework = writeEnable;
}