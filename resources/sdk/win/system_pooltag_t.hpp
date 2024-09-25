#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_pooltag_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOLTAG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pooltag_t                          
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 sdk::array<uint8_t, 4> tag;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tag
        _m01 uint32_t               tag_ulong;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagUlong
        _m02 uint32_t               paged_allocs;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PagedAllocs
        _m03 uint32_t               paged_frees;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagedFrees
        _m04 uint64_t               paged_used;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PagedUsed
        _m05 uint32_t               non_paged_allocs;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NonPagedAllocs
        _m06 uint32_t               non_paged_frees;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .NonPagedFrees
        _m07 uint64_t               non_paged_used;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NonPagedUsed
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOLTAG.$", 0x28, true, 0x90aca740f16fd494 );                 
        SDK_FIXED_SIZE( system_pooltag_t, 0x28 );                 
    };                                               
};
#include "magic/system_pooltag_t.end.hpp"
SDK_VERIFY( struct win::system_pooltag_t, 0x28 );
