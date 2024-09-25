#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/name_cache_list_ctrl_stats_t.start.hpp"
namespace fltmgr
{
    // [struct _NAME_CACHE_LIST_CTRL_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_cache_list_ctrl_stats_t   
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t searches;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Searches
        _m01 uint32_t hits;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Hits
        _m02 uint32_t created;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Created
        _m03 uint32_t temporary;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Temporary
        _m04 uint32_t duplicate;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Duplicate
        _m05 uint32_t removed;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Removed
        _m06 uint32_t removed_due_to_case;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RemovedDueToCase
                                          
        SDK_MAGIC_PROPERTIES( "_NAME_CACHE_LIST_CTRL_STATS.$", 0x1c, true, 0xaf0eff252abda4c7 );                    
        SDK_FIXED_SIZE( name_cache_list_ctrl_stats_t, 0x1c );                    
    };                                    
};
#include "magic/name_cache_list_ctrl_stats_t.end.hpp"
SDK_VERIFY( struct fltmgr::name_cache_list_ctrl_stats_t, 0x1c );
