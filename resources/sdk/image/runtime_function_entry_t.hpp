#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/runtime_function_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_RUNTIME_FUNCTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct runtime_function_entry_t       
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t begin_address;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BeginAddress
        _m01 uint32_t end_address;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EndAddress
        _m02 uint32_t unwind_info_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UnwindInfoAddress
        _m03 uint32_t unwind_data;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UnwindData
                                          
        SDK_MAGIC_PROPERTIES( "_IMAGE_RUNTIME_FUNCTION_ENTRY.$", 0xc, true, 0x38f4825e08cd3b68 );                    
        SDK_FIXED_SIZE( runtime_function_entry_t, 0xc );                    
    };                                    
};
#include "magic/runtime_function_entry_t.end.hpp"
SDK_VERIFY( struct image::runtime_function_entry_t, 0xc );
