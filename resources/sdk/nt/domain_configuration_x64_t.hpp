#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/domain_configuration_x64_t.start.hpp"
namespace nt
{
    // [struct _DOMAIN_CONFIGURATION_X64]
    // => Windows 11
    //
    struct domain_configuration_x64_t            
    {                                            
        // Windows 11                            
        //                                       
        _m00 int64_t first_level_page_table_root;  //{ +0x0000    } | .FirstLevelPageTableRoot
        _m01 uint8_t translation_enabled;          //{ +0x0008    } | .TranslationEnabled
                                                 
        SDK_MAGIC_PROPERTIES( "_DOMAIN_CONFIGURATION_X64.$", 0x0, false, 0xe70bebfa638c1181 );                            
        SDK_FIXED_SIZE( domain_configuration_x64_t, 0x10 );                            
    };                                           
};
#include "magic/domain_configuration_x64_t.end.hpp"
SDK_VERIFY( struct nt::domain_configuration_x64_t, 0x10 );
