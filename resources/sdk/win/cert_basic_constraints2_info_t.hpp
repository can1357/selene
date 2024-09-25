#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_basic_constraints2_info_t.start.hpp"
namespace win
{
    // [struct _CERT_BASIC_CONSTRAINTS2_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_basic_constraints2_info_t    
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 int32_t  f_ca;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fCA
        _m01 int32_t  f_path_len_constraint;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fPathLenConstraint
        _m02 uint32_t dw_path_len_constraint;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwPathLenConstraint
                                             
        SDK_MAGIC_PROPERTIES( "_CERT_BASIC_CONSTRAINTS2_INFO.$", 0xc, true, 0x46eca8c7bb076a87 );                       
        SDK_FIXED_SIZE( cert_basic_constraints2_info_t, 0xc );                       
    };                                       
};
#include "magic/cert_basic_constraints2_info_t.end.hpp"
SDK_VERIFY( struct win::cert_basic_constraints2_info_t, 0xc );
