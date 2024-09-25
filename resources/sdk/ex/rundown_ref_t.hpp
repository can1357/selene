#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rundown_ref_t.start.hpp"
namespace ex
{
    // [struct _EX_RUNDOWN_REF]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rundown_ref_t    
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint64_t count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 void*    ptr;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                            
        SDK_NONVOL_PROPERTIES( "_EX_RUNDOWN_REF.$", 0x8, true, 0xbef0febcd18c79e7 );      
        SDK_FIXED_SIZE( rundown_ref_t, 0x8 );      
    };                      
};
#include "magic/rundown_ref_t.end.hpp"
SDK_VERIFY( struct ex::rundown_ref_t, 0x8 );
