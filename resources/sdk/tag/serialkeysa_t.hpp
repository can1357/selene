#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/serialkeysa_t.start.hpp"
namespace tag
{
    // [struct tagSERIALKEYSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct serialkeysa_t               
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 char*    lpsz_active_port;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszActivePort
        _m03 char*    lpsz_port;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpszPort
        _m04 uint32_t i_baud_rate;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .iBaudRate
        _m05 uint32_t i_port_state;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .iPortState
        _m06 uint32_t i_active;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .iActive
                                       
        SDK_MAGIC_PROPERTIES( "tagSERIALKEYSA.$", 0x28, true, 0xaf90aa209c26e2a0 );                 
        SDK_FIXED_SIZE( serialkeysa_t, 0x28 );                 
    };                                 
};
#include "magic/serialkeysa_t.end.hpp"
SDK_VERIFY( struct tag::serialkeysa_t, 0x28 );
