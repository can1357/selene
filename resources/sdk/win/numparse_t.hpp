#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/numparse_t.start.hpp"
namespace win
{
    // [struct NUMPARSE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct numparse_t              
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 int32_t  c_dig;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cDig
        _m01 uint32_t dw_in_flags;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwInFlags
        _m02 uint32_t dw_out_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwOutFlags
        _m03 int32_t  cch_used;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cchUsed
        _m04 int32_t  n_base_shift;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .nBaseShift
        _m05 int32_t  n_pwr10;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .nPwr10
                                   
        SDK_MAGIC_PROPERTIES( "NUMPARSE.$", 0x18, true, 0xc469c3132ec017a4 );             
        SDK_FIXED_SIZE( numparse_t, 0x18 );             
    };                             
};
#include "magic/numparse_t.end.hpp"
SDK_VERIFY( struct win::numparse_t, 0x18 );
