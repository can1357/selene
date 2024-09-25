#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pcw_counter_information_t.start.hpp"
namespace nt
{
    // [struct _PCW_COUNTER_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcw_counter_information_t               
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint64_t                counter_mask;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CounterMask
        _m01 const nt::unicode_view* instance_mask;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InstanceMask
                                                   
        SDK_NONVOL_PROPERTIES( "_PCW_COUNTER_INFORMATION.$", 0x10, true, 0xd87a3a04c74dc4a3 );              
        SDK_FIXED_SIZE( pcw_counter_information_t, 0x10 );              
    };                                             
};
#include "magic/pcw_counter_information_t.end.hpp"
SDK_VERIFY( struct nt::pcw_counter_information_t, 0x10 );
