#include "pch.h"


class OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION* ptr_WriteEnable = NULL;

OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework()
{
	Set_writeEnable(new class OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION());
	while (Get_writeEnable() == NULL) { /* wait untill created */ }
	Get_writeEnable()->Initialise_Control();
}
OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework::~WriteEnableForThreadsAt_SERVERINPUTACTION_Framework()
{

}
OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION* OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework::Get_writeEnable()
{
	return ptr_WriteEnable;
}
void OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework::Set_writeEnable(OpenAvril::WriteEnableForThreadsAt_SERVERINPUTACTION* writeEnable)
{
	ptr_WriteEnable = writeEnable;
}