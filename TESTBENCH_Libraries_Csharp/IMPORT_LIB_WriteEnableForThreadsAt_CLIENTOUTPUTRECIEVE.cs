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
    public static class Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE
    {
        [DllImport("LIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.dll", EntryPoint = "?Initialise_WriteEnable@CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvril@@SAPAXXZ")]
        public static extern IntPtr Initialise_WriteEnable();

        [DllImport("LIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.dll", EntryPoint = "?Write_End@CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvril@@SAXPAVWriteEnableForThreadsAt_STACK_Framework@2@E@Z")]
        public static extern void Write_End(IntPtr obj, byte coreId);

        [DllImport("LIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE.dll", EntryPoint = "?Write_Start@CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvril@@SAXPAVWriteEnableForThreadsAt_STACK_Framework@2@E@Z")]
        public static extern void Write_Start(IntPtr obj, byte coreId);
    }
}