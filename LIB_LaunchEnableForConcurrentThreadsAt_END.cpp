// LIB_launchEnableForConcurrentThreadsAt_END.cpp : Defines the exported functions for the DLL.
#include "pch.h"
#include "framework.h"
#include "LIB_launchEnableForConcurrentThreadsAt_END.h"

class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* ptr_launchEnableForConcurrentThreadsAt_END_Framework = NULL;



OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::Library_launchEnableForConcurrentThreadsAt_END()
{
}

// This is an example of an exported function.
void* OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::create_Program()
{
    set_ptr_Framework(new class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework());
    while (get_ptr_Framework() == NULL) {}
    get_ptr_Framework()->initialise(get_ptr_Framework());
    return (void*)get_ptr_Framework();
}

void OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::Request_Wait_launch(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId)
{
    obj->get_ptr_launchConcurrency()->thread_Start(obj, concurrent_CoreId);
}

void OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::Thread_End(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId)
{
    obj->get_ptr_launchConcurrency()->thread_End(obj, concurrent_CoreId);
}

int8_t OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::get_coreId_To_launch(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
}

bool OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::get_Flag_Active(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_launchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
}

bool OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::get_Flag_ConcurrentCoreState(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId)
{
    return obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId);
}

bool OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::get_Flag_Idle(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_launchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
}

bool OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::get_State_launchBit(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj)
{
    return obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(0);
}

void OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::set_state_ConcurrentCore(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId, bool value)
{
    obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId, value);
}

OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::get_ptr_Framework()
{
    return ptr_launchEnableForConcurrentThreadsAt_END_Framework;
}

void OpenAvrilLIB::Library_launchEnableForConcurrentThreadsAt_END::set_ptr_Framework(class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* framework)
{
    ptr_launchEnableForConcurrentThreadsAt_END_Framework = framework;
}
