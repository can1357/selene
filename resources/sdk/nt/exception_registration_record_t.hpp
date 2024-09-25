#pragma once
#include <sdkgen/support_library.hpp>
#include "exception_disposition_t.hpp"

#include "magic/exception_registration_record_t.start.hpp"
namespace nt
{
    struct exception_record_t;
    struct exception_registration_record_t;

    // [struct _EXCEPTION_REGISTRATION_RECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exception_registration_record_t                       
    {                                                            
        using pexception_routine_t = sdk::function<enum nt::exception_disposition_t(struct nt::exception_record_t*, void*, nt::context*, void*)>*;        
                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                       
        _m00 struct nt::exception_registration_record_t* next;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 pexception_routine_t                        handler;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Handler
                                                                 
        SDK_NONVOL_PROPERTIES( "_EXCEPTION_REGISTRATION_RECORD.$", 0x10, true, 0xe9781df329babf02 );        
        SDK_FIXED_SIZE( exception_registration_record_t, 0x10 );        
    };                                                           
};
#include "magic/exception_registration_record_t.end.hpp"
SDK_VERIFY( struct nt::exception_registration_record_t, 0x10 );
