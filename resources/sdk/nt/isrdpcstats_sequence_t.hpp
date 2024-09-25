#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/isrdpcstats_sequence_t.start.hpp"
namespace nt
{
    // [struct _ISRDPCSTATS_SEQUENCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct isrdpcstats_sequence_t     
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t sequence_number;  //{ +0x0000    +0x0000    +0x0000    } | .SequenceNumber
        _m01 uint64_t isr_time;         //{ +0x0008    +0x0008    +0x0008    } | .IsrTime
        _m02 uint64_t isr_count;        //{ +0x0010    +0x0010    +0x0010    } | .IsrCount
        _m03 uint64_t dpc_time;         //{ +0x0018    +0x0018    +0x0018    } | .DpcTime
        _m04 uint64_t dpc_count;        //{ +0x0020    +0x0020    +0x0020    } | .DpcCount
                                      
        SDK_MAGIC_PROPERTIES( "_ISRDPCSTATS_SEQUENCE.$", 0x28, true, 0x6f8e028600cbbdc7 );                
        SDK_FIXED_SIZE( isrdpcstats_sequence_t, 0x28 );                
    };                                
};
#include "magic/isrdpcstats_sequence_t.end.hpp"
SDK_VERIFY( struct nt::isrdpcstats_sequence_t, 0x28 );
