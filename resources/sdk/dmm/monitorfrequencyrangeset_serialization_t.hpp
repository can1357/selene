#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/monitor_frequency_range_t.hpp"

#include "magic/monitorfrequencyrangeset_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_MONITORFREQUENCYRANGESET_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitorfrequencyrangeset_serialization_t                         
    {                                                                       
        using frequency_range_serialization_t = sdk::array<struct d3dk::mdt::monitor_frequency_range_t, 1>;                              
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m00 uint8_t                          num_frequency_ranges;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumFrequencyRanges
        _m01 frequency_range_serialization_t  frequency_range_serialization;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FrequencyRangeSerialization
                                                                            
        SDK_MAGIC_PROPERTIES( "_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION.$", 0x38, true, 0x64f8f775f1904b2 );                              
        SDK_FIXED_SIZE( monitorfrequencyrangeset_serialization_t, 0x38 );                              
    };                                                                      
};
#include "magic/monitorfrequencyrangeset_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::monitorfrequencyrangeset_serialization_t, 0x38 );
