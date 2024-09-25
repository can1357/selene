#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/device_dsm_conversion_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_CONVERSION_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_dsm_conversion_output_t
    {                                    
        // WDK 10                      
        //                             
        _m00 uint32_t          version;    //{ +0x0000    } | .Version
        _m01 struct nt::guid_t source;     //{ +0x0004    } | .Source
                                         
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_CONVERSION_OUTPUT.$", 0x0, false, 0x6e69cc3ca4962cea );        
        SDK_FIXED_SIZE( device_dsm_conversion_output_t, 0x14 );        
    };                                   
};
#include "magic/device_dsm_conversion_output_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_conversion_output_t, 0x14 );
