#pragma once
#include <sdkgen/support_library.hpp>
#include "kwait_chain_t.hpp"

#include "magic/fast_eresource_internal_t.start.hpp"
namespace nt
{
    // [struct _FAST_ERESOURCE_INTERNAL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fast_eresource_internal_t                              
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                        
        _m00 nt::list_entry_t         system_resources_list;        //{ +0x0000    +0x0000    +0x0000    } | .SystemResourcesList
        _m01 void*                    reserved_pointer;             //{ +0x0010    +0x0010    +0x0010    } | .ReservedPointer
        _m02 int16_t                  active_count;                 //{ +0x0018    +0x0018    +0x0018    } | .ActiveCount
        _m03 uint16_t                 flag;                         //{ +0x001a    +0x001a    +0x001a    } | .Flag
        _m04 struct nt::kwait_chain_t shared_waiters;               //{ +0x0020    +0x0020    +0x0020    } | .SharedWaiters
        _m05 struct nt::kwait_chain_t exclusive_waiters;            //{ +0x0028    +0x0028    +0x0028    } | .ExclusiveWaiters
        _m06 nt::list_entry_t         owner_entry_list_head;        //{ +0x0030    +0x0030    +0x0030    } | .OwnerEntryListHead
        _m07 uint32_t                 active_entries;               //{ +0x0040    +0x0040    +0x0040    } | .ActiveEntries
        _m08 uint32_t                 contention_count;             //{ +0x0044    +0x0044    +0x0044    } | .ContentionCount
        _m09 uint32_t                 number_of_shared_waiters;     //{ +0x0048    +0x0048    +0x0048    } | .NumberOfSharedWaiters
        _m10 uint32_t                 number_of_exclusive_waiters;  //{ +0x004c    +0x004c    +0x004c    } | .NumberOfExclusiveWaiters
        _m11 void*                    reserved_win64_only_pointer;  //{ +0x0050    +0x0050    +0x0050    } | .ReservedWin64OnlyPointer
        _m12 void*                    address;                      //{ +0x0058    +0x0058    +0x0058    } | .Address
        _m13 uint64_t                 creator_back_trace_index;     //{ +0x0058    +0x0058    +0x0058    } | .CreatorBackTraceIndex
        _m14 uint64_t                 spin_lock;                    //{ +0x0060    +0x0060    +0x0060    } | .SpinLock
                                                                  
        SDK_MAGIC_PROPERTIES( "_FAST_ERESOURCE_INTERNAL.$", 0x68, true, 0x491129192d707f2c );                            
        SDK_FIXED_SIZE( fast_eresource_internal_t, 0x68 );                            
    };                                                            
};
#include "magic/fast_eresource_internal_t.end.hpp"
SDK_VERIFY( struct nt::fast_eresource_internal_t, 0x68 );
