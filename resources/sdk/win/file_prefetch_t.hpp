#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_prefetch_t.start.hpp"
namespace win
{
    // [struct _FILE_PREFETCH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_prefetch_t                    
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint32_t                type;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                count;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 sdk::array<uint64_t, 1> prefetch;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Prefetch
                                              
        SDK_NONVOL_PROPERTIES( "_FILE_PREFETCH.$", 0x10, true, 0xea6a19798d0670b9 );         
        SDK_FIXED_SIZE( file_prefetch_t, 0x10 );         
    };                                        
};
#include "magic/file_prefetch_t.end.hpp"
SDK_VERIFY( struct win::file_prefetch_t, 0x10 );
