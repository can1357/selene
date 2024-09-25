#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/serialkeysw_t.start.hpp"
namespace tag
{
    // [struct tagSERIALKEYSW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct serialkeysw_t               
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 wchar_t* lpsz_active_port;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszActivePort
        _m03 wchar_t* lpsz_port;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpszPort
        _m04 uint32_t i_baud_rate;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .iBaudRate
        _m05 uint32_t i_port_state;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .iPortState
        _m06 uint32_t i_active;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .iActive
                                       
        SDK_MAGIC_PROPERTIES( "tagSERIALKEYSW.$", 0x28, true, 0x38808287f5e5ed14 );                 
        SDK_FIXED_SIZE( serialkeysw_t, 0x28 );                 
    };                                 
};
#include "magic/serialkeysw_t.end.hpp"
SDK_VERIFY( struct tag::serialkeysw_t, 0x28 );
