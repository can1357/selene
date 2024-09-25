#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_long_dpc_detection_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_LONG_DPC_DETECTION_INFORMATION]
    // => Windows 11
    //
    struct perfinfo_long_dpc_detection_information_t
    {                                               
        // Windows 11                 
        //                            
        _m00 int32_t dpc_queue_depth;                 //{ +0x0000    } | .DpcQueueDepth
        _m01 uint8_t long_dpc_present;                //{ +0x0004    } | .LongDpcPresent
                                                    
        SDK_MAGIC_PROPERTIES( "_PERFINFO_LONG_DPC_DETECTION_INFORMATION.$", 0x0, false, 0xfe3cf975916af0d9 );                 
        SDK_FIXED_SIZE( perfinfo_long_dpc_detection_information_t, 0x8 );                 
    };                                              
};
#include "magic/perfinfo_long_dpc_detection_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_long_dpc_detection_information_t, 0x8 );
