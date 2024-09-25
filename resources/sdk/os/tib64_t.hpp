#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tib64_t.start.hpp"
namespace os
{
    // [struct _NT_TIB64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tib64_t                           
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t exception_list;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionList
        _m01 uint64_t stack_base;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StackBase
        _m02 uint64_t stack_limit;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .StackLimit
        _m03 uint64_t sub_system_tib;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SubSystemTib
        _m04 uint64_t fiber_data;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FiberData
        _m05 uint32_t version;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Version
        _m06 uint64_t arbitrary_user_pointer;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ArbitraryUserPointer
        _m07 uint64_t self;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Self
                                             
        SDK_NONVOL_PROPERTIES( "_NT_TIB64.$", 0x38, true, 0xcfc6364444e0fbc0 );                       
        SDK_FIXED_SIZE( tib64_t, 0x38 );                       
    };                                       
};
#include "magic/tib64_t.end.hpp"
SDK_VERIFY( struct os::tib64_t, 0x38 );
