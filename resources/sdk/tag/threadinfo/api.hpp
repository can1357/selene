#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tag::threadinfo
{
    // [AssignAttachQueue@tagTHREADINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xcc740, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) assign_attach_queue;
    
    // [AssignQueue@tagTHREADINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xcf0f0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) assign_queue;
    
    // [AssignQueueWorker@tagTHREADINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15488, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) assign_queue_worker;
    
    // [Initialize@tagTHREADINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1505c, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [RemoveThreadFromListWorker@tagTHREADINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb51e0, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) remove_thread_from_list_worker;
    
    // [RemoveThreadFromQSharingLists@tagTHREADINFO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xb5178, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) remove_thread_from_q_sharing_lists;
};
#include "magic/api.end.hpp"
