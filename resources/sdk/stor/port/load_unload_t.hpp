#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_unload_t.start.hpp"
namespace stor::port
{
    // [struct _LOAD_UNLOAD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct load_unload_t            
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint8_t operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t immediate;       //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint3_t lun;             //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m03 uint1_t start;           //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Start
        _m04 uint1_t load_eject;      //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .LoadEject
        _m05 uint8_t slot;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Slot
                                    
        SDK_NONVOL_PROPERTIES( "_LOAD_UNLOAD.$", 0xc, true, 0xb747cb327574168b );               
        SDK_FIXED_SIZE( load_unload_t, 0xc );               
    };                              
};
#include "magic/load_unload_t.end.hpp"
SDK_VERIFY( struct stor::port::load_unload_t, 0xc );
