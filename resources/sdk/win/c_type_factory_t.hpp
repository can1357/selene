#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_type_factory_t.start.hpp"
namespace win
{
    // [class CTypeFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_type_factory_t  
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 int32_t c_refs;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cRefs
                            
        SDK_MAGIC_PROPERTIES( "CTypeFactory.$", 0x18, true, 0xce18b5307150c5d );       
        SDK_FIXED_SIZE( c_type_factory_t, 0x18 );       
    };                      
};
#include "magic/c_type_factory_t.end.hpp"
SDK_VERIFY( class win::c_type_factory_t, 0x18 );
