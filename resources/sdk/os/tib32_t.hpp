#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tib32_t.start.hpp"
namespace os
{
    // [struct _NT_TIB32]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tib32_t                           
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t exception_list;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionList
        _m01 uint32_t stack_base;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .StackBase
        _m02 uint32_t stack_limit;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StackLimit
        _m03 uint32_t sub_system_tib;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SubSystemTib
        _m04 uint32_t fiber_data;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FiberData
        _m05 uint32_t version;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Version
        _m06 uint32_t arbitrary_user_pointer;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ArbitraryUserPointer
        _m07 uint32_t self;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Self
                                             
        SDK_NONVOL_PROPERTIES( "_NT_TIB32.$", 0x1c, true, 0xbdfe7d3b0dd38a20 );                       
        SDK_FIXED_SIZE( tib32_t, 0x1c );                       
    };                                       
};
#include "magic/tib32_t.end.hpp"
SDK_VERIFY( struct os::tib32_t, 0x1c );
