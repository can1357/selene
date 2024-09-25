#pragma once
#include <sdkgen/support_library.hpp>
#include "kwait_chain_t.hpp"
#include "owner_entry_t.hpp"

#include "magic/eresource_t.start.hpp"
namespace nt
{
    struct kevent_t;

    // [struct _ERESOURCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eresource_t                                                                 
    {                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                             
        _m00 nt::list_entry_t                              system_resources_list;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemResourcesList
        _m01 struct nt::owner_entry_t*                     owner_table;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .OwnerTable
        _m02 int16_t                                       active_count;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ActiveCount
        _m03 uint16_t                                      flag;                         //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .Flag
        _m04 uint8_t                                       reserved_low_flags;           //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .ReservedLowFlags
        _m05 uint8_t                                       waiter_priority;              //{ +0x001b    +0x001b    +0x001b    +0x001b    +0x001b    } | .WaiterPriority
        _m06 sdk::variant<void*, struct nt::kwait_chain_t> shared_waiters;               //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SharedWaiters
        _m07 sdk::variant<void*, struct nt::kevent_t*>     exclusive_waiters;            //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ExclusiveWaiters
        _m08 struct nt::owner_entry_t                      owner_entry;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .OwnerEntry
        _m09 uint32_t                                      active_entries;               //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ActiveEntries
        _m10 uint32_t                                      contention_count;             //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .ContentionCount
        _m11 uint32_t                                      number_of_shared_waiters;     //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .NumberOfSharedWaiters
        _m12 uint32_t                                      number_of_exclusive_waiters;  //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .NumberOfExclusiveWaiters
        _m13 void*                                         address;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Address
        _m14 uint64_t                                      creator_back_trace_index;     //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .CreatorBackTraceIndex
        _m15 uint64_t                                      spin_lock;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .SpinLock
                                                                                       
        SDK_NONVOL_PROPERTIES( "_ERESOURCE.$", 0x68, true, 0x1c4c5c0eba861ad2 );                            
        SDK_FIXED_SIZE( eresource_t, 0x68 );                                           
    };                                                                                 
};
#include "magic/eresource_t.end.hpp"
SDK_VERIFY( struct nt::eresource_t, 0x68 );
