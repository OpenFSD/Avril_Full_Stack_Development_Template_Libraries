// LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.cpp : Defines the exported functions for the DLL.
//
#include "pch.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.h"


OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* ptr_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework = NULL;

// This is an example of an exported variable
LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API int nLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE=0;

// This is an example of an exported function.
LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_API int fnLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE(void)
{
    return 0;
}
void* OpenAvril::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::Initialise_WriteEnable()
{
    Set_writeEnable(new class OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
    while (Get_Framework_WriteEnable() == NULL) {}
    return (void*)Get_Framework_WriteEnable();
    
}
void OpenAvril::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::Write_End(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_End(obj, coreId);
}
void OpenAvril::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::Write_Start(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, unsigned char coreId)
{
    obj->Get_writeEnable()->Write_Start(obj, coreId);
}
OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvril::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::Get_Framework_WriteEnable()
{
    return ptr_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework;
}
void OpenAvril::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::Set_writeEnable(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* writeEnable)
{
    ptr_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework = writeEnable;
}
// This is the constructor of a class that has been exported.
OpenAvril::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE()
{
    return;
}
