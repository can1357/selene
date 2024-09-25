#pragma once
#include <sdkgen/support_library.hpp>
#include "binary_param_t.hpp"
#include "extended_error_param_types_t.hpp"

#include "magic/rpc_ee_info_param_t.start.hpp"
namespace tag
{
    // [struct tagRPC_EE_INFO_PARAM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rpc_ee_info_param_t                                     
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                         
        _m00 enum tag::extended_error_param_types_t parameter_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ParameterType
        _m01 char*                                  ansi_string;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AnsiString
        _m02 wchar_t*                               unicode_string;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UnicodeString
        _m03 int32_t                                l_val;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LVal
        _m04 int16_t                                s_val;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SVal
        _m05 uint64_t                               p_val;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PVal
        _m06 struct tag::binary_param_t             b_val;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BVal
                                                                   
        SDK_MAGIC_PROPERTIES( "tagRPC_EE_INFO_PARAM.$", 0x18, true, 0xfa7e3aff6b7a1847 );               
        SDK_FIXED_SIZE( rpc_ee_info_param_t, 0x18 );               
    };                                                             
};
#include "magic/rpc_ee_info_param_t.end.hpp"
SDK_VERIFY( struct tag::rpc_ee_info_param_t, 0x18 );
