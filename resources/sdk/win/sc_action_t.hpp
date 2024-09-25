#pragma once
#include <sdkgen/support_library.hpp>
#include "sc_action_type_t.hpp"

#include "magic/sc_action_t.start.hpp"
namespace win
{
    // [struct _SC_ACTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sc_action_t                        
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                    
        _m00 enum win::sc_action_type_t type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                   delay;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Delay
                                              
        SDK_MAGIC_PROPERTIES( "_SC_ACTION.$", 0x8, true, 0xe0c1b3e38ffed388 );      
        SDK_FIXED_SIZE( sc_action_t, 0x8 );      
    };                                        
};
#include "magic/sc_action_t.end.hpp"
SDK_VERIFY( struct win::sc_action_t, 0x8 );
