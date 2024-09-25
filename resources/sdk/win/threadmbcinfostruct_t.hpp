#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/threadmbcinfostruct_t.start.hpp"
namespace win
{
    // [struct threadmbcinfostruct]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct threadmbcinfostruct_t                   
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                         
        _m00 int32_t                  refcount;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .refcount
        _m01 int32_t                  mbcodepage;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .mbcodepage
        _m02 int32_t                  ismbcodepage;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ismbcodepage
        _m03 int32_t                  mblcid;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .mblcid
        _m04 sdk::array<uint16_t, 6>  mbulinfo;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .mbulinfo
        _m05 sdk::array<uint8_t, 257> mbctype;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .mbctype
        _m06 sdk::array<uint8_t, 256> mbcasemap;     //{ +0x011d    +0x011d    +0x011d    +0x011d    } | .mbcasemap
                                                   
        SDK_MAGIC_PROPERTIES( "threadmbcinfostruct.$", 0x220, true, 0xeabb5a3267ed84c7 );             
        SDK_FIXED_SIZE( threadmbcinfostruct_t, 0x220 );             
    };                                             
};
#include "magic/threadmbcinfostruct_t.end.hpp"
SDK_VERIFY( struct win::threadmbcinfostruct_t, 0x220 );
