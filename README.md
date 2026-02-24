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
	class LAUNCHENABLEFORCONCURRENTTHREADSATSERVER_API CLIBLaunchEnableForConcurrentThreadsAtSERVER {
// classes.

// registers.

// pointer.

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
		static void request_Wait_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId);
		static void thread_End(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework*, uint8_t concurrent_CoreId);
		// get.
		static uint8_t get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId);
		static bool get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static bool get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj);
		static void set_state_ConcurrentCore(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId, bool value);
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		// get.
		static class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* get_ptr_Framework();
		// set.
		static void set_ptr_Framework(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* framework);
	};
}
````
#### LIB_LaunchEnableForConcurrentThreadsAt_SERVER.cpp
````
#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"

// classes.
    class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = NULL;

// registers.

// pointer.

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
        set_ptr_Framework(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
        while (get_ptr_Framework() == NULL) {}
        get_ptr_Framework()->initialise(get_ptr_Framework());
        return (void*)get_ptr_Framework();
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::request_Wait_launch(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId)
    {
        obj->get_ptr_LaunchConcurrency()->thread_Start(obj, concurrent_CoreId);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId)
    {
        obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrent_CoreId);
    }
        // get.
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Active(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Idle(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_State_launchBit(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(0);
    }
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        // get.
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::set_state_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId, bool value)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId, value);
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_ptr_Framework()
    {
        return ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::set_ptr_Framework(class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* framework)
    {
        ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = framework;
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
    public static class Library_For_LaunchEnableForConcurrentThreadsAt_CLIENT
    {
        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern IntPtr generate_Program();

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern void request_Wait_Launch(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern void thread_End(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern byte get_coreId_To_Launch(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern bool get_Flag_Active(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern bool get_Flag_ConcurrentCoreState(IntPtr obj, byte concurrent_CoreId);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern bool get_Flag_Idle(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern bool get_State_LaunchBit(IntPtr obj);

        [DllImport("LIB_LaunchEnableForConcurrentThreadsAt_SERVER.dll", EntryPoint = "")]
        public static extern void get_State_ConcurrentCoreState(IntPtr obj, byte concurrent_CoreId, bool value);
    }
}
````

## TestBench(s) in C#.
 - https://github.com/OpenAvril/TESTBENCH_OpenAvril
