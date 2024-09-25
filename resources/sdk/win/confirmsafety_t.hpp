#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/confirmsafety_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [struct CONFIRMSAFETY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct confirmsafety_t                     
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                     
        _m00 struct nt::guid_t        clsid;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clsid
        _m01 struct win::i_unknown_t* p_unk;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pUnk
        _m02 uint32_t                 dw_flags;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwFlags
                                               
        SDK_MAGIC_PROPERTIES( "CONFIRMSAFETY.$", 0x20, true, 0x1ab08a3f8505a3a8 );         
        SDK_FIXED_SIZE( confirmsafety_t, 0x20 );         
    };                                         
};
#include "magic/confirmsafety_t.end.hpp"
SDK_VERIFY( struct win::confirmsafety_t, 0x20 );
