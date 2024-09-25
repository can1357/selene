#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_statistics_t.start.hpp"
namespace nt
{
    // [struct _TAPE_STATISTICS]
    // => WDK 10 (NV)
    //
    struct tape_statistics_t                   
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t version;                   //{ +0x0000    } | .Version
        _m01 uint32_t flags;                     //{ +0x0004    } | .Flags
        _m02 int64_t  recovered_writes;          //{ +0x0008    } | .RecoveredWrites
        _m03 int64_t  unrecovered_writes;        //{ +0x0010    } | .UnrecoveredWrites
        _m04 int64_t  recovered_reads;           //{ +0x0018    } | .RecoveredReads
        _m05 int64_t  unrecovered_reads;         //{ +0x0020    } | .UnrecoveredReads
        _m06 uint8_t  compression_ratio_reads;   //{ +0x0028    } | .CompressionRatioReads
        _m07 uint8_t  compression_ratio_writes;  //{ +0x0029    } | .CompressionRatioWrites
                                               
        SDK_NONVOL_PROPERTIES( "_TAPE_STATISTICS.$", 0x0, false, 0xdfb6c71c7ebb132d );                         
        SDK_FIXED_SIZE( tape_statistics_t, 0x30 );                         
    };                                         
};
#include "magic/tape_statistics_t.end.hpp"
SDK_VERIFY( struct nt::tape_statistics_t, 0x30 );
