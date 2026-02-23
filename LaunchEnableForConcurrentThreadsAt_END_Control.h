#pragma once

namespace OpenAvrilLIB
{
    class launchEnableForConcurrentThreadsAt_END_Control
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        launchEnableForConcurrentThreadsAt_END_Control();

// destructor.
        virtual ~launchEnableForConcurrentThreadsAt_END_Control();

// public.
        void initialise_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value);
        void initialise_flag_praisinglaunch(bool* newINITIALISED_Flagbit);
        void initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value);
        void initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value);
        void initialise_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, class launchEnableForConcurrentThreadsAt_END_Global* ptr_Global);
        void initialise_new_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value);
        void initialise_list_for_Que_Of_CoreTolaunch();
        void launchEnable_Activate(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
        void launchEnable_Request(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId);
        void launchEnable_SortQue(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads);
        void launchQue_Update(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads);
    // get.
        uint8_t get_concurrentCycle_Try_CoreId_Index();
        bool get_flag_praisinglaunch();
        uint32_t get_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID);
        uint32_t get_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID);
        bool get_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID);
        uint8_t get_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrenct_threadID);
        uint8_t get_Length_Of_list_Of_launchActive_Count_For_ThreadID();
        uint8_t get_new_concurrentCycle_Try_CoreId_Index();
        std::list<uint32_t>* get_ptr_list_Of_launchActive_Count_For_ThreadID();
        std::list<uint32_t>* get_ptr_list_Of_launchIdle_Count_For_ThreadID();
        std::list<bool>* get_ptr_list_Of_STATE_For_ConcurrentCore();
        std::list<uint8_t>* get_ptr_list_for_Que_Of_CoreTolaunch();
    // set.
        void set_concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        void set_flag_praisinglaunch(bool newFlag);
        void set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        void set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        void set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState);
        void set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID);
        void set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);

    private:
// private.
        void create_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        void create_flag_praisinglaunch(bool* newDEFAULT_Flagbit);
        void create_list_Of_launchActive_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        void create_list_Of_launchIdle_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        void create_list_Of_STATE_For_ConcurrentCore(bool* newDEFAULT_FlagBit);
        void create_new_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        void create_list_for_Que_Of_CoreTolaunch();
        void create_ptr_list_Of_launchActive_Count_For_ThreadID();
        void create_ptr_list_Of_launchIdle_Count_For_ThreadID();
        void create_ptr_list_Of_STATE_For_ConcurrentCore();
        void create_ptr_list_for_Que_Of_CoreTolaunch();
        void dynamicStagger(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t coreId);
        void launchEnable_ShiftQueValues(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId_A, uint8_t concurrent_CoreId_B);
    // get.
    // set.
        void set_ptr_list_Of_launchActive_Count_For_ThreadID(std::list<uint32_t>* newPtr);
        void set_ptr_list_Of_launchIdle_Count_For_ThreadID(std::list<uint32_t>* newPtr);
        void set_ptr_list_Of_STATE_For_ConcurrentCore(std::list<bool>* newPtr);
        void set_ptr_list_for_Que_Of_CoreTolaunch(std::list<uint8_t>* newPtr);
    };
}