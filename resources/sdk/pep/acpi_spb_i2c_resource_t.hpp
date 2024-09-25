#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_spb_resource_t.hpp"

#include "magic/acpi_spb_i2c_resource_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_SPB_I2C_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_spb_i2c_resource_t                            
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 struct pep::acpi_spb_resource_t spb_common;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpbCommon
        _m01 uint32_t                        connection_speed;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ConnectionSpeed
        _m02 uint16_t                        slave_address;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SlaveAddress
                                                              
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_SPB_I2C_RESOURCE.$", 0x30, true, 0xa9dd77b27e405fc0 );                 
        SDK_FIXED_SIZE( acpi_spb_i2c_resource_t, 0x30 );                 
    };                                                        
};
#include "magic/acpi_spb_i2c_resource_t.end.hpp"
SDK_VERIFY( struct pep::acpi_spb_i2c_resource_t, 0x30 );
