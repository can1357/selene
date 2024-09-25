#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/attrinfo_t.start.hpp"
namespace tag
{
    // [struct tagATTRINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct attrinfo_t           
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint16_t t_attr_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tAttrID
        _m01 uint32_t dw_flags;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint64_t ull_attr;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ullAttr
        _m03 uint32_t dw_attr;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwAttr
        _m04 wchar_t* lp_attr;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpAttr
                                
        SDK_MAGIC_PROPERTIES( "tagATTRINFO.$", 0x10, true, 0xd3dafc07f706074d );          
        SDK_FIXED_SIZE( attrinfo_t, 0x10 );          
    };                          
};
#include "magic/attrinfo_t.end.hpp"
SDK_VERIFY( struct tag::attrinfo_t, 0x10 );
