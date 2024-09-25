#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ccswap_idle_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CCSWAP_IDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ccswap_idle_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint2_t  data_type;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DataType
        _m01 uint30_t time_delta;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TimeDelta
                                 
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CCSWAP_IDLE.$", 0x4, true, 0xe5116296b006a457 );           
        SDK_FIXED_SIZE( perfinfo_ccswap_idle_t, 0x4 );           
    };                           
};
#include "magic/perfinfo_ccswap_idle_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ccswap_idle_t, 0x4 );
