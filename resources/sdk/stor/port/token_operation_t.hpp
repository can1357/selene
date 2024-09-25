#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_operation_t.start.hpp"
namespace stor::port
{
    // [struct _TOKEN_OPERATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_operation_t                              
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;         //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 4> list_identifier;        //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .ListIdentifier
        _m03 sdk::array<uint8_t, 4> parameter_list_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .ParameterListLength
        _m04 uint5_t                group_number;           //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .GroupNumber
        _m05 uint8_t                control;                //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                          
        SDK_NONVOL_PROPERTIES( "_TOKEN_OPERATION.$", 0x10, true, 0xa7c1928e171c6c9c );                      
        SDK_FIXED_SIZE( token_operation_t, 0x10 );                      
    };                                                    
};
#include "magic/token_operation_t.end.hpp"
SDK_VERIFY( struct stor::port::token_operation_t, 0x10 );
