#include "pch.h"

// classes.

// registers.
    uint8_t _concurrentCycle_Try_CoreId_Index = NULL;
    bool _flag_praisinglaunch = NULL;
    std::list<uint32_t> _list_Of_launchActive_Count_For_ThreadID = { NULL };
    std::list<uint32_t> _list_Of_launchIdle_Count_For_ThreadID = { NULL };
    std::list<bool> _list_Of_STATE_For_ConcurrentCore = { NULL };
    uint8_t _new_concurrentCycle_Try_CoreId_Index = NULL;
    std::list<uint8_t> _list_for_Que_Of_CoreTolaunch = { NULL };

// pointers.
    std::list<uint32_t>* _ptr_list_Of_launchActive_Count_For_ThreadID = NULL;
    std::list<uint32_t>* _ptr_list_Of_launchIdle_Count_For_ThreadID = NULL;
    std::list<bool>* _ptr_list_Of_STATE_For_ConcurrentCore = NULL;
    std::list<uint8_t>* _ptr_list_for_Que_Of_CoreTolaunch = NULL;

// constructor.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::launchEnableForConcurrentThreadsAt_END_Control()
    {
        bool* newDEFAULT_Flagbit1 = new bool(false);
        create_flag_praisinglaunch(newDEFAULT_Flagbit1);
        delete newDEFAULT_Flagbit1;
        uint32_t* newDEFAULT_uint32_t = new uint32_t(UINT32_MAX);
        create_list_Of_launchActive_Count_For_ThreadID(newDEFAULT_uint32_t);
        create_list_Of_launchIdle_Count_For_ThreadID(newDEFAULT_uint32_t);
        delete newDEFAULT_uint32_t;
        create_list_for_Que_Of_CoreTolaunch();
        uint8_t* newDEFAULT_int8_t = new uint8_t(INT8_MAX);
        create_concurrentCycle_Try_CoreId_Index(newDEFAULT_int8_t);
        create_new_concurrentCycle_Try_CoreId_Index(newDEFAULT_int8_t);
        delete newDEFAULT_int8_t;
    }

// destructor.
    OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::~launchEnableForConcurrentThreadsAt_END_Control()
    {
        delete _ptr_list_Of_launchActive_Count_For_ThreadID;
        delete _ptr_list_Of_launchIdle_Count_For_ThreadID;
        delete _ptr_list_Of_STATE_For_ConcurrentCore;
        delete _ptr_list_for_Que_Of_CoreTolaunch;
    }

// public.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::initialise_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value)
    {
        set_concurrentCycle_Try_CoreId_Index(*newINITIALISED_Value);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::initialise_flag_praisinglaunch(bool* newINITIALISED_Flagbit)
    {
        set_flag_praisinglaunch(*newINITIALISED_Flagbit);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value)
    {

        auto temp = get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = *newINITIALISED_Value;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value)
    {
        auto temp = get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = *newINITIALISED_Value;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::initialise_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, launchEnableForConcurrentThreadsAt_END_Global* ptr_Global)
    {
        set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrenct_threadID, ptr_Global->get_flag_core_IDLE());
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::initialise_new_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value)
    {
        set_new_concurrentCycle_Try_CoreId_Index(*newINITIALISED_Value);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::initialise_list_for_Que_Of_CoreTolaunch()
    {
        std::list<uint8_t> _list_for_Que_Of_CoreTolaunch = { uint8_t(0), uint8_t(1), uint8_t(2), uint8_t(3) };//NUMBER OF THREADS
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::launchEnable_Activate(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(0), obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE());
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::launchEnable_Request(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId)
    {
        while (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(get_Item_On_list_for_Que_Of_CoreTolaunch(0)) != obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())
        {

        }
        while (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_flag_praisinglaunch() == true)
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->dynamicStagger(obj, concurrent_CoreId);
        }
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(get_new_concurrentCycle_Try_CoreId_Index());
        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == concurrent_CoreId)
        {
            //exit
        }
        else
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(get_concurrentCycle_Try_CoreId_Index() + 1);
            if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURRENT  THREADS
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
            }
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Request(obj, concurrent_CoreId);
        }
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::launchEnable_SortQue(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads)
    {
        for (uint8_t index_A = 0; index_A < number_Implemented_Threads - 2; index_A++)
        {
            for (uint8_t index_B = index_A + 1; index_B < number_Implemented_Threads - 1; index_B++)
            {
                if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(get_Item_On_list_for_Que_Of_CoreTolaunch(index_A)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE())
                {
                    if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())
                    {
                        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE())
                    {
                        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(index_A) > obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(index_B))
                        {
                            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(index_A)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())

                    if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(index_B)) == obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE())
                    {
                        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index_A) < obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index_B))
                        {
                            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
            }
        }
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::launchQue_Update(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads)
    {
        for (uint8_t index = 0; index < number_Implemented_Threads; index++)
        {
            switch (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(index))
            {
            case false:
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(index, 0);
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(index, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(index) + 1);
                break;
            }
            case true:
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(index, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(index) + 1);
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(index, 0);
                break;
            }
            }
        }
    }
    // get.
    uint8_t OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_concurrentCycle_Try_CoreId_Index()
    {
        return _concurrentCycle_Try_CoreId_Index;
    }
    bool OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_flag_praisinglaunch()
    {
        return _flag_praisinglaunch;
    }
    uint32_t OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint32_t OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    bool OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID)
    {
        auto temp = get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        return *temp;
    }
    uint8_t OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrenct_threadID)
    {
        auto temp = get_ptr_list_for_Que_Of_CoreTolaunch()->begin();
        std::advance(temp, concurrenct_threadID);
        return *temp;
    }
    uint8_t OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_Length_Of_list_Of_launchActive_Count_For_ThreadID()
    {
        return sizeof(_list_Of_launchActive_Count_For_ThreadID);
    }
    uint8_t OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_new_concurrentCycle_Try_CoreId_Index()
    {
        return _new_concurrentCycle_Try_CoreId_Index;
    }
    std::list<uint32_t>* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_ptr_list_Of_launchActive_Count_For_ThreadID()
    {
        return _ptr_list_Of_launchActive_Count_For_ThreadID;
    }
    std::list<uint32_t>* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_ptr_list_Of_launchIdle_Count_For_ThreadID()
    {
        return _ptr_list_Of_launchIdle_Count_For_ThreadID;
    }
    std::list<bool>* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_ptr_list_Of_STATE_For_ConcurrentCore()
    {
        return _ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t>* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::get_ptr_list_for_Que_Of_CoreTolaunch()
    {
        return _ptr_list_for_Que_Of_CoreTolaunch;
    }
    // set.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_concurrentCycle_Try_CoreId_Index(uint8_t newValue)
    {
        _concurrentCycle_Try_CoreId_Index = newValue;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_flag_praisinglaunch(bool newFlag)
    {
        _flag_praisinglaunch = newFlag;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = get_ptr_list_Of_launchActive_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue)
    {
        auto temp = get_ptr_list_Of_launchIdle_Count_For_ThreadID()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newValue;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState)
    {
        auto temp = get_ptr_list_Of_STATE_For_ConcurrentCore()->begin();
        std::advance(temp, concurrenct_threadID);
        *temp = newState;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID)
    {
        auto temp = get_ptr_list_for_Que_Of_CoreTolaunch()->begin();
        std::advance(temp, slot);
        *temp = concurrenct_threadID;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue)
    {
        _new_concurrentCycle_Try_CoreId_Index = newValue;
    }

// private.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value)
    {
        set_concurrentCycle_Try_CoreId_Index(*newDEFAULT_Value);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_flag_praisinglaunch(bool* newDEFAULT_Flagbit)
    {
        set_flag_praisinglaunch(*newDEFAULT_Flagbit);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_list_Of_launchActive_Count_For_ThreadID(uint32_t* newDEFAULT_Value)
    {
        std::list<uint32_t> _list_Of_launchActive_Count_For_ThreadID = { *newDEFAULT_Value, *newDEFAULT_Value, *newDEFAULT_Value, *newDEFAULT_Value };//NUMBER OF THREADS
        create_ptr_list_Of_launchActive_Count_For_ThreadID();
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_list_Of_launchIdle_Count_For_ThreadID(uint32_t* newDEFAULT_Value)
    {
        std::list<uint32_t> _list_Of_launchIdle_Count_For_ThreadID = { *newDEFAULT_Value, *newDEFAULT_Value, *newDEFAULT_Value, *newDEFAULT_Value };//NUMBER OF THREADS
        create_ptr_list_Of_launchIdle_Count_For_ThreadID();

    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_list_Of_STATE_For_ConcurrentCore(bool* newDEFAULT_FlagBit)
    {
        std::list<bool> _list_Of_STATE_For_ConcurrentCore = { *newDEFAULT_FlagBit, *newDEFAULT_FlagBit, *newDEFAULT_FlagBit };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_STATE_For_ConcurrentCore();
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_new_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value)
    {
        set_new_concurrentCycle_Try_CoreId_Index(*newDEFAULT_Value);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_list_for_Que_Of_CoreTolaunch()
    {
        std::list<uint8_t> _list_for_Que_Of_CoreTolaunch = { uint8_t(INT8_MAX), uint8_t(INT8_MAX), uint8_t(INT8_MAX), uint8_t(INT8_MAX) };//NUMBER OF THREADS
        create_ptr_list_for_Que_Of_CoreTolaunch();
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_ptr_list_Of_launchActive_Count_For_ThreadID()
    {
        set_ptr_list_Of_launchActive_Count_For_ThreadID(&_list_Of_launchActive_Count_For_ThreadID);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_ptr_list_Of_launchIdle_Count_For_ThreadID()
    {
        set_ptr_list_Of_launchIdle_Count_For_ThreadID(&_list_Of_launchIdle_Count_For_ThreadID);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_ptr_list_Of_STATE_For_ConcurrentCore()
    {
        set_ptr_list_Of_STATE_For_ConcurrentCore(&_list_Of_STATE_For_ConcurrentCore);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::create_ptr_list_for_Que_Of_CoreTolaunch()
    {
        set_ptr_list_for_Que_Of_CoreTolaunch(&_list_for_Que_Of_CoreTolaunch);
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::dynamicStagger(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId)
    {
        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == concurrent_CoreId)
        {
            //exit early
        }
        else
        {
            int ptr_count = int(0);
            while (ptr_count < 20)//todo time till flag change
            {

                ptr_count = ptr_count + 1;
            }
        }
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::launchEnable_ShiftQueValues(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId_A, uint8_t concurrent_CoreId_B)
    {
        int temp_Int;
        temp_Int = obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrent_CoreId_A);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrent_CoreId_A, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrent_CoreId_B));
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchActive_Count_For_ThreadID(concurrent_CoreId_B, temp_Int);

        temp_Int = obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrent_CoreId_A);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrent_CoreId_A, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrent_CoreId_B));
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_launchIdle_Count_For_ThreadID(concurrent_CoreId_B, temp_Int);

        uint8_t temp_UnnsignedChar;
        temp_UnnsignedChar = obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(concurrent_CoreId_A);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_for_Que_Of_CoreTolaunch(concurrent_CoreId_A, obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(concurrent_CoreId_B));
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_for_Que_Of_CoreTolaunch(concurrent_CoreId_B, temp_UnnsignedChar);
    }
    // get.
    // set.
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_ptr_list_Of_launchActive_Count_For_ThreadID(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_launchActive_Count_For_ThreadID = newPtr;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_ptr_list_Of_launchIdle_Count_For_ThreadID(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_launchIdle_Count_For_ThreadID = newPtr;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_ptr_list_Of_STATE_For_ConcurrentCore(std::list<bool>* newPtr)
    {
        _ptr_list_Of_STATE_For_ConcurrentCore = newPtr;
    }
    void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Control::set_ptr_list_for_Que_Of_CoreTolaunch(std::list<uint8_t>* newPtr)
    {
        _ptr_list_for_Que_Of_CoreTolaunch = newPtr;
    }