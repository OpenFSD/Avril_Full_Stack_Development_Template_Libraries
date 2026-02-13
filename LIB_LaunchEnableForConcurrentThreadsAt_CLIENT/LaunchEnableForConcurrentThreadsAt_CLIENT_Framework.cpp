#include "pch.h"

class OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT* ptr_LaunchConcurrency = NULL;

OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
{
	Create_LaunchEnableForConcurrentThreadsAt();
}

OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework::~LaunchEnableForConcurrentThreadsAt_CLIENT_Framework()
{

}
OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT* OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework::Get_LaunchEnableForConcurrentThread()
{
	return ptr_LaunchConcurrency;
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework::Create_LaunchEnableForConcurrentThreadsAt()
{
	Set_LaunchEnableForConcurrentThreadsAt(new class OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT());
	while (Get__LaunchEnableForConcurrentThreadsAt() == NULL) { /* wait untill created */ }
	Get__LaunchEnableForConcurrentThreadsAt()->Initialise_Control();
}
OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT* OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework::Get__LaunchEnableForConcurrentThreadsAt()
{
	return ptr_LaunchConcurrency;
}
void OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework::Set_LaunchEnableForConcurrentThreadsAt(OpenAvril::LaunchEnableForConcurrentThreadsAt_CLIENT* concurrentQue)
{
	ptr_LaunchConcurrency = concurrentQue;
}