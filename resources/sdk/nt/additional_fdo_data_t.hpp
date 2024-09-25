#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/additional_fdo_data_t.start.hpp"
namespace nt
{
    // [struct _ADDITIONAL_FDO_DATA]
    // => WDK 10 (NV)
    //
    struct additional_fdo_data_t                 
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint32_t          device_guid_flags;  //{ +0x0000    } | .DeviceGuidFlags
        _m01 struct nt::guid_t device_guid;        //{ +0x0004    } | .DeviceGuid
                                                 
        SDK_NONVOL_PROPERTIES( "_ADDITIONAL_FDO_DATA.$", 0x0, false, 0x1dd4876fb08dda62 );                  
        SDK_FIXED_SIZE( additional_fdo_data_t, 0x14 );                  
    };                                           
};
#include "magic/additional_fdo_data_t.end.hpp"
SDK_VERIFY( struct nt::additional_fdo_data_t, 0x14 );
