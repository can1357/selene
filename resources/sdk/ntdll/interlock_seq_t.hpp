#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interlock_seq_t.start.hpp"
namespace ntdll
{
    // [struct _INTERLOCK_SEQ]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interlock_seq_t   
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t depth;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Depth
        _m01 uint15_t hint;    //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Hint
        _m02 uint1_t  lock;    //{ +0x0002@15 +0x0002@15 +0x0002@15 +0x0002@15 } | .Lock
        _m03 uint16_t hint16;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Hint16
        _m04 int32_t  exchg;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Exchg
                             
        SDK_MAGIC_PROPERTIES( "_INTERLOCK_SEQ.$", 0x4, true, 0xf8b0e6088d87ad39 );       
        SDK_FIXED_SIZE( interlock_seq_t, 0x4 );       
    };                       
};
#include "magic/interlock_seq_t.end.hpp"
SDK_VERIFY( struct ntdll::interlock_seq_t, 0x4 );
