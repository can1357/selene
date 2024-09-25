#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/telemetry_context_t.start.hpp"
namespace fx
{
    // [struct _FX_TELEMETRY_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct telemetry_context_t                      
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 struct nt::guid_t driver_session_guid;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverSessionGUID
        _m01 volatile int32_t  do_once_flags_bitmap;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DoOnceFlagsBitmap
                                                    
        SDK_MAGIC_PROPERTIES( "_FX_TELEMETRY_CONTEXT.$", 0x14, true, 0xdc989f9ccff232c6 );                     
        SDK_FIXED_SIZE( telemetry_context_t, 0x14 );                     
    };                                              
};
#include "magic/telemetry_context_t.end.hpp"
SDK_VERIFY( struct fx::telemetry_context_t, 0x14 );
