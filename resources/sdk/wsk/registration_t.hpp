#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registration_t.start.hpp"
namespace wsk
{
    // [struct _WSK_REGISTRATION]
    // => WDK 10 (NV)
    //
    struct registration_t                           
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint64_t reserved_registration_state;    //{ +0x0000    } | .ReservedRegistrationState
        _m01 void*    reserved_registration_context;  //{ +0x0008    } | .ReservedRegistrationContext
        _m02 uint64_t reserved_registration_lock;     //{ +0x0010    } | .ReservedRegistrationLock
                                                    
        SDK_NONVOL_PROPERTIES( "_WSK_REGISTRATION.$", 0x0, false, 0xb47637b4472ca2ed );                              
        SDK_FIXED_SIZE( registration_t, 0x18 );                              
    };                                              
};
#include "magic/registration_t.end.hpp"
SDK_VERIFY( struct wsk::registration_t, 0x18 );
