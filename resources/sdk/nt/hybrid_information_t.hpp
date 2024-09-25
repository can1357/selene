#pragma once
#include <sdkgen/support_library.hpp>
#include "nvcache_type_t.hpp"
#include "nvcache_status_t.hpp"
#include "nvcache_priority_level_descriptor_t.hpp"

#include "magic/hybrid_information_t.start.hpp"
namespace nt
{
    // [struct _HYBRID_INFORMATION]
    // => WDK 10 (NV)
    //
    struct hybrid_information_t                                                                                 
    {                                                                                                           
        struct u0_attributes_t                                                                                  
        {                                                                                                       
            // WDK 10                                                                                           
            //                                                                                                  
            _m08 uint1_t write_cache_changeable;                                                                  //{ +0x0000@0  } | .WriteCacheChangeable
            _m09 uint1_t write_through_io_supported;                                                              //{ +0x0000@1  } | .WriteThroughIoSupported
            _m10 uint1_t flush_cache_supported;                                                                   //{ +0x0000@2  } | .FlushCacheSupported
            _m11 uint1_t removable;                                                                               //{ +0x0000@3  } | .Removable
                                                                                                                
            SDK_NONVOL_PROPERTIES( "_HYBRID_INFORMATION.Attributes.$", 0x0, false, 0xe3b7cc41529a8390 );                                                
            SDK_FIXED_SIZE( u0_attributes_t, 0x4 );                                                             
        };                                                                                                      
                                                                                                                
        struct u1_priorities_t                                                                                  
        {                                                                                                       
            struct u2_supported_commands_t                                                                      
            {                                                                                                   
                // WDK 10                                                                                       
                //                                                                                              
                _m18 uint1_t  cache_disable;                                                                      //{ +0x0000@0  } | .CacheDisable
                _m19 uint1_t  set_dirty_threshold;                                                                //{ +0x0000@1  } | .SetDirtyThreshold
                _m20 uint1_t  priority_demote_by_size;                                                            //{ +0x0000@2  } | .PriorityDemoteBySize
                _m21 uint1_t  priority_change_by_lba_range;                                                       //{ +0x0000@3  } | .PriorityChangeByLbaRange
                _m22 uint1_t  evict;                                                                              //{ +0x0000@4  } | .Evict
                _m23 uint32_t max_evict_commands;                                                                 //{ +0x0004    } | .MaxEvictCommands
                _m24 uint32_t max_lba_range_count_for_evict;                                                      //{ +0x0008    } | .MaxLbaRangeCountForEvict
                _m25 uint32_t max_lba_range_count_for_change_lba;                                                 //{ +0x000c    } | .MaxLbaRangeCountForChangeLba
                                                                                                                
                SDK_NONVOL_PROPERTIES( "_HYBRID_INFORMATION.Priorities.SupportedCommands.$", 0x0, false, 0x4f6cabc38dcfe4e2 );                                                                                  
                SDK_FIXED_SIZE( u2_supported_commands_t, 0x10 );                                                                                  
            };                                                                                                  
                                                                                                                
            using priority_t = sdk::array<struct nt::nvcache_priority_level_descriptor_t>;                                               
                                                                                                                
            // WDK 10                                                                                           
            //                                                                                                  
            _m13 uint8_t                                         priority_level_count;                            //{ +0x0000    } | .PriorityLevelCount
            _m14 uint8_t                                         max_priority_behavior;                           //{ +0x0001    } | .MaxPriorityBehavior
            _m15 uint8_t                                         optimal_write_granularity;                       //{ +0x0002    } | .OptimalWriteGranularity
            _m16 uint32_t                                        dirty_threshold_low;                             //{ +0x0004    } | .DirtyThresholdLow
            _m17 uint32_t                                        dirty_threshold_high;                            //{ +0x0008    } | .DirtyThresholdHigh
            _m26 u2_supported_commands_t                         supported_commands;                              //{ +0x000c    } | .SupportedCommands
            _m27 priority_t                                      priority;                                        //{ +0x001c    } | .Priority
                                                                                                                
            SDK_NONVOL_PROPERTIES( "_HYBRID_INFORMATION.Priorities.$", 0x0, false, 0xb4799593de64cd1f );                                               
            SDK_FIXED_SIZE( u1_priorities_t, 0x1c );                                                            
        };                                                                                                      
                                                                                                                
        // WDK 10                                                                                               
        //                                                                                                      
        _m00 uint32_t                                                                      version;               //{ +0x0000    } | .Version
        _m01 uint32_t                                                                      size;                  //{ +0x0004    } | .Size
        _m02 uint8_t                                                                       hybrid_supported;      //{ +0x0008    } | .HybridSupported
        _m03 enum nt::nvcache_status_t                                                     status;                //{ +0x000c    } | .Status
        _m04 enum nt::nvcache_type_t                                                       cache_type_effective;  //{ +0x0010    } | .CacheTypeEffective
        _m05 enum nt::nvcache_type_t                                                       cache_type_default;    //{ +0x0014    } | .CacheTypeDefault
        _m06 uint32_t                                                                      fraction_base;         //{ +0x0018    } | .FractionBase
        _m07 uint64_t                                                                      cache_size;            //{ +0x0020    } | .CacheSize
        _m12 u0_attributes_t                                                               attributes;            //{ +0x0028    } | .Attributes
        _m28 u1_priorities_t                                                               priorities;            //{ +0x002c    } | .Priorities
                                                                                                                
        SDK_NONVOL_PROPERTIES( "_HYBRID_INFORMATION.$", 0x0, false, 0x9c25ba295d15708 );                        
        SDK_FIXED_SIZE( hybrid_information_t, 0x48 );                                                           
    };                                                                                                          
};
#include "magic/hybrid_information_t.end.hpp"
SDK_VERIFY( struct nt::hybrid_information_t::u0_attributes_t, 0x4 );
SDK_VERIFY( struct nt::hybrid_information_t::u1_priorities_t::u2_supported_commands_t, 0x10 );
SDK_VERIFY( struct nt::hybrid_information_t::u1_priorities_t, 0x1c );
SDK_VERIFY( struct nt::hybrid_information_t, 0x48 );
