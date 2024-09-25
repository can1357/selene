#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/paramdata_t.start.hpp"
namespace tag
{
    // [struct tagPARAMDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct paramdata_t        
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 wchar_t* sz_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .szName
        _m01 uint16_t vt;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .vt
                              
        SDK_MAGIC_PROPERTIES( "tagPARAMDATA.$", 0x10, true, 0x9aea44f5b3bd5904 );        
        SDK_FIXED_SIZE( paramdata_t, 0x10 );        
    };                        
};
#include "magic/paramdata_t.end.hpp"
SDK_VERIFY( struct tag::paramdata_t, 0x10 );
