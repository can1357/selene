#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write16_t.start.hpp"
namespace stor::port
{
    // [struct _WRITE16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct write16_t                                  
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                force_unit_access;  //{ +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  } | .ForceUnitAccess
        _m02 uint1_t                disable_page_out;   //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .DisablePageOut
        _m03 uint3_t                write_protect;      //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .WriteProtect
        _m04 sdk::array<uint8_t, 8> logical_block;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlock
        _m05 sdk::array<uint8_t, 4> transfer_length;    //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .TransferLength
        _m06 uint1_t                streaming;          //{ +0x000e@7  +0x000e@7  +0x000e@7  +0x000e@7  +0x000e@7  } | .Streaming
        _m07 uint8_t                control;            //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_WRITE16.$", 0x10, true, 0x9da2e84f60a560f9 );                  
        SDK_FIXED_SIZE( write16_t, 0x10 );                  
    };                                                
};
#include "magic/write16_t.end.hpp"
SDK_VERIFY( struct stor::port::write16_t, 0x10 );
