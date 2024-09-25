#pragma once
#include <sdkgen/support_library.hpp>
#include "module_basic_info_t.hpp"

#include "magic/module_extended_info_t.start.hpp"
namespace kaux
{
    // [struct _AUX_MODULE_EXTENDED_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct module_extended_info_t                              
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 struct kaux::module_basic_info_t basic_info;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicInfo
        _m01 uint32_t                         image_size;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageSize
        _m02 uint16_t                         file_name_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FileNameOffset
        _m03 sdk::array<uint8_t, 256>         full_path_name;    //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .FullPathName
                                                               
        SDK_MAGIC_PROPERTIES( "_AUX_MODULE_EXTENDED_INFO.$", 0x110, true, 0xa8c7e6f9d5db80b9 );                 
        SDK_FIXED_SIZE( module_extended_info_t, 0x110 );                 
    };                                                         
};
#include "magic/module_extended_info_t.end.hpp"
SDK_VERIFY( struct kaux::module_extended_info_t, 0x110 );
