#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "error_source_configuration_dd_t.hpp"

#include "magic/device_driver_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_DEVICE_DRIVER_DESCRIPTOR]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_driver_descriptor_t                                             
    {                                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                        
        _m00 uint16_t                                     type;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                      enabled;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Enabled
        _m02 struct nt::guid_t                            source_guid;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SourceGuid
        _m03 uint16_t                                     log_tag;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LogTag
        _m04 uint32_t                                     packet_length;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PacketLength
        _m05 uint32_t                                     packet_count;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PacketCount
        _m06 uint8_t*                                     packet_buffer;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PacketBuffer
        _m07 struct whea::error_source_configuration_dd_t config;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Config
        _m08 struct nt::guid_t                            creator_id;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CreatorId
        _m09 struct nt::guid_t                            partition_id;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PartitionId
        _m10 uint32_t                                     max_section_data_length;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MaxSectionDataLength
        _m11 uint32_t                                     max_sections_per_record;  //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .MaxSectionsPerRecord
        _m12 uint8_t*                                     packet_state_buffer;      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PacketStateBuffer
        _m13 int32_t                                      open_handles;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .OpenHandles
                                                                                  
        SDK_NONVOL_PROPERTIES( "_WHEA_DEVICE_DRIVER_DESCRIPTOR.$", 0x74, true, 0xd04c5bf4bab0a0bb );                        
        SDK_FIXED_SIZE( device_driver_descriptor_t, 0x74 );                        
    };                                                                            
};
#include "magic/device_driver_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::device_driver_descriptor_t, 0x74 );
