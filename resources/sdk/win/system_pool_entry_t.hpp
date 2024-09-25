#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_pool_entry_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOL_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pool_entry_t                                 
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                     
        _m00 uint8_t                allocated;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Allocated
        _m01 uint16_t               allocator_back_trace_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .AllocatorBackTraceIndex
        _m02 uint32_t               size;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m03 sdk::array<uint8_t, 4> tag;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
        _m04 uint32_t               tag_ulong;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TagUlong
        _m05 void*                  process_charged_quota;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessChargedQuota
                                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOL_ENTRY.$", 0x10, true, 0x21b942de0f3db416 );                           
        SDK_FIXED_SIZE( system_pool_entry_t, 0x10 );                           
    };                                                         
};
#include "magic/system_pool_entry_t.end.hpp"
SDK_VERIFY( struct win::system_pool_entry_t, 0x10 );
