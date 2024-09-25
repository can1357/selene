#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/summary_t.start.hpp"
namespace heap
{
    // [struct _HEAP_SUMMARY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct summary_t                 
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t cb;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 uint64_t cb_allocated;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbAllocated
        _m02 uint64_t cb_committed;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbCommitted
        _m03 uint64_t cb_reserved;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cbReserved
        _m04 uint64_t cb_max_reserve;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cbMaxReserve
                                     
        SDK_MAGIC_PROPERTIES( "_HEAP_SUMMARY.$", 0x28, true, 0x2ce51ccb6a72ed93 );               
        SDK_FIXED_SIZE( summary_t, 0x28 );               
    };                               
};
#include "magic/summary_t.end.hpp"
SDK_VERIFY( struct heap::summary_t, 0x28 );
