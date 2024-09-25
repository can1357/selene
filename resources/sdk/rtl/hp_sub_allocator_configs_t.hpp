#pragma once
#include <sdkgen/support_library.hpp>
#include "hp_vs_config_t.hpp"
#include "hp_lfh_config_t.hpp"

#include "magic/hp_sub_allocator_configs_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HP_SUB_ALLOCATOR_CONFIGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_sub_allocator_configs_t                
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                           
        _m00 struct rtl::hp_lfh_config_t lfh_configs;  //{ +0x0000    +0x0000    +0x0000    } | .LfhConfigs
        _m01 struct rtl::hp_vs_config_t  vs_configs;   //{ +0x0004    +0x0004    +0x0004    } | .VsConfigs
                                                     
        SDK_MAGIC_PROPERTIES( "_RTL_HP_SUB_ALLOCATOR_CONFIGS.$", 0x8, true, 0x706be39770a56375 );            
        SDK_FIXED_SIZE( hp_sub_allocator_configs_t, 0x8 );            
    };                                               
};
#include "magic/hp_sub_allocator_configs_t.end.hpp"
SDK_VERIFY( struct rtl::hp_sub_allocator_configs_t, 0x8 );
