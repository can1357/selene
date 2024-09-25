#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_method_property_t.start.hpp"
namespace win
{
    // [struct _MIDL_METHOD_PROPERTY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_method_property_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint64_t value;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                 
        SDK_MAGIC_PROPERTIES( "_MIDL_METHOD_PROPERTY.$", 0x10, true, 0xa39907010cb072c1 );      
        SDK_FIXED_SIZE( midl_method_property_t, 0x10 );      
    };                           
};
#include "magic/midl_method_property_t.end.hpp"
SDK_VERIFY( struct win::midl_method_property_t, 0x10 );
