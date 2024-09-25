#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ccswap_lite_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CCSWAP_LITE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ccswap_lite_t         
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint2_t  data_type;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DataType
        _m01 uint4_t  old_thread_id_index;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .OldThreadIdIndex
        _m02 uint3_t  old_thread_pri_inc;   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .OldThreadPriInc
        _m03 uint6_t  old_thread_state_wr;  //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .OldThreadStateWr
        _m04 uint17_t time_delta;           //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .TimeDelta
                                          
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CCSWAP_LITE.$", 0x4, true, 0x4dc5b2dd19770495 );                    
        SDK_FIXED_SIZE( perfinfo_ccswap_lite_t, 0x4 );                    
    };                                    
};
#include "magic/perfinfo_ccswap_lite_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ccswap_lite_t, 0x4 );
