#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/attributes_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct attributes_t                      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t n_length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .nLength
        _m01 void*    lp_security_descriptor;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpSecurityDescriptor
        _m02 int32_t  b_inherit_handle;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bInheritHandle
                                             
        SDK_MAGIC_PROPERTIES( "_SECURITY_ATTRIBUTES.$", 0x18, true, 0x78e2514841094e1e );                       
        SDK_FIXED_SIZE( attributes_t, 0x18 );                       
    };                                       
};
#include "magic/attributes_t.end.hpp"
SDK_VERIFY( struct sec::attributes_t, 0x18 );
