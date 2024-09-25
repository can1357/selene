#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/codebasehold_t.start.hpp"
namespace tag
{
    // [struct _tagCODEBASEHOLD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct codebasehold_t           
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 wchar_t* sz_dist_unit;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szDistUnit
        _m02 wchar_t* sz_code_base;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .szCodeBase
        _m03 uint32_t dw_version_ms;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwVersionMS
        _m04 uint32_t dw_version_ls;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwVersionLS
        _m05 uint32_t dw_style;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwStyle
                                    
        SDK_MAGIC_PROPERTIES( "_tagCODEBASEHOLD.$", 0x28, true, 0xcce5c9449a60dbef );              
        SDK_FIXED_SIZE( codebasehold_t, 0x28 );              
    };                              
};
#include "magic/codebasehold_t.end.hpp"
SDK_VERIFY( struct tag::codebasehold_t, 0x28 );
