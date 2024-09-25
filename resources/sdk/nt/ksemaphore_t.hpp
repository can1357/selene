#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"

#include "magic/ksemaphore_t.start.hpp"
namespace nt
{
    // [struct _KSEMAPHORE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ksemaphore_t                            
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                         
        _m00 struct nt::dispatcher_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 int32_t                        limit;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Limit
                                                   
        SDK_NONVOL_PROPERTIES( "_KSEMAPHORE.$", 0x20, true, 0x387db965d7bb2923 );       
        SDK_FIXED_SIZE( ksemaphore_t, 0x20 );       
    };                                             
};
#include "magic/ksemaphore_t.end.hpp"
SDK_VERIFY( struct nt::ksemaphore_t, 0x20 );
