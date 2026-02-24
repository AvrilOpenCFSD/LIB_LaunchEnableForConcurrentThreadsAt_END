#pragma once

namespace OpenAvrilLIB
{
    class LaunchEnableForConcurrentThreadsAt_END_Global
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_END_Global();

// destructor.
        ~LaunchEnableForConcurrentThreadsAt_END_Global();

// public.
    // dynamic.
        void initialise_flag_core_ACTIVE(bool* newINISIALISED_Flag);
        void initialise_flag_core_IDLE(bool* newINISIALISED_Flag);
        void initialise_number_Implemented_Threads(uint8_t* newINISIALISED_Value);
        // get.
        bool get_flag_core_ACTIVE();
        bool get_flag_core_IDLE();
        uint8_t get_number_Implemented_Threads();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void create_flag_core_ACTIVE(bool* newDEFAULT_Flag);
        static void create_flag_core_IDLE(bool* newDEFAULT_Flag);
        static void create_number_Implemented_Threads(uint8_t* newDEFAULT_Value);
        // get.
        static bool* get_ptr_flag_core_ACTIVE();
        static bool* get_ptr_flag_core_IDLE();
        static uint8_t* get_ptr_number_Implemented_Threads();
        // set.
        static void set_flag_core_ACTIVE(bool value);
        static void set_flag_core_IDLE(bool value);
        static void set_number_Implemented_Threads(uint8_t coreId);

    };
}
