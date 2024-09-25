#pragma once
#include <sdkgen/support_library.hpp>
#include "system_firmware_table_action_t.hpp"

#include "magic/system_firmware_table_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FIRMWARE_TABLE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct system_firmware_table_information_t                            
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 uint32_t                                 provider_signature;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ProviderSignature
        _m01 enum win::system_firmware_table_action_t action;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Action
        _m02 uint32_t                                 table_id;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TableID
        _m03 uint32_t                                 table_buffer_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .TableBufferLength
        _m04 sdk::array<uint8_t, 1>                   table_buffer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TableBuffer
                                                                          
        SDK_NONVOL_PROPERTIES( "_SYSTEM_FIRMWARE_TABLE_INFORMATION.$", 0x14, true, 0x825feaa502f35799 );                    
        SDK_FIXED_SIZE( system_firmware_table_information_t, 0x14 );                    
    };                                                                    
};
#include "magic/system_firmware_table_information_t.end.hpp"
SDK_VERIFY( struct win::system_firmware_table_information_t, 0x14 );
