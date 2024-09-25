#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntvdm_flags_t.start.hpp"
namespace win
{
    // [struct _NTVDM_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ntvdm_flags_t                       
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t dw_wow_compat_flags;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwWOWCompatFlags
        _m01 uint32_t dw_wow_compat_flags_ex;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwWOWCompatFlagsEx
        _m02 uint32_t dw_user_wow_compat_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwUserWOWCompatFlags
        _m03 uint32_t dw_wow_compat_flags2;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwWOWCompatFlags2
        _m04 uint32_t dw_wow_compat_flags_fe;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwWOWCompatFlagsFE
        _m05 uint32_t dw_flags_info_size;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFlagsInfoSize
        _m06 void*    p_flags_info;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pFlagsInfo
                                               
        SDK_MAGIC_PROPERTIES( "_NTVDM_FLAGS.$", 0x20, true, 0x868798aea869d802 );                         
        SDK_FIXED_SIZE( ntvdm_flags_t, 0x20 );                         
    };                                         
};
#include "magic/ntvdm_flags_t.end.hpp"
SDK_VERIFY( struct win::ntvdm_flags_t, 0x20 );
