#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_bus_specific_reset_type_t.start.hpp"
namespace ndis
{
    // [union _DEVICE_BUS_SPECIFIC_RESET_TYPE]
    // => Windows 11
    //
    union device_bus_specific_reset_type_t                        
    {                                                             
        struct u0_pci_t                                           
        {                                                         
            // Windows 11                                         
            //                                                    
            _m00 uint1_t function_level_device_reset;               //{ +0x0000@0  } | .FunctionLevelDeviceReset
            _m01 uint1_t platform_level_device_reset;               //{ +0x0000@1  } | .PlatformLevelDeviceReset
            _m02 uint1_t secondary_bus_reset;                       //{ +0x0000@2  } | .SecondaryBusReset
                                                                  
            SDK_MAGIC_PROPERTIES( "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Pci.$", 0x0, false, 0x93216d269e6a7358 );                                         
            SDK_FIXED_SIZE( u0_pci_t, 0x8 );                                         
        };                                                        
                                                                  
        struct u1_acpi_t                                          
        {                                                         
            // Windows 11                                         
            //                                                    
            _m04 uint1_t function_level_device_reset;               //{ +0x0000@0  } | .FunctionLevelDeviceReset
            _m05 uint1_t platform_level_device_reset;               //{ +0x0000@1  } | .PlatformLevelDeviceReset
                                                                  
            SDK_MAGIC_PROPERTIES( "_DEVICE_BUS_SPECIFIC_RESET_TYPE.Acpi.$", 0x0, false, 0x8d8417b6507a195f );                                         
            SDK_FIXED_SIZE( u1_acpi_t, 0x8 );                                         
        };                                                        
                                                                  
        // Windows 11                                             
        //                                                        
        _m03 u0_pci_t                                pci;           //{ +0x0000    } | .Pci
        _m06 u1_acpi_t                               acpi;          //{ +0x0000    } | .Acpi
        _m07 uint64_t                                as_ulonglong;  //{ +0x0000    } | .AsULONGLONG
                                                                  
        SDK_MAGIC_PROPERTIES( "_DEVICE_BUS_SPECIFIC_RESET_TYPE.$", 0x0, false, 0x971ce8b6513311bb );             
        SDK_FIXED_SIZE( device_bus_specific_reset_type_t, 0x8 );             
    };                                                            
};
#include "magic/device_bus_specific_reset_type_t.end.hpp"
SDK_VERIFY( struct ndis::device_bus_specific_reset_type_t::u0_pci_t, 0x8 );
SDK_VERIFY( struct ndis::device_bus_specific_reset_type_t::u1_acpi_t, 0x8 );
SDK_VERIFY( union ndis::device_bus_specific_reset_type_t, 0x8 );
