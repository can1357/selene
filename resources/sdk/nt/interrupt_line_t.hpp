#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interrupt_line_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_LINE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_line_t   
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t unit_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UnitId
        _m01 int32_t  line;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Line
                              
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_LINE.$", 0x8, true, 0xf9cd40f3d69e0a28 );        
        SDK_FIXED_SIZE( interrupt_line_t, 0x8 );        
    };                        
};
#include "magic/interrupt_line_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_line_t, 0x8 );
