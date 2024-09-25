#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_lfh_config_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HP_LFH_CONFIG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_lfh_config_t                         
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint16_t max_block_size;                //{ +0x0000    +0x0000    +0x0000    } | .MaxBlockSize
        _m01 uint1_t  withold_page_crossing_blocks;  //{ +0x0002@0  +0x0002@0  +0x0002@0  } | .WitholdPageCrossingBlocks
        _m02 uint1_t  disable_randomization;         //{ +0x0002@1  +0x0002@1  +0x0002@1  } | .DisableRandomization
                                                   
        SDK_MAGIC_PROPERTIES( "_RTL_HP_LFH_CONFIG.$", 0x4, true, 0x2c096aefa65a5191 );                             
        SDK_FIXED_SIZE( hp_lfh_config_t, 0x4 );                             
    };                                             
};
#include "magic/hp_lfh_config_t.end.hpp"
SDK_VERIFY( struct rtl::hp_lfh_config_t, 0x4 );
