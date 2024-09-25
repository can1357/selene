#pragma once
#include <sdkgen/support_library.hpp>
#include "single_list_entry_t.hpp"

#include "magic/kdpc_t.start.hpp"
namespace nt
{
    struct kdpc_t;

    // [struct _KDPC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kdpc_t                                                
    {                                                            
        using pkdeferred_routine_t = sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*;                     
                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 uint32_t                       target_info_as_ulong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetInfoAsUlong
        _m01 uint8_t                        type;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m02 uint8_t                        importance;            //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Importance
        _m03 volatile uint16_t              number;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Number
        _m04 struct nt::single_list_entry_t dpc_list_entry;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcListEntry
        _m05 uint64_t                       processor_history;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessorHistory
        _m06 pkdeferred_routine_t           deferred_routine;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DeferredRoutine
        _m07 void*                          deferred_context;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DeferredContext
        _m08 void*                          system_argument1;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SystemArgument1
        _m09 void*                          system_argument2;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SystemArgument2
        _m10 void*                          dpc_data;              //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .DpcData
                                                                 
        SDK_NONVOL_PROPERTIES( "_KDPC.$", 0x40, true, 0x86cfc57236bf6cd0 );                     
        SDK_FIXED_SIZE( kdpc_t, 0x40 );                          
    };                                                           
};
#include "magic/kdpc_t.end.hpp"
SDK_VERIFY( struct nt::kdpc_t, 0x40 );
