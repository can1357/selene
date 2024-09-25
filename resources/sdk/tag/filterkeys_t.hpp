#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filterkeys_t.start.hpp"
namespace tag
{
    // [struct tagFILTERKEYS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filterkeys_t              
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t i_wait_m_sec;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iWaitMSec
        _m03 uint32_t i_delay_m_sec;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iDelayMSec
        _m04 uint32_t i_repeat_m_sec;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iRepeatMSec
        _m05 uint32_t i_bounce_m_sec;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .iBounceMSec
                                     
        SDK_MAGIC_PROPERTIES( "tagFILTERKEYS.$", 0x18, true, 0xa80cece509e101e8 );               
        SDK_FIXED_SIZE( filterkeys_t, 0x18 );               
    };                               
};
#include "magic/filterkeys_t.end.hpp"
SDK_VERIFY( struct tag::filterkeys_t, 0x18 );
