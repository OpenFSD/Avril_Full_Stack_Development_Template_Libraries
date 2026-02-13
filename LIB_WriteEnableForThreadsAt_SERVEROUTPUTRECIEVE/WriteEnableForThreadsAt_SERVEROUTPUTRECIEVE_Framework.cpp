#include "pch.h"

class OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* ptr_WriteEnable = NULL;

OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework()
{
	Set_writeEnable(new class OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE());
	while (Get_writeEnable() == NULL) { /* wait untill created */ }
	Get_writeEnable()->Initialise_Control();
}
OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework()
{

}
OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::Get_writeEnable()
{
	return ptr_WriteEnable;
}
void OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::Set_writeEnable(OpenAvril::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* writeEnable)
{
	ptr_WriteEnable = writeEnable;
}