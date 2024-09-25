#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/fast_mutex_t.hpp"
#include "name_cache_volume_ctrl_stats_t.hpp"

#include "magic/name_cache_volume_ctrl_t.start.hpp"
namespace fltmgr
{
    // [struct _NAME_CACHE_VOLUME_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_cache_volume_ctrl_t                                                        
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                 
        _m00 struct nt::fast_mutex_t                       lock;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 int32_t                                       all_contexts_temporary;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AllContextsTemporary
        _m02 int64_t                                       last_directory_rename_completed;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LastDirectoryRenameCompleted
        _m03 int64_t                                       last_file_rename_completed;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LastFileRenameCompleted
        _m04 struct fltmgr::name_cache_volume_ctrl_stats_t stats;                            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Stats
                                                                                           
        SDK_MAGIC_PROPERTIES( "_NAME_CACHE_VOLUME_CTRL.$", 0xb8, true, 0xf673f03e5ed78060 );                                
        SDK_FIXED_SIZE( name_cache_volume_ctrl_t, 0xb8 );                                  
    };                                                                                     
};
#include "magic/name_cache_volume_ctrl_t.end.hpp"
SDK_VERIFY( struct fltmgr::name_cache_volume_ctrl_t, 0xb8 );
