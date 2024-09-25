#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_lock_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_LOCK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_lock_information_t             
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 void*    address;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint16_t type;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m02 uint16_t creator_back_trace_index;     //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .CreatorBackTraceIndex
        _m03 void*    owning_thread;                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .OwningThread
        _m04 int32_t  lock_count;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LockCount
        _m05 uint32_t contention_count;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ContentionCount
        _m06 uint32_t entry_count;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .EntryCount
        _m07 int32_t  recursion_count;              //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .RecursionCount
        _m08 uint32_t number_of_waiting_shared;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfWaitingShared
        _m09 uint32_t number_of_waiting_exclusive;  //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .NumberOfWaitingExclusive
                                                  
        SDK_NONVOL_PROPERTIES( "_RTL_PROCESS_LOCK_INFORMATION.$", 0x30, true, 0x2d50b8e7a04b1c0f );                            
        SDK_FIXED_SIZE( process_lock_information_t, 0x30 );                            
    };                                            
};
#include "magic/process_lock_information_t.end.hpp"
SDK_VERIFY( struct rtl::process_lock_information_t, 0x30 );
