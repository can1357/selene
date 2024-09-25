#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_include_module_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_INCLUDE_MODULE_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_include_module_callback_t
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t base_of_image;           //{ +0x0000    +0x0000    +0x0000    } | .BaseOfImage
                                             
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_INCLUDE_MODULE_CALLBACK.$", 0x8, true, 0x19318ab6f4613026 );              
        SDK_FIXED_SIZE( minidump_include_module_callback_t, 0x8 );              
    };                                       
};
#include "magic/minidump_include_module_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_include_module_callback_t, 0x8 );
