#pragma once
#include <sdkgen/support_library.hpp>
#include "name_cache_list_ctrl_stats_t.hpp"

#include "magic/name_cache_volume_ctrl_stats_t.start.hpp"
namespace fltmgr
{
    // [struct _NAME_CACHE_VOLUME_CTRL_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_cache_volume_ctrl_stats_t                                       
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m00 uint32_t                                    all_contexts_temporary;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllContextsTemporary
        _m01 uint32_t                                    purge_name_cache;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PurgeNameCache
        _m02 struct fltmgr::name_cache_list_ctrl_stats_t normalized_names;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NormalizedNames
        _m03 struct fltmgr::name_cache_list_ctrl_stats_t opened_names;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .OpenedNames
        _m04 struct fltmgr::name_cache_list_ctrl_stats_t short_names;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ShortNames
        _m05 uint32_t                                    ancestor_lookup;         //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .AncestorLookup
        _m06 uint32_t                                    parent_hit;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ParentHit
        _m07 uint32_t                                    non_parent_hit;          //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .NonParentHit
                                                                                
        SDK_MAGIC_PROPERTIES( "_NAME_CACHE_VOLUME_CTRL_STATS.$", 0x68, true, 0xa537ece6bc9c942c );                       
        SDK_FIXED_SIZE( name_cache_volume_ctrl_stats_t, 0x68 );                       
    };                                                                          
};
#include "magic/name_cache_volume_ctrl_stats_t.end.hpp"
SDK_VERIFY( struct fltmgr::name_cache_volume_ctrl_stats_t, 0x68 );
