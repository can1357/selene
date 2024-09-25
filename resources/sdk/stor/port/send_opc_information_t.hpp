#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/send_opc_information_t.start.hpp"
namespace stor::port
{
    // [struct _SEND_OPC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct send_opc_information_t                         
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                do_opc;                 //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .DoOpc
        _m02 uint1_t                exclude0;               //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Exclude0
        _m03 uint1_t                exclude1;               //{ +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  +0x0002@1  } | .Exclude1
        _m04 sdk::array<uint8_t, 2> parameter_list_length;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .ParameterListLength
                                                          
        SDK_NONVOL_PROPERTIES( "_SEND_OPC_INFORMATION.$", 0xa, true, 0x83f02283ae028e5d );                      
        SDK_FIXED_SIZE( send_opc_information_t, 0xa );                      
    };                                                    
};
#include "magic/send_opc_information_t.end.hpp"
SDK_VERIFY( struct stor::port::send_opc_information_t, 0xa );
