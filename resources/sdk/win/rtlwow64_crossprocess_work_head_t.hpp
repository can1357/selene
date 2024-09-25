#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rtlwow64_crossprocess_work_head_t.start.hpp"
namespace win
{
    // [struct RTLWOW64_CROSSPROCESS_WORK_HEAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rtlwow64_crossprocess_work_head_t
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 volatile uint31_t first;         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .First
        _m01 volatile uint1_t  heavy_flush;   //{ +0x0000@31 +0x0000@31 +0x0000@31 } | .HeavyFlush
        _m02 uint32_t          sequence;      //{ +0x0004    +0x0004    +0x0004    } | .Sequence
        _m03 volatile int64_t  value;         //{ +0x0000    +0x0000    +0x0000    } | .Value
                                            
        SDK_MAGIC_PROPERTIES( "RTLWOW64_CROSSPROCESS_WORK_HEAD.$", 0x8, true, 0xe751d583320518f7 );            
        SDK_FIXED_SIZE( rtlwow64_crossprocess_work_head_t, 0x8 );            
    };                                      
};
#include "magic/rtlwow64_crossprocess_work_head_t.end.hpp"
SDK_VERIFY( struct win::rtlwow64_crossprocess_work_head_t, 0x8 );
