#pragma once
#include <sdkgen/support_library.hpp>
#include "heap_information_t.hpp"

#include "magic/process_heaps_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_HEAPS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_heaps_t                                                 
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                 
        _m00 uint32_t                                      number_of_heaps;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfHeaps
        _m01 sdk::array<struct rtl::heap_information_t, 1> heaps;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Heaps
                                                                           
        SDK_NONVOL_PROPERTIES( "_RTL_PROCESS_HEAPS.$", 0x60, true, 0xe0934f0cfe016e45 );                
        SDK_FIXED_SIZE( process_heaps_t, 0x60 );                           
    };                                                                     
};
#include "magic/process_heaps_t.end.hpp"
SDK_VERIFY( struct rtl::process_heaps_t, 0x60 );
