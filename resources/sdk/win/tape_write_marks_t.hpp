#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_write_marks_t.start.hpp"
namespace win
{
    // [struct _TAPE_WRITE_MARKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_write_marks_t   
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t count;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 uint8_t  immediate;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Immediate
                                
        SDK_NONVOL_PROPERTIES( "_TAPE_WRITE_MARKS.$", 0xc, true, 0x8b27f968f3546a57 );          
        SDK_FIXED_SIZE( tape_write_marks_t, 0xc );          
    };                          
};
#include "magic/tape_write_marks_t.end.hpp"
SDK_VERIFY( struct win::tape_write_marks_t, 0xc );
