#pragma once

namespace OpenAvrilLIB
{
    class launchEnableForConcurrentThreadsAt_END
    {
        // classes.

// registers.

// pointers.

    public:
// constructor.
        launchEnableForConcurrentThreadsAt_END();

// destructor.
        virtual ~launchEnableForConcurrentThreadsAt_END();

// public.
        void initialise_Control();
        void thread_Start(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId);
        void thread_End(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId);
    // get.
        class launchEnableForConcurrentThreadsAt_END_Global* get_ptr_Global();
        class launchEnableForConcurrentThreadsAt_END_Control* get_ptr_launchConcurrency_Control();
    // set.

    private:
// private.
        void create_ptr_Global();
        void create_ptr_launchConcurrency_Control();
    // get.
    // set.
        void set_ptr_Global(class launchEnableForConcurrentThreadsAt_END_Global* newClass);
        void set_ptr_launchConcurrency_Control(class launchEnableForConcurrentThreadsAt_END_Control* newClass);
    };
}