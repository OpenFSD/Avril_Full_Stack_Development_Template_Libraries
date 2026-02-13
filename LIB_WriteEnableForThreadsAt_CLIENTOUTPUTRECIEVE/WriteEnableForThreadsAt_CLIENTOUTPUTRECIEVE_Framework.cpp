#include "pch.h"

class OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE* ptr_WriteEnable = NULL;

OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework()
{
	Set_writeEnable(new class OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE());
	while (Get_writeEnable() == NULL) { /* wait untill created */ }
	Get_writeEnable()->Initialise_Control();
}
OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework::~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework()
{

}
OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE* OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework::Get_writeEnable()
{
	return ptr_WriteEnable;
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework::Set_writeEnable(OpenAvril::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE* writeEnable)
{
	ptr_WriteEnable = writeEnable;
}