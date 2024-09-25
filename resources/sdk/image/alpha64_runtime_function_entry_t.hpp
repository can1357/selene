#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/alpha64_runtime_function_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct alpha64_runtime_function_entry_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint64_t begin_address;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BeginAddress
        _m01 uint64_t end_address;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndAddress
        _m02 uint64_t exception_handler;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExceptionHandler
        _m03 uint64_t handler_data;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HandlerData
        _m04 uint64_t prolog_end_address;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PrologEndAddress
                                           
        SDK_MAGIC_PROPERTIES( "_IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY.$", 0x28, true, 0xb6fa37d4b363ed5e );                   
        SDK_FIXED_SIZE( alpha64_runtime_function_entry_t, 0x28 );                   
    };                                     
};
#include "magic/alpha64_runtime_function_entry_t.end.hpp"
SDK_VERIFY( struct image::alpha64_runtime_function_entry_t, 0x28 );
