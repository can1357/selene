#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/propspec_t.start.hpp"
namespace tag
{
    // [struct tagPROPSPEC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct propspec_t         
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t ul_kind;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulKind
        _m01 uint32_t propid;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .propid
        _m02 wchar_t* lpwstr;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpwstr
                              
        SDK_MAGIC_PROPERTIES( "tagPROPSPEC.$", 0x10, true, 0xa48af31a513a801b );        
        SDK_FIXED_SIZE( propspec_t, 0x10 );        
    };                        
};
#include "magic/propspec_t.end.hpp"
SDK_VERIFY( struct tag::propspec_t, 0x10 );
