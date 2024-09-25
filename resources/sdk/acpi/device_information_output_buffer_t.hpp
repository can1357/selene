#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_information_output_buffer_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER]
    // => WDK 10 (NV)
    //
    struct device_information_output_buffer_t     
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t signature;                    //{ +0x0000    } | .Signature
        _m01 uint16_t size;                         //{ +0x0004    } | .Size
        _m02 uint8_t  revision;                     //{ +0x0006    } | .Revision
        _m03 uint16_t vendor_id_string_offset;      //{ +0x0008    } | .VendorIdStringOffset
        _m04 uint16_t vendor_string_length;         //{ +0x000a    } | .VendorStringLength
        _m05 uint16_t device_id_string_offset;      //{ +0x000c    } | .DeviceIdStringOffset
        _m06 uint16_t sub_system_id_string_offset;  //{ +0x000e    } | .SubSystemIdStringOffset
        _m07 uint16_t sub_system_string_length;     //{ +0x0010    } | .SubSystemStringLength
        _m08 uint16_t sub_device_id_string_offset;  //{ +0x0012    } | .SubDeviceIdStringOffset
        _m09 uint16_t instance_id_length;           //{ +0x0014    } | .InstanceIdLength
        _m10 uint16_t instance_id_offset;           //{ +0x0016    } | .InstanceIdOffset
        _m11 uint16_t base_class_code;              //{ +0x0018    } | .BaseClassCode
        _m12 uint16_t hardware_revision;            //{ +0x001a    } | .HardwareRevision
        _m13 uint8_t  programming_interface;        //{ +0x001c    } | .ProgrammingInterface
        _m14 uint16_t sub_class_code;               //{ +0x001e    } | .SubClassCode
                                                  
        SDK_NONVOL_PROPERTIES( "_ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER.$", 0x0, false, 0x17217b3deee40e30 );                            
        SDK_FIXED_SIZE( device_information_output_buffer_t, 0x20 );                            
    };                                            
};
#include "magic/device_information_output_buffer_t.end.hpp"
SDK_VERIFY( struct acpi::device_information_output_buffer_t, 0x20 );
