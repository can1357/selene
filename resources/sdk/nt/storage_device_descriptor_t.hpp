#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/storage_bus_type_t.hpp"

#include "magic/storage_device_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_descriptor_t                                   
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                            version;                  //{ +0x0000    } | .Version
        _m01 uint32_t                            size;                     //{ +0x0004    } | .Size
        _m02 uint8_t                             device_type;              //{ +0x0008    } | .DeviceType
        _m03 uint8_t                             device_type_modifier;     //{ +0x0009    } | .DeviceTypeModifier
        _m04 uint8_t                             removable_media;          //{ +0x000a    } | .RemovableMedia
        _m05 uint8_t                             command_queueing;         //{ +0x000b    } | .CommandQueueing
        _m06 uint32_t                            vendor_id_offset;         //{ +0x000c    } | .VendorIdOffset
        _m07 uint32_t                            product_id_offset;        //{ +0x0010    } | .ProductIdOffset
        _m08 uint32_t                            product_revision_offset;  //{ +0x0014    } | .ProductRevisionOffset
        _m09 uint32_t                            serial_number_offset;     //{ +0x0018    } | .SerialNumberOffset
        _m10 enum stor::port::storage_bus_type_t bus_type;                 //{ +0x001c    } | .BusType
        _m11 uint32_t                            raw_properties_length;    //{ +0x0020    } | .RawPropertiesLength
        _m12 sdk::array<uint8_t, 1>              raw_device_properties;    //{ +0x0024    } | .RawDeviceProperties
                                                                         
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_DESCRIPTOR.$", 0x0, false, 0x835f52265f13f6a6 );                        
        SDK_FIXED_SIZE( storage_device_descriptor_t, 0x28 );                        
    };                                                                   
};
#include "magic/storage_device_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_descriptor_t, 0x28 );
