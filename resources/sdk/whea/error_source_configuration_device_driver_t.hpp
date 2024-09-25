#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/error_source_configuration_device_driver_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_source_configuration_device_driver_t                         
    {                                                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                    
        _m00 uint32_t                                 version;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct nt::guid_t                        source_guid;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SourceGuid
        _m02 uint16_t                                 log_tag;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LogTag
        _m03 sdk::function<int32_t(void*, uint32_t)>* initialize;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Initialize
        _m04 sdk::function<void(void*)>*              uninitialize;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Uninitialize
        _m05 uint32_t                                 max_section_data_length;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MaxSectionDataLength
        _m06 uint32_t                                 max_sections_per_report;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MaxSectionsPerReport
        _m07 struct nt::guid_t                        creator_id;               //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CreatorId
        _m08 struct nt::guid_t                        partition_id;             //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .PartitionId
                                                                              
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_SOURCE_CONFIGURATION_DEVICE_DRIVER.$", 0x54, true, 0x7a9a7f965af0f460 );                        
        SDK_FIXED_SIZE( error_source_configuration_device_driver_t, 0x54 );                        
    };                                                                        
};
#include "magic/error_source_configuration_device_driver_t.end.hpp"
SDK_VERIFY( struct whea::error_source_configuration_device_driver_t, 0x54 );
