#pragma once
#include <sdkgen/support_library.hpp>
#include "trans_ptr_t.hpp"

namespace nt { struct guid_t; }

#include "magic/key_body_t.start.hpp"
namespace cm
{
    struct notify_block_t;
    struct key_control_block_t;

    // [struct _CM_KEY_BODY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_body_t                                                   
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m00 uint32_t                        type;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct cm::key_control_block_t* key_control_block;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyControlBlock
        _m02 struct cm::notify_block_t*      notify_block;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NotifyBlock
        _m03 void*                           process_id;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessID
        _m04 nt::list_entry_t                key_body_list;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .KeyBodyList
        _m05 uint16_t                        flags;                       //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .Flags
        _m06 uint16_t                        handle_tags;                 //{ +0x0030@16 +0x0030@16 +0x0030@16 +0x0030@16 } | .HandleTags
        _m07 union cm::trans_ptr_t           trans;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Trans
        _m08 struct nt::guid_t*              ktm_uow;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .KtmUow
        _m09 nt::list_entry_t                context_list_head;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ContextListHead
                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m10 void*                           enumeration_resume_context;  //{ +0x0058    +0x0058    +0x0058    } | .EnumerationResumeContext
        _m11 uint32_t                        restricted_access_mask;      //{ +0x0060    +0x0060    +0x0060    } | .RestrictedAccessMask
                                                                        
        // Windows 11                                                   
        //                                                              
        _m12 uint32_t                        last_searched_index;         //{ +0x0064    } | .LastSearchedIndex
        _m13 void*                           locked_memory_mdls;          //{ +0x0068    } | .LockedMemoryMdls
                                                                        
        SDK_MAGIC_PROPERTIES( "_CM_KEY_BODY.$", 0x68, true, 0xe4100dcf57e17f7a );                           
        SDK_DYNAMIC_SIZE( key_body_t );                                 
    };                                                                  
};
#include "magic/key_body_t.end.hpp"
