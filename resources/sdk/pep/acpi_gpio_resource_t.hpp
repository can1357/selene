#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_resource_type_t.hpp"
#include "acpi_resource_flags_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"
#include "../nt/kinterrupt_polarity_t.hpp"
#include "../nt/gpio_pin_config_type_t.hpp"
#include "../nt/gpio_pin_iorestriction_type_t.hpp"

#include "magic/acpi_gpio_resource_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_GPIO_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_gpio_resource_t                                           
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m00 enum pep::acpi_resource_type_t         type;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 union pep::acpi_resource_flags_t       flags;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum nt::kinterrupt_mode_t             interrupt_type;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptType
        _m03 enum nt::kinterrupt_polarity_t         interrupt_polarity;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .InterruptPolarity
        _m04 enum nt::gpio_pin_config_type_t        pin_config;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PinConfig
        _m05 enum nt::gpio_pin_iorestriction_type_t io_restriction_type;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .IoRestrictionType
        _m06 uint16_t                               drive_strength;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DriveStrength
        _m07 uint16_t                               debounce_timeout;       //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .DebounceTimeout
        _m08 uint16_t*                              pin_table;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PinTable
        _m09 uint16_t                               pin_count;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PinCount
        _m10 uint8_t                                resource_source_index;  //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .ResourceSourceIndex
        _m11 nt::unicode_view*                      resource_source_name;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ResourceSourceName
        _m12 uint8_t*                               vendor_data;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .VendorData
        _m13 uint16_t                               vendor_data_length;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .VendorDataLength
                                                                          
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_GPIO_RESOURCE.$", 0x48, true, 0xe64a43ffe930dfcf );                      
        SDK_FIXED_SIZE( acpi_gpio_resource_t, 0x48 );                      
    };                                                                    
};
#include "magic/acpi_gpio_resource_t.end.hpp"
SDK_VERIFY( struct pep::acpi_gpio_resource_t, 0x48 );
