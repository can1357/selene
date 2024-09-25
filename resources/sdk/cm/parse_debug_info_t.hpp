#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/parse_debug_info_t.start.hpp"
namespace cm
{
    struct key_control_block_t;

    // [struct _CM_PARSE_DEBUG_INFO]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct parse_debug_info_t                                      
    {                                                              
        struct u0_failure_points_t                                 
        {                                                          
            // Windows 10 v2004, Windows 10 v20H2                          
            //                                                     
            _m08 int32_t  status;                                    //{ +0x0000    +0x0000    } | .Status
            _m09 uint32_t point;                                     //{ +0x0004    +0x0004    } | .Point
                                                                   
            SDK_MAGIC_PROPERTIES( "_CM_PARSE_DEBUG_INFO.FailurePoints.$", 0x8, true, 0x20ed2c049e0aae5f );                          
            SDK_FIXED_SIZE( u0_failure_points_t, 0x8 );                          
        };                                                         
                                                                   
        // Windows 10 v2004, Windows 10 v20H2                      
        //                                                         
        _m00 struct cm::key_control_block_t*    symlink_cached_kcb;  //{ +0x0000    +0x0000    } | .SymlinkCachedKcb
        _m01 struct cm::key_control_block_t*    starting_kcb;        //{ +0x0008    +0x0008    } | .StartingKcb
        _m02 struct cm::key_control_block_t*    kcb_cache_result;    //{ +0x0010    +0x0010    } | .KcbCacheResult
        _m03 struct cm::key_control_block_t*    walk_result;         //{ +0x0018    +0x0018    } | .WalkResult
        _m04 struct cm::key_control_block_t*    deepest_kcb_found;   //{ +0x0020    +0x0020    } | .DeepestKcbFound
        _m05 uint8_t                            kcb_cache_levels;    //{ +0x0028    +0x0028    } | .KcbCacheLevels
        _m06 uint8_t                            walk_levels;         //{ +0x0029    +0x0029    } | .WalkLevels
        _m07 uint8_t                            failure_count;       //{ +0x002a    +0x002a    } | .FailureCount
        _m10 sdk::array<u0_failure_points_t, 4> failure_points;      //{ +0x002c    +0x002c    } | .FailurePoints
                                                                   
        SDK_MAGIC_PROPERTIES( "_CM_PARSE_DEBUG_INFO.$", 0x50, true, 0x1f19676231e7110e );                   
        SDK_FIXED_SIZE( parse_debug_info_t, 0x50 );                   
    };                                                             
};
#include "magic/parse_debug_info_t.end.hpp"
SDK_VERIFY( struct cm::parse_debug_info_t::u0_failure_points_t, 0x8 );
SDK_VERIFY( struct cm::parse_debug_info_t, 0x50 );
