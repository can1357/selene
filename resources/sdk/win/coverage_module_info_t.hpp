#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_module_info_t.start.hpp"
namespace win
{
    // [struct _COVERAGE_MODULE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_module_info_t                         
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               module_info_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ModuleInfoSize
        _m01 uint32_t               is_binary_loaded;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IsBinaryLoaded
        _m02 nt::unicode_view       module_path_name;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ModulePathName
        _m03 uint32_t               coverage_section_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CoverageSectionSize
        _m04 sdk::array<uint8_t, 1> coverage_section;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CoverageSection
                                                          
        SDK_MAGIC_PROPERTIES( "_COVERAGE_MODULE_INFO.$", 0x20, true, 0x88e22f6e8622496d );                      
        SDK_FIXED_SIZE( coverage_module_info_t, 0x20 );                      
    };                                                    
};
#include "magic/coverage_module_info_t.end.hpp"
SDK_VERIFY( struct win::coverage_module_info_t, 0x20 );
