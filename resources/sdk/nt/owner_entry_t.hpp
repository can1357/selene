#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/owner_entry_t.start.hpp"
namespace nt
{
    // [struct _OWNER_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct owner_entry_t                       
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t owner_thread;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OwnerThread
        _m01 uint1_t  io_priority_boosted;       //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .IoPriorityBoosted
        _m02 uint1_t  owner_referenced;          //{ +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  } | .OwnerReferenced
        _m03 uint1_t  io_qo_s_priority_boosted;  //{ +0x0008@2  +0x0008@2  +0x0008@2  +0x0008@2  +0x0008@2  } | .IoQoSPriorityBoosted
        _m04 uint29_t owner_count;               //{ +0x0008@3  +0x0008@3  +0x0008@3  +0x0008@3  +0x0008@3  } | .OwnerCount
        _m05 uint32_t table_size;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TableSize
                                               
        SDK_NONVOL_PROPERTIES( "_OWNER_ENTRY.$", 0x10, true, 0xfad6b4603a6980f5 );                         
        SDK_FIXED_SIZE( owner_entry_t, 0x10 );                         
    };                                         
};
#include "magic/owner_entry_t.end.hpp"
SDK_VERIFY( struct nt::owner_entry_t, 0x10 );
