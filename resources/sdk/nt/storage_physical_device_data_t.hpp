#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_spec_version_t.hpp"
#include "storage_protocol_type_t.hpp"
#include "storage_device_form_factor_t.hpp"
#include "storage_component_health_status_t.hpp"

#include "magic/storage_physical_device_data_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PHYSICAL_DEVICE_DATA]
    // => WDK 10 (NV)
    //
    struct storage_physical_device_data_t                                 
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 uint32_t                                   device_id;          //{ +0x0000    } | .DeviceId
        _m01 uint32_t                                   role;               //{ +0x0004    } | .Role
        _m02 enum nt::storage_component_health_status_t health_status;      //{ +0x0008    } | .HealthStatus
        _m03 enum nt::storage_protocol_type_t           command_protocol;   //{ +0x000c    } | .CommandProtocol
        _m04 union nt::storage_spec_version_t           spec_version;       //{ +0x0010    } | .SpecVersion
        _m05 enum nt::storage_device_form_factor_t      form_factor;        //{ +0x0014    } | .FormFactor
        _m06 sdk::array<uint8_t, 8>                     vendor;             //{ +0x0018    } | .Vendor
        _m07 sdk::array<uint8_t, 40>                    model;              //{ +0x0020    } | .Model
        _m08 sdk::array<uint8_t, 16>                    firmware_revision;  //{ +0x0048    } | .FirmwareRevision
        _m09 uint64_t                                   capacity;           //{ +0x0058    } | .Capacity
        _m10 sdk::array<uint8_t, 32>                    physical_location;  //{ +0x0060    } | .PhysicalLocation
                                                                          
        SDK_NONVOL_PROPERTIES( "_STORAGE_PHYSICAL_DEVICE_DATA.$", 0x0, false, 0x9226abd951c1fc46 );                  
        SDK_FIXED_SIZE( storage_physical_device_data_t, 0x88 );                  
    };                                                                    
};
#include "magic/storage_physical_device_data_t.end.hpp"
SDK_VERIFY( struct nt::storage_physical_device_data_t, 0x88 );
