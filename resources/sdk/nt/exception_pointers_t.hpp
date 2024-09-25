#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exception_pointers_t.start.hpp"
namespace nt
{
    struct exception_record_t;

    // [struct _EXCEPTION_POINTERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exception_pointers_t                              
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 struct nt::exception_record_t* exception_record;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionRecord
        _m01 nt::context*                   context_record;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextRecord
                                                             
        SDK_NONVOL_PROPERTIES( "_EXCEPTION_POINTERS.$", 0x10, true, 0xe878acc1b291e40b );                 
        SDK_FIXED_SIZE( exception_pointers_t, 0x10 );                 
    };                                                       
};
#include "magic/exception_pointers_t.end.hpp"
SDK_VERIFY( struct nt::exception_pointers_t, 0x10 );
