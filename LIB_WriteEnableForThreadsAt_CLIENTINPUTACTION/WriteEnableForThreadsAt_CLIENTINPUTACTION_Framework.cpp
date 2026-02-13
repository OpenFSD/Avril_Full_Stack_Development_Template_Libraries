#include "pch.h"
#include <cstddef>

class OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION* ptr_WriteEnable = NULL;

OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework()
{
	Set_writeEnable(new class OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION());
	while (Get_writeEnable() == NULL) { /* wait untill created */ }
	Get_writeEnable()->Initialise_Control();
}
OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework::~WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework()
{

}
OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION* OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework::Get_writeEnable()
{
	return ptr_WriteEnable;
}
void OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework::Set_writeEnable(OpenAvril::WriteEnableForThreadsAt_CLIENTINPUTACTION* writeEnable)
{
	ptr_WriteEnable = writeEnable;
}