#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ccswap_idle_short_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CCSWAP_IDLE_SHORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ccswap_idle_short_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint2_t  data_type;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DataType
        _m01 uint14_t time_delta;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TimeDelta
                                       
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CCSWAP_IDLE_SHORT.$", 0x2, true, 0x51b2edbdb2f24f43 );           
        SDK_FIXED_SIZE( perfinfo_ccswap_idle_short_t, 0x2 );           
    };                                 
};
#include "magic/perfinfo_ccswap_idle_short_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ccswap_idle_short_t, 0x2 );
