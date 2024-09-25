#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_verifier_thunk_pairs_t.start.hpp"
namespace win
{
    // [struct _DRIVER_VERIFIER_THUNK_PAIRS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_verifier_thunk_pairs_t                      
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 sdk::function<uint64_t(void*)>* pristine_routine;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PristineRoutine
        _m01 sdk::function<uint64_t(void*)>* new_routine;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NewRoutine
                                                              
        SDK_NONVOL_PROPERTIES( "_DRIVER_VERIFIER_THUNK_PAIRS.$", 0x10, true, 0x9f6ee6f8c2f4e17b );                 
        SDK_FIXED_SIZE( driver_verifier_thunk_pairs_t, 0x10 );                 
    };                                                        
};
#include "magic/driver_verifier_thunk_pairs_t.end.hpp"
SDK_VERIFY( struct win::driver_verifier_thunk_pairs_t, 0x10 );
