#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_redirection_support_t.start.hpp"
namespace stor::port
{
    // [union _RAID_REDIRECTION_SUPPORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union raid_redirection_support_t 
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                           
        _m00 uint1_t   dpc;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Dpc
        _m01 uint1_t   interrupt;      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Interrupt
        _m02 varuint_t message_count;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MessageCount
        _m03 uint16_t  as_ushort;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort
                                     
        SDK_MAGIC_PROPERTIES( "_RAID_REDIRECTION_SUPPORT.$", 0x2, true, 0x69f30e97dd961108 );              
        SDK_FIXED_SIZE( raid_redirection_support_t, 0x2 );              
    };                               
};
#include "magic/raid_redirection_support_t.end.hpp"
SDK_VERIFY( union stor::port::raid_redirection_support_t, 0x2 );
