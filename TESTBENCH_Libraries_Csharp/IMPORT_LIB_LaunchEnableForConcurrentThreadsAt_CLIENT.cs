/*
*  Managed C# wrapper for AVRIL Server library by Jasper Assembly Pty Ltd.
*  Copyright (c) 2022 - 2025 Brenton James Maddocks BEng(CompSys).  
*  All rights reserved.
*/
using System;
using System.Runtime.InteropServices;
using System.Security;

namespace OpenAvril
{
    [SuppressUnmanagedCodeSecurity]
    public static class Library_For_LaunchEnableForConcurrentThreadsAt_CLIENT
	{
        [DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Initialise_LaunchEnableForConcurrentThreadsAt@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SAPAXXZ")]
        public static extern IntPtr Initialise_LaunchEnableForConcurrentThreadsAt();

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Request_Wait_Launch@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SAXPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
		public static extern void Request_Wait_Launch(IntPtr obj, byte concurrent_CoreId);

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Thread_End@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SAXPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
		public static extern void Thread_End(IntPtr obj, byte concurrent_CoreId);

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Get_coreId_To_Launch@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SADPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
		public static extern byte Get_coreId_To_Launch(IntPtr obj);

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Get_Flag_Active@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
		public static extern bool Get_Flag_Active(IntPtr obj);

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Get_Flag_ConcurrentCoreState@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
		public static extern bool Get_Flag_ConcurrentCoreState(IntPtr obj, byte concurrent_CoreId);

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Get_Flag_Idle@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
		public static extern bool Get_Flag_Idle(IntPtr obj);

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Get_State_LaunchBit@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
		public static extern bool Get_State_LaunchBit(IntPtr obj);

		[DllImport("LIBLaunchEnableForConcurrentThreadsAtCLIENT.dll", EntryPoint = "?Set_state_ConcurrentCore@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvril@@SAXPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E_N@Z")]
		public static extern void Set_State_ConcurrentCoreState(IntPtr obj, byte concurrent_CoreId, bool value);
	}
}