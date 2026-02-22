#include "pch.h"

// classes.

// registers.
    bool _flag_core_ACTIVE = NULL;
    bool _flag_core_IDLE = NULL;
    int8_t _number_Implemented_Threads = NULL;
// pointers.

// constructor.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::launchEnableForConcurrentThreadsAt_END_Global()
    {
        create_flag_core_ACTIVE();
        create_flag_core_IDLE();
        create_number_Implemented_Threads();
    }

// destructor.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::~launchEnableForConcurrentThreadsAt_END_Global()
    {

    }

// public.
    // get.
    bool OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::get_flag_core_ACTIVE()
    {
        return _flag_core_ACTIVE;
    }
    bool OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::get_flag_core_IDLE()
    {
        return _flag_core_IDLE;
    }
    int8_t OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::get_number_Implemented_Threads()
    {
        return _number_Implemented_Threads;
    }
    // set.

// private.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::create_flag_core_ACTIVE()
    {
        set_flag_core_ACTIVE(true);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::create_flag_core_IDLE()
    {
        set_flag_core_IDLE(false);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::create_number_Implemented_Threads()
    {
        set_number_Implemented_Threads(int8_t(4));//NUMBER OF THREADS
    }
    // get.
    // set.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::set_flag_core_ACTIVE(bool flag_core_ACTIVE)
    {
        _flag_core_ACTIVE = flag_core_ACTIVE;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::set_flag_core_IDLE(bool flag_core_IDLE)
    {
        _flag_core_IDLE = flag_core_IDLE;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Global::set_number_Implemented_Threads(int8_t number_Implemented_Threads)
    {
        _number_Implemented_Threads = number_Implemented_Threads;
    }