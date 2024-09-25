#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ccswap_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CCSWAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ccswap_t               
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint2_t  data_type;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DataType
        _m01 uint30_t time_delta;            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TimeDelta
        _m02 uint4_t  old_thread_id_index;   //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .OldThreadIdIndex
        _m03 uint6_t  old_thread_state_wr;   //{ +0x0004@4  +0x0004@4  +0x0004@4  +0x0004@4  } | .OldThreadStateWr
        _m04 uint5_t  old_thread_priority;   //{ +0x0004@10 +0x0004@10 +0x0004@10 +0x0004@10 } | .OldThreadPriority
        _m05 uint17_t new_thread_wait_time;  //{ +0x0004@15 +0x0004@15 +0x0004@15 +0x0004@15 } | .NewThreadWaitTime
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CCSWAP.$", 0x8, true, 0x48bdb1763c0edf10 );                     
        SDK_FIXED_SIZE( perfinfo_ccswap_t, 0x8 );                     
    };                                     
};
#include "magic/perfinfo_ccswap_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ccswap_t, 0x8 );
