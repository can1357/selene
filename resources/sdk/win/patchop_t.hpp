#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/patchop_t.start.hpp"
namespace win
{
    // [struct _PATCHOP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct patchop_t                            
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                      
        _m00 uint32_t            dw_opcode;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwOpcode
        _m01 uint32_t            dw_next_opcode;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwNextOpcode
        _m02 sdk::array<uint8_t> data;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .data
                                                
        SDK_MAGIC_PROPERTIES( "_PATCHOP.$", 0x8, true, 0xe87919895cd451c4 );               
        SDK_FIXED_SIZE( patchop_t, 0x8 );               
    };                                          
};
#include "magic/patchop_t.end.hpp"
SDK_VERIFY( struct win::patchop_t, 0x8 );
