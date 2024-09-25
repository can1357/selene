#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpfnentry3_t.start.hpp"
namespace nt
{
    // [struct _MMPFNENTRY3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpfnentry3_t                  
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint3_t priority;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Priority
        _m01 uint1_t on_protected_standby;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .OnProtectedStandby
        _m02 uint1_t in_page_error;         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .InPageError
        _m03 uint1_t system_charged_page;   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .SystemChargedPage
        _m04 uint1_t removal_requested;     //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .RemovalRequested
        _m05 uint1_t parity_error;          //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .ParityError
                                          
        SDK_MAGIC_PROPERTIES( "_MMPFNENTRY3.$", 0x1, true, 0x23e3c19f28eb8202 );                     
        SDK_FIXED_SIZE( mmpfnentry3_t, 0x1 );                     
    };                                    
};
#include "magic/mmpfnentry3_t.end.hpp"
SDK_VERIFY( struct nt::mmpfnentry3_t, 0x1 );
