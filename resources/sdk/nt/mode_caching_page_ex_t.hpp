#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_caching_page_ex_t.start.hpp"
namespace nt
{
    // [struct _MODE_CACHING_PAGE_EX]
    // => WDK 10 (NV)
    //
    struct mode_caching_page_ex_t                                     
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m000 uint6_t                page_code;                         //{ +0x0000@0  } | .PageCode
        _m001 uint1_t                sub_page_format;                   //{ +0x0000@6  } | .SubPageFormat
        _m002 uint1_t                page_savable;                      //{ +0x0000@7  } | .PageSavable
        _m003 uint8_t                page_length;                       //{ +0x0001    } | .PageLength
        _m004 uint1_t                read_disable_cache;                //{ +0x0002@0  } | .ReadDisableCache
        _m005 uint1_t                multiplication_factor;             //{ +0x0002@1  } | .MultiplicationFactor
        _m006 uint1_t                write_cache_enable;                //{ +0x0002@2  } | .WriteCacheEnable
        _m007 uint1_t                size_enable;                       //{ +0x0002@3  } | .SizeEnable
        _m008 uint1_t                discontinuity;                     //{ +0x0002@4  } | .Discontinuity
        _m009 uint1_t                caching_analysis_permitted;        //{ +0x0002@5  } | .CachingAnalysisPermitted
        _m010 uint1_t                abort_pre_fetch;                   //{ +0x0002@6  } | .AbortPreFetch
        _m011 uint1_t                initiator_control;                 //{ +0x0002@7  } | .InitiatorControl
        _m012 uint4_t                write_retension_priority;          //{ +0x0003@0  } | .WriteRetensionPriority
        _m013 uint4_t                read_retension_priority;           //{ +0x0003@4  } | .ReadRetensionPriority
        _m014 sdk::array<uint8_t, 2> disable_prefetch_transfer;         //{ +0x0004    } | .DisablePrefetchTransfer
        _m015 sdk::array<uint8_t, 2> minimum_prefetch;                  //{ +0x0006    } | .MinimumPrefetch
        _m016 sdk::array<uint8_t, 2> maximum_prefetch;                  //{ +0x0008    } | .MaximumPrefetch
        _m017 sdk::array<uint8_t, 2> maximum_prefetch_ceiling;          //{ +0x000a    } | .MaximumPrefetchCeiling
        _m018 uint1_t                nv_cache_disable;                  //{ +0x000c@0  } | .NvCacheDisable
        _m019 uint2_t                sync_cache_progress;               //{ +0x000c@1  } | .SyncCacheProgress
        _m020 uint2_t                vendor_specific;                   //{ +0x000c@3  } | .VendorSpecific
        _m021 uint1_t                disable_read_ahead;                //{ +0x000c@5  } | .DisableReadAhead
        _m022 uint1_t                logical_block_cache_segment_size;  //{ +0x000c@6  } | .LogicalBlockCacheSegmentSize
        _m023 uint1_t                force_sequential_write;            //{ +0x000c@7  } | .ForceSequentialWrite
        _m024 uint8_t                number_of_cache_segments;          //{ +0x000d    } | .NumberOfCacheSegments
        _m025 sdk::array<uint8_t, 2> cache_segment_size;                //{ +0x000e    } | .CacheSegmentSize
                                                                      
        SDK_NONVOL_PROPERTIES( "_MODE_CACHING_PAGE_EX.$", 0x0, false, 0x2f5417864a4fccaa );                                 
        SDK_FIXED_SIZE( mode_caching_page_ex_t, 0x14 );                                 
    };                                                                
};
#include "magic/mode_caching_page_ex_t.end.hpp"
SDK_VERIFY( struct nt::mode_caching_page_ex_t, 0x14 );
