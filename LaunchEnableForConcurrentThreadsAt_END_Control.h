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
        void initialise(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
        void launchEnable_Activate(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
        void launchEnable_Request(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId);
        void launchEnable_SortQue(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t number_Implemented_Threads);
        void launchQue_Update(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t number_Implemented_Threads);
    // get.
        int8_t get_concurrentCycle_Try_CoreId_Index();
        bool get_flag_praisinglaunch();
        uint32_t get_Item_On_list_Of_launchActive_Count_For_ThreadID(int8_t threadID);
        uint32_t get_Item_On_list_Of_launchIdle_Count_For_ThreadID(int8_t threadID);
        bool get_Item_On_list_Of_STATE_For_ConcurrentCore(int8_t concurrenct_threadID);
        int8_t get_Item_On_list_for_Que_Of_CoreTolaunch(int8_t concurrenct_threadID);
        int8_t get_new_concurrentCycle_Try_CoreId_Index();
        std::list<uint32_t>* get_ptr_list_Of_launchActive_Count_For_ThreadID();
        std::list<uint32_t>* get_ptr_list_Of_launchIdle_Count_For_ThreadID();
        std::list<bool>* get_ptr_list_Of_STATE_For_ConcurrentCore();
        std::list<int8_t>* get_ptr_list_for_Que_Of_CoreTolaunch();
    // set.
        void set_concurrentCycle_Try_CoreId_Index(int8_t newValue);
        void set_flag_praisinglaunch(bool newFlag);
        void set_Item_On_list_Of_launchActive_Count_For_ThreadID(int8_t threadID, uint32_t newValue);
        void set_Item_On_list_Of_launchIdle_Count_For_ThreadID(int8_t threadID, uint32_t newValue);
        void set_Item_On_list_Of_STATE_For_ConcurrentCore(int8_t concurrenct_threadID, bool newState);
        void set_Item_On_list_for_Que_Of_CoreTolaunch(int8_t slot, int8_t concurrenct_threadID);
        void set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);

    private:
// private.
        void create_concurrentCycle_Try_CoreId_Index();
        void create_flag_praisinglaunch();
        void create_list_Of_launchActive_Count_For_ThreadID();
        void create_list_Of_launchIdle_Count_For_ThreadID();
        void create_list_Of_STATE_For_ConcurrentCore(class launchEnableForConcurrentThreadsAt_END_Global* ptr_Global);
        void create_new_concurrentCycle_Try_CoreId_Index();
        void create_list_for_Que_Of_CoreTolaunch();
        void create_ptr_list_Of_launchActive_Count_For_ThreadID();
        void create_ptr_list_Of_launchIdle_Count_For_ThreadID();
        void create_ptr_list_Of_STATE_For_ConcurrentCore();
        void create_ptr_list_for_Que_Of_CoreTolaunch();
        void dynamicStagger(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t coreId);
        void launchEnable_ShiftQueValues(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId_A, int8_t concurrent_CoreId_B);
    // get.
    // set.
        void set_ptr_list_Of_launchActive_Count_For_ThreadID(std::list<uint32_t>* newPtr);
        void set_ptr_list_Of_launchIdle_Count_For_ThreadID(std::list<uint32_t>* newPtr);
        void set_ptr_list_Of_STATE_For_ConcurrentCore(std::list<bool>* newPtr);
        void set_ptr_list_for_Que_Of_CoreTolaunch(std::list<int8_t>* newPtr);
    };
}