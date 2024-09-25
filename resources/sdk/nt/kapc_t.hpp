#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kapc_t.start.hpp"
namespace nt
{
    struct kapc_t;
    struct kthread_t;

    // [struct _KAPC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kapc_t                                                            
    {                                                                        
        using kernel_routine_t = sdk::function<void(struct nt::kapc_t*, sdk::function<void(void*, void*, void*)>**, void**, void**, void**)>*;                      
                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 uint8_t                                   type;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                   size;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::kthread_t*                     thread;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Thread
        _m03 nt::list_entry_t                          apc_list_entry;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ApcListEntry
        _m04 void*                                     normal_context;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .NormalContext
        _m05 void*                                     system_argument1;       //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SystemArgument1
        _m06 void*                                     system_argument2;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .SystemArgument2
        _m07 char                                      apc_state_index;        //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .ApcStateIndex
        _m08 char                                      apc_mode;               //{ +0x0051    +0x0051    +0x0051    +0x0051    +0x0051    } | .ApcMode
        _m09 uint8_t                                   inserted;               //{ +0x0052    +0x0052    +0x0052    +0x0052    +0x0052    } | .Inserted
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m10 kernel_routine_t                          kernel_routine;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .KernelRoutine
        _m11 sdk::function<void(struct nt::kapc_t*)>*  rundown_routine;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RundownRoutine
        _m12 sdk::function<void(void*, void*, void*)>* normal_routine;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NormalRoutine
                                                                             
        // Windows 11                                                        
        //                                                                   
        _m13 uint8_t                                   all_flags;              //{ +0x0001    } | .AllFlags
        _m14 uint1_t                                   callback_data_context;  //{ +0x0001@0  } | .CallbackDataContext
                                                                             
        SDK_NONVOL_PROPERTIES( "_KAPC.$", 0x58, true, 0x14782f6d7eab218b );                      
        SDK_FIXED_SIZE( kapc_t, 0x58 );                                      
    };                                                                       
};
#include "magic/kapc_t.end.hpp"
SDK_VERIFY( struct nt::kapc_t, 0x58 );
