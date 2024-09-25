#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/alpha_runtime_function_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct alpha_runtime_function_entry_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t begin_address;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BeginAddress
        _m01 uint32_t end_address;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EndAddress
        _m02 uint32_t exception_handler;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExceptionHandler
        _m03 uint32_t handler_data;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HandlerData
        _m04 uint32_t prolog_end_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PrologEndAddress
                                         
        SDK_MAGIC_PROPERTIES( "_IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY.$", 0x14, true, 0xb592ee347184e193 );                   
        SDK_FIXED_SIZE( alpha_runtime_function_entry_t, 0x14 );                   
    };                                   
};
#include "magic/alpha_runtime_function_entry_t.end.hpp"
SDK_VERIFY( struct image::alpha_runtime_function_entry_t, 0x14 );
