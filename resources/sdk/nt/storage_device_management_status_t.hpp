#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_disk_health_status_t.hpp"
#include "storage_operational_reason_t.hpp"
#include "storage_disk_operational_status_t.hpp"

#include "magic/storage_device_management_status_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_MANAGEMENT_STATUS]
    // => WDK 10 (NV)
    //
    struct storage_device_management_status_t                                   
    {                                                                           
        using operational_status_t = sdk::array<enum nt::storage_disk_operational_status_t, 16>;                             
        using additional_reasons_t = sdk::array<struct nt::storage_operational_reason_t, 1>;                             
                                                                                
        // WDK 10                                                               
        //                                                                      
        _m00 uint32_t                              version;                       //{ +0x0000    } | .Version
        _m01 uint32_t                              size;                          //{ +0x0004    } | .Size
        _m02 enum nt::storage_disk_health_status_t health;                        //{ +0x0008    } | .Health
        _m03 uint32_t                              number_of_operational_status;  //{ +0x000c    } | .NumberOfOperationalStatus
        _m04 uint32_t                              number_of_additional_reasons;  //{ +0x0010    } | .NumberOfAdditionalReasons
        _m05 operational_status_t                  operational_status;            //{ +0x0014    } | .OperationalStatus
        _m06 additional_reasons_t                  additional_reasons;            //{ +0x0054    } | .AdditionalReasons
                                                                                
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_MANAGEMENT_STATUS.$", 0x0, false, 0xc9c3e266f831f207 );                             
        SDK_FIXED_SIZE( storage_device_management_status_t, 0x64 );                             
    };                                                                          
};
#include "magic/storage_device_management_status_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_management_status_t, 0x64 );
