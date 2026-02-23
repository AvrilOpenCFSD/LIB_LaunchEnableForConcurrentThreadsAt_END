#include "pch.h"

// classes.
	class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END* _ptr_LaunchConcurrency = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::launchEnableForConcurrentThreadsAt_END_Framework()
	{
		create_ptr_LaunchConcurrency();
	}

// destructor.
	OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::~launchEnableForConcurrentThreadsAt_END_Framework()
	{

	}

// public.
	void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::initialise(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj)
	{
		uint8_t* newINISIALISED_Value = new uint8_t(4);
		obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->initialise_number_Implemented_Threads(newINISIALISED_Value);//NUMBER OF THREADS
		delete newINISIALISED_Value;
		bool* newINISIALISED_Flag = new bool(true);
		obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->initialise_flag_core_ACTIVE(newINISIALISED_Flag);
		*newINISIALISED_Flag = false;
		obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->initialise_flag_core_IDLE(newINISIALISED_Flag);
		delete newINISIALISED_Flag;
		obj->get_ptr_LaunchConcurrency()->initialise_Control();
		bool* newINITIALISED_Flagbit1 = new bool(false);
		obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_flag_praisinglaunch(newINITIALISED_Flagbit1);
		delete newINITIALISED_Flagbit1;
		uint32_t* newINITIALISED_uint32_t = new uint32_t(UINT32_MAX);
		for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < (obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads() - 1); concurrenctThreadID++)
		{
			obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrenctThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrenctThreadID, newINITIALISED_uint32_t);
		}
		delete newINITIALISED_uint32_t;
		obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_list_for_Que_Of_CoreTolaunch();
		uint8_t* newINITIALISED_int8_t = new uint8_t(UINT8_MAX);
		obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
		obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->initialise_new_concurrentCycle_Try_CoreId_Index(newINITIALISED_int8_t);
		delete newINITIALISED_int8_t;
	}
	// get.
	OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::get_ptr_LaunchConcurrency()
	{
		return _ptr_LaunchConcurrency;
	}
	// set.

// private.
	void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::create_ptr_LaunchConcurrency()
	{
		set_ptr_LaunchConcurrency(new class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END());
		while (get_ptr_LaunchConcurrency() == NULL) { /* wait untill created */ }
	}
	// get.
	// set.
	void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::set_ptr_LaunchConcurrency(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END* concurrentQue)
	{
		_ptr_LaunchConcurrency = concurrentQue;
	}