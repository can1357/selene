#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eng_event_t.start.hpp"
namespace nt
{
    // [struct _ENG_EVENT]
    // => WDK 10 (NV)
    //
    struct eng_event_t          
    {                           
        // WDK 10               
        //                      
        _m00 void*    p_k_event;  //{ +0x0000    } | .pKEvent
        _m01 uint32_t f_flags;    //{ +0x0008    } | .fFlags
                                
        SDK_NONVOL_PROPERTIES( "_ENG_EVENT.$", 0x0, false, 0x16528b6d3b0dad2d );          
        SDK_FIXED_SIZE( eng_event_t, 0x10 );          
    };                          
};
#include "magic/eng_event_t.end.hpp"
SDK_VERIFY( struct nt::eng_event_t, 0x10 );
