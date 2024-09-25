#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_record_t.start.hpp"
namespace win
{
    // [struct _PROCESSOR_RECORD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_record_t                              
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 uint32_t                 index;                 //{ +0x0000    +0x0000    +0x0000    } | .Index
        _m01 uint32_t                 feature_set;           //{ +0x0004    +0x0004    +0x0004    } | .FeatureSet
        _m02 uint32_t                 processor_speed;       //{ +0x0008    +0x0008    +0x0008    } | .ProcessorSpeed
        _m03 sdk::array<wchar_t, 64>  processor_name;        //{ +0x000c    +0x000c    +0x000c    } | .ProcessorName
        _m04 sdk::array<wchar_t, 128> processor_identifier;  //{ +0x008c    +0x008c    +0x008c    } | .ProcessorIdentifier
        _m05 sdk::array<wchar_t, 16>  vendor_identifier;     //{ +0x018c    +0x018c    +0x018c    } | .VendorIdentifier
                                                           
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_RECORD.$", 0x1ac, true, 0x9059225d9b4900b );                     
        SDK_FIXED_SIZE( processor_record_t, 0x1ac );                     
    };                                                     
};
#include "magic/processor_record_t.end.hpp"
SDK_VERIFY( struct win::processor_record_t, 0x1ac );
