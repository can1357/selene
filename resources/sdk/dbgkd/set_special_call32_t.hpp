#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_special_call32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_SET_SPECIAL_CALL32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_special_call32_t    
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t special_call;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpecialCall
                                   
        SDK_MAGIC_PROPERTIES( "_DBGKD_SET_SPECIAL_CALL32.$", 0x4, true, 0xe54994b89dbb6664 );             
        SDK_FIXED_SIZE( set_special_call32_t, 0x4 );             
    };                             
};
#include "magic/set_special_call32_t.end.hpp"
SDK_VERIFY( struct dbgkd::set_special_call32_t, 0x4 );
