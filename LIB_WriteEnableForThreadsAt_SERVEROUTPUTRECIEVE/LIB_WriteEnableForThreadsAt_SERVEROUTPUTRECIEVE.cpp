#include "pch.h"
#include "LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"

OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* ptr_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework = NULL;

OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE()
{

}
void* OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Initialise_WriteEnable()
{
    Set_writeEnable(new class OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework());
    while (Get_Framework_WriteEnable() == NULL) {}
    return (void*)Get_Framework_WriteEnable();
}
void OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Write_End(OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_End(obj, coreId);
}
void OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Write_Start(OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_Start(obj, coreId);
}
OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Get_Framework_WriteEnable()
{
    return ptr_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework;
}
void OpenAvril::Library_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Set_writeEnable(OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* writeEnable)
{
    ptr_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework = writeEnable;
}