#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/curdir_t.start.hpp"
namespace nt
{
    // [struct _CURDIR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct curdir_t                    
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                             
        _m00 nt::unicode_view dos_path;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DosPath
        _m01 void*            handle;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Handle
                                       
        SDK_NONVOL_PROPERTIES( "_CURDIR.$", 0x18, true, 0xbc5bdf5e00e379c2 );         
        SDK_FIXED_SIZE( curdir_t, 0x18 );         
    };                                 
};
#include "magic/curdir_t.end.hpp"
SDK_VERIFY( struct nt::curdir_t, 0x18 );
