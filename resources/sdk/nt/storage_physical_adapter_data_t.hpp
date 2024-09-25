#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_spec_version_t.hpp"
#include "storage_protocol_type_t.hpp"
#include "storage_component_health_status_t.hpp"

#include "magic/storage_physical_adapter_data_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_PHYSICAL_ADAPTER_DATA]
    // => WDK 10 (NV)
    //
    struct storage_physical_adapter_data_t                                 
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                   adapter_id;          //{ +0x0000    } | .AdapterId
        _m01 enum nt::storage_component_health_status_t health_status;       //{ +0x0004    } | .HealthStatus
        _m02 enum nt::storage_protocol_type_t           command_protocol;    //{ +0x0008    } | .CommandProtocol
        _m03 union nt::storage_spec_version_t           spec_version;        //{ +0x000c    } | .SpecVersion
        _m04 sdk::array<uint8_t, 8>                     vendor;              //{ +0x0010    } | .Vendor
        _m05 sdk::array<uint8_t, 40>                    model;               //{ +0x0018    } | .Model
        _m06 sdk::array<uint8_t, 16>                    firmware_revision;   //{ +0x0040    } | .FirmwareRevision
        _m07 sdk::array<uint8_t, 32>                    physical_location;   //{ +0x0050    } | .PhysicalLocation
        _m08 uint8_t                                    expander_connected;  //{ +0x0070    } | .ExpanderConnected
                                                                           
        SDK_NONVOL_PROPERTIES( "_STORAGE_PHYSICAL_ADAPTER_DATA.$", 0x0, false, 0x75ed454721ade278 );                   
        SDK_FIXED_SIZE( storage_physical_adapter_data_t, 0x80 );                   
    };                                                                     
};
#include "magic/storage_physical_adapter_data_t.end.hpp"
SDK_VERIFY( struct nt::storage_physical_adapter_data_t, 0x80 );
