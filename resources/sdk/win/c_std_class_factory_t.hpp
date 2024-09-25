#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_std_class_factory_t.start.hpp"
namespace win
{
    // [class CStdClassFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_std_class_factory_t
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t c_refs;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
        _m01 uint32_t dw_index;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._dwIndex
                               
        SDK_MAGIC_PROPERTIES( "CStdClassFactory.$", 0x10, true, 0x19b076d55e0a4909 );         
        SDK_FIXED_SIZE( c_std_class_factory_t, 0x10 );         
    };                         
};
#include "magic/c_std_class_factory_t.end.hpp"
SDK_VERIFY( class win::c_std_class_factory_t, 0x10 );
