#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hmac_info_t.start.hpp"
namespace win
{
    // [struct _HMAC_Info]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hmac_info_t                
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t hash_algid;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashAlgid
        _m01 uint8_t* pb_inner_string;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbInnerString
        _m02 uint32_t cb_inner_string;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbInnerString
        _m03 uint8_t* pb_outer_string;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pbOuterString
        _m04 uint32_t cb_outer_string;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cbOuterString
                                      
        SDK_MAGIC_PROPERTIES( "_HMAC_Info.$", 0x28, true, 0xeb8e8d4a7c01ab12 );                
        SDK_FIXED_SIZE( hmac_info_t, 0x28 );                
    };                                
};
#include "magic/hmac_info_t.end.hpp"
SDK_VERIFY( struct win::hmac_info_t, 0x28 );
