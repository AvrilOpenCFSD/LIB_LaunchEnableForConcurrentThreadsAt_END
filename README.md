# OpenAvrilLIB
## .DLL Library Template - Request, Wait, Launch Next Free Concurrent Thread.

### Similar Rewritten Repository.
 - https://github.com/cameron314/concurrentqueue
   
### Using C++

### Using Windows 11 Home
Edition: Windows 11 Home OEM System Builder

Version: 24H2

### Microsoft Visual Studio Professional 2022 (64-bit)
 - Version 17.13.4

## Using
### C++
#### LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h
````
#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER
{
	class LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API CLIBLaunchEnableForConcurrentThreadsAtSERVER 
	{
	public:
// constructor.
		CLIBLaunchEnableForConcurrentThreadsAtSERVER();

// destructor.

// public.
	// dynamic.
		// get.
		// set.
	// static.
		static void* create_Program();
		static void request_Wait_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID);
		static void thread_End(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework*, uint8_t concurrentThreadID);
		// get.
		static uint8_t get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID);
		static bool get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		// set.
		static void set_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID, bool value);

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		static void create_ptr_Framework();
		// get.
		static class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* newClass);
	// pointers.
		// classes.
		
		// registers.
	};
}
````
#### LIB_LaunchEnableForConcurrentThreadsAt_SERVER.cpp
````
#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"

// pointer.
    // classes.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = NULL;
    // registers.

// constructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER()
    {
    }

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::create_Program()
    {
        stat_set_ptr_Framework(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
        stat_get_ptr_Framework()->initialise(stat_get_ptr_Framework());
        return stat_get_ptr_Framework();
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::request_Wait_launch(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_Start(obj, concurrentThreadID);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrentThreadID);
    }
        // get.
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0));
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::set_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID, bool value)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, value);
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::create_ptr_Framework()
    {
        stat_set_ptr_Framework(new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
        while (stat_get_ptr_Framework() == NULL) { }
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_get_ptr_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_set_ptr_Framework(LaunchEnableForConcurrentThreadsAt_SERVER_Framework* newClass)
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = newClass;
    }
````

### C#
#### IMPORT_LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.cs
````
﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class LaunchEnableForConcurrentThreadsAtCLIENT
    {
        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?create_Program@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAPAXXZ")]
        public static extern IntPtr generate_Program();

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?request_Wait_launch@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAXPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
        public static extern void request_Wait_Launch(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?thread_End@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAXPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
        public static extern void thread_End(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_coreId_To_launch@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SAEPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern byte get_coreId_To_Launch(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_Flag_Active@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern bool get_Flag_Active(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_Flag_ConcurrentCoreState@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@E@Z")]
        public static extern bool get_Flag_ConcurrentCoreState(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_Flag_Idle@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern bool get_Flag_Idle(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.dll", EntryPoint = "?get_State_launchBit@CLIBLaunchEnableForConcurrentThreadsAtCLIENT@OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT@@SA_NPAVLaunchEnableForConcurrentThreadsAt_CLIENT_Framework@2@@Z")]
        public static extern bool get_State_LaunchBit(IntPtr obj);
    }
}
````

## TestBench(s) in C#.
 - https://github.com/OpenAvril/TESTBENCH_OpenAvril
