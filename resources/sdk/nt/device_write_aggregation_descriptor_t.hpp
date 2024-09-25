#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_write_aggregation_descriptor_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_WRITE_AGGREGATION_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct device_write_aggregation_descriptor_t      
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t version;                          //{ +0x0000    } | .Version
        _m01 uint32_t size;                             //{ +0x0004    } | .Size
        _m02 uint8_t  benefits_from_write_aggregation;  //{ +0x0008    } | .BenefitsFromWriteAggregation
                                                      
        SDK_NONVOL_PROPERTIES( "_DEVICE_WRITE_AGGREGATION_DESCRIPTOR.$", 0x0, false, 0xfa41d66da4f26d38 );                                
        SDK_FIXED_SIZE( device_write_aggregation_descriptor_t, 0xc );                                
    };                                                
};
#include "magic/device_write_aggregation_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::device_write_aggregation_descriptor_t, 0xc );
