#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sonic_device_data_t.start.hpp"
namespace cm
{
    // [struct _CM_SONIC_DEVICE_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sonic_device_data_t                                  
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                      
        _m00 uint16_t               version;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t               revision;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint16_t               data_configuration_register;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DataConfigurationRegister
        _m03 sdk::array<uint8_t, 8> ethernet_address;             //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .EthernetAddress
                                                                
        SDK_NONVOL_PROPERTIES( "_CM_SONIC_DEVICE_DATA.$", 0xe, true, 0x65a8975b36bf0bbe );                            
        SDK_FIXED_SIZE( sonic_device_data_t, 0xe );                            
    };                                                          
};
#include "magic/sonic_device_data_t.end.hpp"
SDK_VERIFY( struct cm::sonic_device_data_t, 0xe );
