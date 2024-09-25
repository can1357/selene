#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_bind_context_t.hpp"
#include "ndr64_bind_generic_t.hpp"
#include "ndr64_bind_primitive_t.hpp"

#include "magic/ndr64_bindings_t.start.hpp"
namespace win
{
    // [union _NDR64_BINDINGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union ndr64_bindings_t                                
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                
        _m00 struct win::ndr64_bind_primitive_t primitive;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Primitive
        _m01 struct win::ndr64_bind_generic_t   generic;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Generic
        _m02 struct win::ndr64_bind_context_t   context;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context
                                                          
        SDK_MAGIC_PROPERTIES( "_NDR64_BINDINGS.$", 0x6, true, 0x38712b3e74b74f5b );          
        SDK_FIXED_SIZE( ndr64_bindings_t, 0x6 );          
    };                                                    
};
#include "magic/ndr64_bindings_t.end.hpp"
SDK_VERIFY( union win::ndr64_bindings_t, 0x6 );
