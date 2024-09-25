#pragma once
#include <sdkgen/support_library.hpp>
#include "flags_t.hpp"

#include "magic/triage_dump_data_t.start.hpp"
namespace mi
{
    // [struct _MI_TRIAGE_DUMP_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_dump_data_t                                         
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                            
        _m00 uint64_t          bad_page_count;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BadPageCount
        _m01 int32_t           bad_pages_detected;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BadPagesDetected
        _m02 int32_t           zeroed_page_single_bit_errors_detected;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ZeroedPageSingleBitErrorsDetected
        _m03 int32_t           scrub_passes;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ScrubPasses
        _m04 int32_t           scrub_bad_pages_found;                   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ScrubBadPagesFound
        _m05 uint32_t          page_hash_errors;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PageHashErrors
        _m06 uint64_t          feature_bits;                            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FeatureBits
        _m07 uint32_t          time_zone_id;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TimeZoneId
        _m08 union mi::flags_t flags;                                   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m09 void*             vsm_connection;                          //{ +0x0030    +0x0030    +0x0038    +0x0030    } | .VsmConnection
                                                                      
        SDK_MAGIC_PROPERTIES( "_MI_TRIAGE_DUMP_DATA.$", 0x38, true, 0x4644410473e04cd0 );                                       
        SDK_DYNAMIC_SIZE( triage_dump_data_t );                                       
    };                                                                
};
#include "magic/triage_dump_data_t.end.hpp"
