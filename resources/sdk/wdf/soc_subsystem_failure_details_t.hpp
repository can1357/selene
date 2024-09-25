#pragma once
#include <sdkgen/support_library.hpp>
#include "soc_subsystem_type_t.hpp"

#include "magic/soc_subsystem_failure_details_t.start.hpp"
namespace wdf
{
    // [struct _SOC_SUBSYSTEM_FAILURE_DETAILS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct soc_subsystem_failure_details_t                              
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m00 enum wdf::soc_subsystem_type_t subsys_type;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SubsysType
        _m01 uint64_t                       firmware_version;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FirmwareVersion
        _m02 uint64_t                       hardware_version;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .HardwareVersion
        _m03 uint32_t                       unified_failure_region_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .UnifiedFailureRegionSize
        _m04 sdk::array<char, 1>            unified_failure_region;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .UnifiedFailureRegion
                                                                        
        SDK_NONVOL_PROPERTIES( "_SOC_SUBSYSTEM_FAILURE_DETAILS.$", 0x20, true, 0xc228ee61eff85b61 );                            
        SDK_FIXED_SIZE( soc_subsystem_failure_details_t, 0x20 );                            
    };                                                                  
};
#include "magic/soc_subsystem_failure_details_t.end.hpp"
SDK_VERIFY( struct wdf::soc_subsystem_failure_details_t, 0x20 );
