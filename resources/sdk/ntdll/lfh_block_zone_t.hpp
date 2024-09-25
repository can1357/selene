#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_block_zone_t.start.hpp"
namespace ntdll
{
    // [struct _LFH_BLOCK_ZONE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_block_zone_t              
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                               
        _m00 nt::list_entry_t list_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 volatile int32_t next_index;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextIndex
                                         
        SDK_MAGIC_PROPERTIES( "_LFH_BLOCK_ZONE.$", 0x18, true, 0x4d0e4ce4063e1c78 );           
        SDK_FIXED_SIZE( lfh_block_zone_t, 0x18 );           
    };                                   
};
#include "magic/lfh_block_zone_t.end.hpp"
SDK_VERIFY( struct ntdll::lfh_block_zone_t, 0x18 );
