#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_firmware_table_handler_t.start.hpp"
namespace win
{
    struct system_firmware_table_information_t;

    // [struct _SYSTEM_FIRMWARE_TABLE_HANDLER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct system_firmware_table_handler_t    
    {                                         
        using pfnfth_t = sdk::function<int32_t(struct win::system_firmware_table_information_t*)>*;                       
                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                    
        _m00 uint32_t  provider_signature;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ProviderSignature
        _m01 uint8_t   _register;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Register
        _m02 pfnfth_t  firmware_table_handler;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FirmwareTableHandler
        _m03 void*     driver_object;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DriverObject
                                              
        SDK_NONVOL_PROPERTIES( "_SYSTEM_FIRMWARE_TABLE_HANDLER.$", 0x18, true, 0xdab01a1499f5969a );                       
        SDK_FIXED_SIZE( system_firmware_table_handler_t, 0x18 );                       
    };                                        
};
#include "magic/system_firmware_table_handler_t.end.hpp"
SDK_VERIFY( struct win::system_firmware_table_handler_t, 0x18 );
