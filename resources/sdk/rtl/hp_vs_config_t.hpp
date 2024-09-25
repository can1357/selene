#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_vs_config_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HP_VS_CONFIG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_vs_config_t                              
    {                                                  
        struct u0_flags_t                              
        {                                              
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                         
            _m00 uint1_t page_align_large_allocs;        //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PageAlignLargeAllocs
            _m01 uint1_t full_decommit;                  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .FullDecommit
            _m02 uint1_t enable_delay_free;              //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .EnableDelayFree
                                                       
            SDK_MAGIC_PROPERTIES( "_RTL_HP_VS_CONFIG.Flags.$", 0x4, true, 0x7ca10c4ba5c7c289 );                              
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                              
        };                                             
                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                             
        _m03 u0_flags_t                          flags;  //{ +0x0000    +0x0000    +0x0000    } | .Flags
                                                       
        SDK_MAGIC_PROPERTIES( "_RTL_HP_VS_CONFIG.$", 0x4, true, 0x9be433c4330ee454 );      
        SDK_FIXED_SIZE( hp_vs_config_t, 0x4 );         
    };                                                 
};
#include "magic/hp_vs_config_t.end.hpp"
SDK_VERIFY( struct rtl::hp_vs_config_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct rtl::hp_vs_config_t, 0x4 );
