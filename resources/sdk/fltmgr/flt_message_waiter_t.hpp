#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_message_waiter_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_MESSAGE_WAITER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_message_waiter_t
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                               
        SDK_MAGIC_PROPERTIES( "_FLT_MESSAGE_WAITER.$", 0x4, true, 0xfdc38f8d4485337e );      
        SDK_FIXED_SIZE( flt_message_waiter_t, 0x4 );      
    };                         
};
#include "magic/flt_message_waiter_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_message_waiter_t, 0x4 );
