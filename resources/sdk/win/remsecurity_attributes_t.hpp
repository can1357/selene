#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remsecurity_attributes_t.start.hpp"
namespace win
{
    // [struct _REMSECURITY_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct remsecurity_attributes_t          
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t n_length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .nLength
        _m01 uint32_t lp_security_descriptor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .lpSecurityDescriptor
        _m02 int32_t  b_inherit_handle;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bInheritHandle
                                             
        SDK_MAGIC_PROPERTIES( "_REMSECURITY_ATTRIBUTES.$", 0xc, true, 0x9612b7259655c254 );                       
        SDK_FIXED_SIZE( remsecurity_attributes_t, 0xc );                       
    };                                       
};
#include "magic/remsecurity_attributes_t.end.hpp"
SDK_VERIFY( struct win::remsecurity_attributes_t, 0xc );
