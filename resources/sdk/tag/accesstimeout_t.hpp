#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/accesstimeout_t.start.hpp"
namespace tag
{
    // [struct tagACCESSTIMEOUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct accesstimeout_t             
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t i_time_out_m_sec;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iTimeOutMSec
                                       
        SDK_MAGIC_PROPERTIES( "tagACCESSTIMEOUT.$", 0xc, true, 0x37061864c2566fc2 );                 
        SDK_FIXED_SIZE( accesstimeout_t, 0xc );                 
    };                                 
};
#include "magic/accesstimeout_t.end.hpp"
SDK_VERIFY( struct tag::accesstimeout_t, 0xc );
