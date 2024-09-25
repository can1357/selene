#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "context_list_ctrl_t.hpp"
#include "name_cache_list_ctrl_t.hpp"
#include "../ex/push_lock_auto_expand_t.hpp"
#include "../nt/fsrtl_per_stream_context_t.hpp"

#include "magic/stream_list_ctrl_t.start.hpp"
namespace fltmgr
{
    struct section_list_ctrl_t;

    // [struct _STREAM_LIST_CTRL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stream_list_ctrl_t                                                  
    {                                                                          
        using context_lock_t =    sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>;                            
        using name_cache_lock_t = sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>;                            
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                     
        _m00 union fltmgr::flt_type_t              type;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 int32_t                               all_name_contexts_temporary;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AllNameContextsTemporary
        _m02 struct nt::fsrtl_per_stream_context_t context_ctrl;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextCtrl
        _m03 nt::list_entry_t                      volume_link;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VolumeLink
        _m04 uint32_t                              flags;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m05 int32_t                               use_count;                    //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .UseCount
        _m06 context_lock_t                        context_lock;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ContextLock
        _m07 struct fltmgr::context_list_ctrl_t    stream_contexts;              //{ +0x0050    +0x0050    +0x0058    +0x0050    } | .StreamContexts
        _m08 struct fltmgr::context_list_ctrl_t    stream_handle_contexts;       //{ +0x0058    +0x0058    +0x0060    +0x0058    } | .StreamHandleContexts
        _m09 struct fltmgr::section_list_ctrl_t*   section_contexts;             //{ +0x0060    +0x0060    +0x0068    +0x0060    } | .SectionContexts
        _m10 name_cache_lock_t                     name_cache_lock;              //{ +0x0068    +0x0068    +0x0070    +0x0068    } | .NameCacheLock
        _m11 int64_t                               last_rename_completed;        //{ +0x0070    +0x0070    +0x0080    +0x0070    } | .LastRenameCompleted
        _m12 struct fltmgr::name_cache_list_ctrl_t normalized_name_cache;        //{ +0x0078    +0x0078    +0x0088    +0x0078    } | .NormalizedNameCache
        _m13 struct fltmgr::name_cache_list_ctrl_t short_name_cache;             //{ +0x0088    +0x0088    +0x0098    +0x0088    } | .ShortNameCache
        _m14 struct fltmgr::name_cache_list_ctrl_t opened_name_cache;            //{ +0x0098    +0x0098    +0x00a8    +0x0098    } | .OpenedNameCache
                                                                               
        SDK_MAGIC_PROPERTIES( "_STREAM_LIST_CTRL.$", 0xa8, true, 0xd428e7eb2ca47db7 );                            
        SDK_DYNAMIC_SIZE( stream_list_ctrl_t );                                
    };                                                                         
};
#include "magic/stream_list_ctrl_t.end.hpp"
