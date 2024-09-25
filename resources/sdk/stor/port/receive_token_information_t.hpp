#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/receive_token_information_t.start.hpp"
namespace stor::port
{
    // [struct _RECEIVE_TOKEN_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct receive_token_information_t                
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 4> list_identifier;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ListIdentifier
        _m03 sdk::array<uint8_t, 4> allocation_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .AllocationLength
        _m04 uint8_t                control;            //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_RECEIVE_TOKEN_INFORMATION.$", 0x10, true, 0xccad9710befaffd4 );                  
        SDK_FIXED_SIZE( receive_token_information_t, 0x10 );                  
    };                                                
};
#include "magic/receive_token_information_t.end.hpp"
SDK_VERIFY( struct stor::port::receive_token_information_t, 0x10 );
