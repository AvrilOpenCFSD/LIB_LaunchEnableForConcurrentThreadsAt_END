#include "pch.h"

// classes.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global* _ptr_Global = NULL;
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control* _ptr_launchConcurrency_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::launchEnableForConcurrentThreadsAt_END()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::~launchEnableForConcurrentThreadsAt_END()
    {
        delete _ptr_Global;
        delete _ptr_launchConcurrency_Control;
    }

// public.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::initialise_Control()
    {
        create_ptr_launchConcurrency_Control();
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::thread_Start(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId)
    {
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->launchEnable_Request(obj, concurrent_CoreId);
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_launchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_launchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->launchEnable_Activate(obj);
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_launchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_launchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_flag_praisinglaunch(false);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::thread_End(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId)
    {
        while (obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_flag_praisinglaunch() == true)
        {

        }
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_flag_praisinglaunch(true);
        obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_new_concurrentCycle_Try_CoreId_Index());
        if (obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == concurrent_CoreId)
        {
            obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId, obj->get_ptr_launchConcurrency()->get_ptr_Global()->get_flag_core_IDLE());
        }
        else
        {
            obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() + 1);

            if (obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
            {
                obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
            }
            obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->set_flag_praisinglaunch(false);
            obj->get_ptr_launchConcurrency()->thread_End(obj, concurrent_CoreId);
        }
    }
    // get.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::get_ptr_launchConcurrency_Control()
    {
        return _ptr_launchConcurrency_Control;
    }

    // set.

// private.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::create_ptr_Global()
    {
        set_ptr_Global(new class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global());
        while (get_ptr_Global() == NULL) {}
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::create_ptr_launchConcurrency_Control()
    {
        set_ptr_launchConcurrency_Control(new class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control());
        while (get_ptr_launchConcurrency_Control() == NULL) {}
    }
    // get.
    // set.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::set_ptr_Global(launchEnableForConcurrentThreadsAt_END_Global* newClass)
    {
        _ptr_Global = newClass;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END::set_ptr_launchConcurrency_Control(launchEnableForConcurrentThreadsAt_END_Control* newClass)
    {
        _ptr_launchConcurrency_Control = newClass;
    }