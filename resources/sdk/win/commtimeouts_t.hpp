#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/commtimeouts_t.start.hpp"
namespace win
{
    // [struct _COMMTIMEOUTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct commtimeouts_t                            
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t read_interval_timeout;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadIntervalTimeout
        _m01 uint32_t read_total_timeout_multiplier;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadTotalTimeoutMultiplier
        _m02 uint32_t read_total_timeout_constant;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReadTotalTimeoutConstant
        _m03 uint32_t write_total_timeout_multiplier;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WriteTotalTimeoutMultiplier
        _m04 uint32_t write_total_timeout_constant;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WriteTotalTimeoutConstant
                                                     
        SDK_MAGIC_PROPERTIES( "_COMMTIMEOUTS.$", 0x14, true, 0x10869b43743fe3cc );                               
        SDK_FIXED_SIZE( commtimeouts_t, 0x14 );                               
    };                                               
};
#include "magic/commtimeouts_t.end.hpp"
SDK_VERIFY( struct win::commtimeouts_t, 0x14 );
