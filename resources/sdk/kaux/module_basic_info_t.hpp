#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/module_basic_info_t.start.hpp"
namespace kaux
{
    // [struct _AUX_MODULE_BASIC_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct module_basic_info_t
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                    
        _m00 void* image_base;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase
                              
        SDK_MAGIC_PROPERTIES( "_AUX_MODULE_BASIC_INFO.$", 0x8, true, 0x156ccd17377c18f1 );           
        SDK_FIXED_SIZE( module_basic_info_t, 0x8 );           
    };                        
};
#include "magic/module_basic_info_t.end.hpp"
SDK_VERIFY( struct kaux::module_basic_info_t, 0x8 );
