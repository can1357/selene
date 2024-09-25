#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/callback_registration_t.start.hpp"
namespace ob
{
    struct operation_registration_t;

    // [struct _OB_CALLBACK_REGISTRATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct callback_registration_t                                             
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                     
        _m00 uint16_t                             version;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                             operation_registration_count;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .OperationRegistrationCount
        _m02 nt::unicode_view                     altitude;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Altitude
        _m03 void*                                registration_context;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .RegistrationContext
        _m04 struct ob::operation_registration_t* operation_registration;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .OperationRegistration
                                                                               
        SDK_NONVOL_PROPERTIES( "_OB_CALLBACK_REGISTRATION.$", 0x28, true, 0x99a0a5486b2b55b0 );                             
        SDK_FIXED_SIZE( callback_registration_t, 0x28 );                             
    };                                                                         
};
#include "magic/callback_registration_t.end.hpp"
SDK_VERIFY( struct ob::callback_registration_t, 0x28 );
