#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"

#include "magic/eof_wait_block_t.start.hpp"
namespace nt
{
    // [struct _EOF_WAIT_BLOCK]
    // => WDK 10 (NV)
    //
    struct eof_wait_block_t                     
    {                                           
        // WDK 10                               
        //                                      
        _m00 nt::list_entry_t    eof_wait_links;  //{ +0x0000    } | .EofWaitLinks
        _m01 struct nt::kevent_t event;           //{ +0x0010    } | .Event
                                                
        SDK_NONVOL_PROPERTIES( "_EOF_WAIT_BLOCK.$", 0x0, false, 0xec1f3039ad332288 );               
        SDK_FIXED_SIZE( eof_wait_block_t, 0x28 );               
    };                                          
};
#include "magic/eof_wait_block_t.end.hpp"
SDK_VERIFY( struct nt::eof_wait_block_t, 0x28 );
