#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/share_access_t.start.hpp"
namespace nt
{
    // [struct _SHARE_ACCESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct share_access_t           
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t open_count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OpenCount
        _m01 uint32_t readers;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Readers
        _m02 uint32_t writers;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Writers
        _m03 uint32_t deleters;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Deleters
        _m04 uint32_t shared_read;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SharedRead
        _m05 uint32_t shared_write;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SharedWrite
        _m06 uint32_t shared_delete;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SharedDelete
                                    
        SDK_NONVOL_PROPERTIES( "_SHARE_ACCESS.$", 0x1c, true, 0xf555d1caf5571560 );              
        SDK_FIXED_SIZE( share_access_t, 0x1c );              
    };                              
};
#include "magic/share_access_t.end.hpp"
SDK_VERIFY( struct nt::share_access_t, 0x1c );
