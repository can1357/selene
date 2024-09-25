#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_spb_resource_t.hpp"

#include "magic/acpi_spb_spi_resource_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_SPB_SPI_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_spb_spi_resource_t                            
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 struct pep::acpi_spb_resource_t spb_common;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpbCommon
        _m01 uint32_t                        connection_speed;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ConnectionSpeed
        _m02 uint8_t                         data_bit_length;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .DataBitLength
        _m03 uint8_t                         phase;             //{ +0x002d    +0x002d    +0x002d    +0x002d    } | .Phase
        _m04 uint8_t                         polarity;          //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .Polarity
        _m05 uint16_t                        device_selection;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceSelection
                                                              
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_SPB_SPI_RESOURCE.$", 0x38, true, 0x255b4c0b2a406626 );                 
        SDK_FIXED_SIZE( acpi_spb_spi_resource_t, 0x38 );                 
    };                                                        
};
#include "magic/acpi_spb_spi_resource_t.end.hpp"
SDK_VERIFY( struct pep::acpi_spb_spi_resource_t, 0x38 );
