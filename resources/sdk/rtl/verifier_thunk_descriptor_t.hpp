#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_thunk_descriptor_t.start.hpp"
namespace rtl
{
    // [struct _RTL_VERIFIER_THUNK_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_thunk_descriptor_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                           
        _m00 char* thunk_name;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThunkName
        _m01 void* thunk_old_address;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThunkOldAddress
        _m02 void* thunk_new_address;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThunkNewAddress
                                      
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_THUNK_DESCRIPTOR.$", 0x18, true, 0x663db47d09f5b730 );                  
        SDK_FIXED_SIZE( verifier_thunk_descriptor_t, 0x18 );                  
    };                                
};
#include "magic/verifier_thunk_descriptor_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_thunk_descriptor_t, 0x18 );
