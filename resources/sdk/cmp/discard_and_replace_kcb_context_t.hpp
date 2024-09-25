#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct key_control_block_t; }

#include "magic/discard_and_replace_kcb_context_t.start.hpp"
namespace cmp
{
    // [struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct discard_and_replace_kcb_context_t                      
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                        
        _m00 struct cm::key_control_block_t* base_kcb;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseKcb
        _m01 int32_t                         prepare_status;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PrepareStatus
        _m02 nt::list_entry_t                cloned_kcb_list_head;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClonedKcbListHead
                                                                  
        SDK_MAGIC_PROPERTIES( "_CMP_DISCARD_AND_REPLACE_KCB_CONTEXT.$", 0x20, true, 0x398f6cd376dbe517 );                     
        SDK_FIXED_SIZE( discard_and_replace_kcb_context_t, 0x20 );                     
    };                                                            
};
#include "magic/discard_and_replace_kcb_context_t.end.hpp"
SDK_VERIFY( struct cmp::discard_and_replace_kcb_context_t, 0x20 );
