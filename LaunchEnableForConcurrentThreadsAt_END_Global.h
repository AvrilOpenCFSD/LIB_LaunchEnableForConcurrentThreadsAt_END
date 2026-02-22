#pragma once

namespace OpenAvrilLIB
{
    class launchEnableForConcurrentThreadsAt_END_Global
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        launchEnableForConcurrentThreadsAt_END_Global();

// destructor.
        ~launchEnableForConcurrentThreadsAt_END_Global();

// public.
    // get.
        bool get_flag_core_ACTIVE();
        bool get_flag_core_IDLE();
        int8_t get_number_Implemented_Threads();
    // set.

    private:
// private.
        void create_flag_core_ACTIVE();
        void create_flag_core_IDLE();
        void create_number_Implemented_Threads();
    // get.
    // set.
        void set_flag_core_ACTIVE(bool value);
        void set_flag_core_IDLE(bool value);
        void set_number_Implemented_Threads(int8_t coreId);
    };
}
