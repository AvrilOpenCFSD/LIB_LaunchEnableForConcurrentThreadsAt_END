#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATEND_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllimport)
#endif

namespace OpenAvrilLIB
{
	class LAUNCHENABLEFORCONCURRENTTHREADSATEND_API Library_launchEnableForConcurrentThreadsAt_END {
	public:
		Library_launchEnableForConcurrentThreadsAt_END();
		static void* create_Program();

		static void Request_Wait_launch(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId);
		static void Thread_End(class launchEnableForConcurrentThreadsAt_END_Framework*, int8_t concurrent_CoreId);

		static int8_t get_coreId_To_launch(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static bool get_Flag_Active(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static bool get_Flag_ConcurrentCoreState(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId);
		static bool get_Flag_Idle(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static bool get_State_launchBit(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static void set_state_ConcurrentCore(class launchEnableForConcurrentThreadsAt_END_Framework* obj, int8_t concurrent_CoreId, bool value);

	private:
		static class launchEnableForConcurrentThreadsAt_END_Framework* get_ptr_Framework();
		static void set_ptr_Framework(class launchEnableForConcurrentThreadsAt_END_Framework* framework);
	};
}