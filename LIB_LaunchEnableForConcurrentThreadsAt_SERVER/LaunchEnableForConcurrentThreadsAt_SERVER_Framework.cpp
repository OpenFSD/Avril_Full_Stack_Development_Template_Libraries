#include "pch.h"

class OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER* ptr_LaunchConcurrency = NULL;

OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework::LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
{
	Create_LaunchEnableForConcurrentThreadsAt();
}

OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework::~LaunchEnableForConcurrentThreadsAt_SERVER_Framework()
{

}
OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER* OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework::Get_LaunchEnableForConcurrentThread()
{
	return ptr_LaunchConcurrency;
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework::Create_LaunchEnableForConcurrentThreadsAt()
{
	Set_LaunchEnableForConcurrentThreadsAt(new class OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER());
	while (Get__LaunchEnableForConcurrentThreadsAt() == NULL) { /* wait untill created */ }
	Get__LaunchEnableForConcurrentThreadsAt()->Initialise_Control();
}
OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER* OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework::Get__LaunchEnableForConcurrentThreadsAt()
{
	return ptr_LaunchConcurrency;
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER_Framework::Set_LaunchEnableForConcurrentThreadsAt(OpenAvril::LaunchEnableForConcurrentThreadsAt_SERVER* concurrentQue)
{
	ptr_LaunchConcurrency = concurrentQue;
}