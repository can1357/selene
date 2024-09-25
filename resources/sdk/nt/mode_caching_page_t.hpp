#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_caching_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_CACHING_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_caching_page_t                                
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint6_t                page_code;                  //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                page_savable;               //{ +0x0000@7  } | .PageSavable
        _m02 uint8_t                page_length;                //{ +0x0001    } | .PageLength
        _m03 uint1_t                read_disable_cache;         //{ +0x0002@0  } | .ReadDisableCache
        _m04 uint1_t                multiplication_factor;      //{ +0x0002@1  } | .MultiplicationFactor
        _m05 uint1_t                write_cache_enable;         //{ +0x0002@2  } | .WriteCacheEnable
        _m06 uint4_t                write_retension_priority;   //{ +0x0003@0  } | .WriteRetensionPriority
        _m07 uint4_t                read_retension_priority;    //{ +0x0003@4  } | .ReadRetensionPriority
        _m08 sdk::array<uint8_t, 2> disable_prefetch_transfer;  //{ +0x0004    } | .DisablePrefetchTransfer
        _m09 sdk::array<uint8_t, 2> minimum_prefetch;           //{ +0x0006    } | .MinimumPrefetch
        _m10 sdk::array<uint8_t, 2> maximum_prefetch;           //{ +0x0008    } | .MaximumPrefetch
        _m11 sdk::array<uint8_t, 2> maximum_prefetch_ceiling;   //{ +0x000a    } | .MaximumPrefetchCeiling
                                                              
        SDK_NONVOL_PROPERTIES( "_MODE_CACHING_PAGE.$", 0x0, false, 0x3d3d16483702230d );                          
        SDK_FIXED_SIZE( mode_caching_page_t, 0xc );                          
    };                                                        
};
#include "magic/mode_caching_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_caching_page_t, 0xc );
