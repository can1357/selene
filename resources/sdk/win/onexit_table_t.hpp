#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/onexit_table_t.start.hpp"
namespace win
{
    // [struct _onexit_table_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct onexit_table_t                  
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 sdk::function<void()>** first;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._first
        _m01 sdk::function<void()>** last;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._last
        _m02 sdk::function<void()>** end;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._end
                                           
        SDK_MAGIC_PROPERTIES( "_onexit_table_t.$", 0x18, true, 0x63945726fd392ca6 );      
        SDK_FIXED_SIZE( onexit_table_t, 0x18 );      
    };                                     
};
#include "magic/onexit_table_t.end.hpp"
SDK_VERIFY( struct win::onexit_table_t, 0x18 );
