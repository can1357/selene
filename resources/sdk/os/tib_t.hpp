#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct exception_registration_record_t; }

#include "magic/tib_t.start.hpp"
namespace os
{
    struct tib_t;

    // [struct _NT_TIB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tib_t                                                                
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m00 struct nt::exception_registration_record_t* exception_list;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionList
        _m01 void*                                       stack_base;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StackBase
        _m02 void*                                       stack_limit;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .StackLimit
        _m03 void*                                       sub_system_tib;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SubSystemTib
        _m04 void*                                       fiber_data;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FiberData
        _m05 uint32_t                                    version;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Version
        _m06 void*                                       arbitrary_user_pointer;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ArbitraryUserPointer
        _m07 struct os::tib_t*                           self;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Self
                                                                                
        SDK_NONVOL_PROPERTIES( "_NT_TIB.$", 0x38, true, 0x12ee6b7bf61a30cc );                       
        SDK_FIXED_SIZE( tib_t, 0x38 );                                          
    };                                                                          
};
#include "magic/tib_t.end.hpp"
SDK_VERIFY( struct os::tib_t, 0x38 );
