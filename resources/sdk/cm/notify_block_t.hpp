#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/subject_context_t.hpp"

#include "magic/notify_block_t.start.hpp"
namespace cm
{
    struct key_body_t;
    struct key_control_block_t;

    // [struct _CM_NOTIFY_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct notify_block_t                                      
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 nt::list_entry_t                hive_list;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HiveList
        _m01 nt::list_entry_t                post_list;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PostList
        _m02 struct cm::key_control_block_t* key_control_block;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .KeyControlBlock
        _m03 struct cm::key_body_t*          key_body;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KeyBody
        _m04 uint30_t                        filter;             //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .Filter
        _m05 uint1_t                         watch_tree;         //{ +0x0030@30 +0x0030@30 +0x0030@30 +0x0030@30 } | .WatchTree
        _m06 uint1_t                         notify_pending;     //{ +0x0030@31 +0x0030@31 +0x0030@31 +0x0030@31 } | .NotifyPending
        _m07 struct sec::subject_context_t   subject_context;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SubjectContext
                                                               
        SDK_MAGIC_PROPERTIES( "_CM_NOTIFY_BLOCK.$", 0x58, true, 0x2b9d314e25e93093 );                  
        SDK_FIXED_SIZE( notify_block_t, 0x58 );                  
    };                                                         
};
#include "magic/notify_block_t.end.hpp"
SDK_VERIFY( struct cm::notify_block_t, 0x58 );
