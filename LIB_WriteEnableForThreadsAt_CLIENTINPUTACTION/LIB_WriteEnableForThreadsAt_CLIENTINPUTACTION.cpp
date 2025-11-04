#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.h"

Avril_FSD::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* ptr_WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework = NULL;

Avril_FSD::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION()
{

}
void* Avril_FSD::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Initialise_WriteEnable()
{
    Set_writeEnable(new class Avril_FSD::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
    while (Get_Framework_WriteEnable() == NULL) {}
    return (void*)Get_Framework_WriteEnable();
}
void Avril_FSD::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Write_End(Avril_FSD::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_End(obj, coreId);
}
void Avril_FSD::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Write_Start(Avril_FSD::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_Start(obj, coreId);
}
Avril_FSD::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* Avril_FSD::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Get_Framework_WriteEnable()
{
    return ptr_WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework;
}
void Avril_FSD::Library_WriteEnableForThreadsAt_CLIENTINPUTACTION::Set_writeEnable(Avril_FSD::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* writeEnable)
{
    ptr_WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework = writeEnable;
}