#include "pch.h"

// classes.
	class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END* _ptr_launchConcurrency = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::launchEnableForConcurrentThreadsAt_END_Framework()
	{
		create_ptr_launchConcurrency();
	}

// destructor.
	OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::~launchEnableForConcurrentThreadsAt_END_Framework()
	{

	}

// public.
	void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::initialise(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework* obj)
	{
		obj->get_ptr_launchConcurrency()->initialise_Control();
		obj->get_ptr_launchConcurrency()->get_ptr_launchConcurrency_Control()->initialise(obj);
	}
	// get.
	OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END* OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::get_ptr_launchConcurrency()
	{
		return _ptr_launchConcurrency;
	}
	// set.

// private.
	void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::create_ptr_launchConcurrency()
	{
		set_ptr_launchConcurrency(new class OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END());
		while (get_ptr_launchConcurrency() == NULL) { /* wait untill created */ }
	}
	// get.
	// set.
	void OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END_Framework::set_ptr_launchConcurrency(OpenAvrilLIB::launchEnableForConcurrentThreadsAt_END* concurrentQue)
	{
		_ptr_launchConcurrency = concurrentQue;
	}