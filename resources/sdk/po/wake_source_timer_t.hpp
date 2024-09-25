#pragma once
#include <sdkgen/support_library.hpp>
#include "wake_source_header_t.hpp"
#include "../nt/diagnostic_buffer_t.hpp"

#include "magic/wake_source_timer_t.start.hpp"
namespace po
{
    // [struct _PO_WAKE_SOURCE_TIMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_source_timer_t                      
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                          
        _m00 struct po::wake_source_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct nt::diagnostic_buffer_t  reason;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Reason
                                                    
        SDK_MAGIC_PROPERTIES( "_PO_WAKE_SOURCE_TIMER.$", 0x30, true, 0x6dbdc1824ba2b95 );       
        SDK_FIXED_SIZE( wake_source_timer_t, 0x30 );       
    };                                              
};
#include "magic/wake_source_timer_t.end.hpp"
SDK_VERIFY( struct po::wake_source_timer_t, 0x30 );
