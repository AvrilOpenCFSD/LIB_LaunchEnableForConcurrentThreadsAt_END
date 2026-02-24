#include "pch.h"

// classes.

// registers.
    bool _flag_core_ACTIVE = NULL;
    bool _flag_core_IDLE = NULL;
    uint8_t _number_Implemented_Threads = NULL;
// pointers.
    bool* _ptr_flag_core_ACTIVE = NULL;
    bool* _ptr_flag_core_IDLE = NULL;
    uint8_t* _ptr_number_Implemented_Threads = NULL;

// constructor.
    OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::LaunchEnableForConcurrentThreadsAt_END_Global()
    {
        _ptr_flag_core_ACTIVE = &_flag_core_ACTIVE;
        _ptr_flag_core_IDLE = &_flag_core_IDLE;
        _ptr_number_Implemented_Threads = &_number_Implemented_Threads;
        bool* newDEFAULT_Flag = new bool(false);
        create_flag_core_ACTIVE(newDEFAULT_Flag);
        create_flag_core_IDLE(newDEFAULT_Flag);
        delete newDEFAULT_Flag;
        uint8_t* newDEFAULT_Value = new uint8_t(INT8_MAX);
        create_number_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }

// destructor.
    OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::~LaunchEnableForConcurrentThreadsAt_END_Global()
    {
        delete _ptr_flag_core_ACTIVE;
        delete _ptr_flag_core_IDLE;
        delete _ptr_number_Implemented_Threads;
    }

// public.
    // dynamic.
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag)
    {
        set_flag_core_ACTIVE(*newINISIALISED_Flag);
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::initialise_flag_core_IDLE(bool* newINISIALISED_Flag)
    {
        set_flag_core_IDLE(*newINISIALISED_Flag);
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value)
    {
        set_number_Implemented_Threads(*newINISIALISED_Value);
    }
        // get.
    bool OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_flag_core_ACTIVE()
    {
        return _flag_core_ACTIVE;
    }
    bool OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_flag_core_IDLE()
    {
        return _flag_core_IDLE;
    }
    uint8_t OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_number_Implemented_Threads()
    {
        return _number_Implemented_Threads;
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::create_flag_core_ACTIVE(bool* newDEFAULT_Flag)
    {
        set_flag_core_ACTIVE(*newDEFAULT_Flag);
        while (get_ptr_flag_core_ACTIVE() == NULL) {}
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::create_flag_core_IDLE(bool* newDEFAULT_Flag)
    {
        set_flag_core_IDLE(*newDEFAULT_Flag);
        while (get_ptr_flag_core_IDLE() == NULL) {}
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::create_number_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        set_number_Implemented_Threads(*newDEFAULT_Value);
        while (get_ptr_number_Implemented_Threads() == NULL) {}
    }
        // get.
    bool* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_ptr_flag_core_ACTIVE()
    {
        return _ptr_flag_core_ACTIVE;
    }
    bool* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_ptr_flag_core_IDLE()
    {
        return _ptr_flag_core_IDLE;
    }
    uint8_t* OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::get_ptr_number_Implemented_Threads()
    {
        return _ptr_number_Implemented_Threads;
    }
        // set.
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::set_flag_core_ACTIVE(bool flag_core_ACTIVE)
    {
        _flag_core_ACTIVE = flag_core_ACTIVE;
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::set_flag_core_IDLE(bool flag_core_IDLE)
    {
        _flag_core_IDLE = flag_core_IDLE;
    }
    void OpenAvrilLIB::LaunchEnableForConcurrentThreadsAt_END_Global::set_number_Implemented_Threads(uint8_t number_Implemented_Threads)
    {
        _number_Implemented_Threads = number_Implemented_Threads;
    }
