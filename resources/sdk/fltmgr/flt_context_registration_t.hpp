#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/pool_type_t.hpp"

#include "magic/flt_context_registration_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_CONTEXT_REGISTRATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_context_registration_t                                        
    {                                                                        
        using context_allocate_callback_t = sdk::function<void*(enum nt::pool_type_t, uint64_t, uint16_t)>*;                          
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                   
        _m00 uint16_t                              context_type;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextType
        _m01 uint16_t                              flags;                      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 sdk::function<void(void*, uint16_t)>* context_cleanup_callback;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextCleanupCallback
        _m03 uint64_t                              size;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m04 uint32_t                              pool_tag;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PoolTag
        _m05 context_allocate_callback_t           context_allocate_callback;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ContextAllocateCallback
        _m06 sdk::function<void(void*, uint16_t)>* context_free_callback;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ContextFreeCallback
                                                                             
        SDK_MAGIC_PROPERTIES( "_FLT_CONTEXT_REGISTRATION.$", 0x38, true, 0xad69aa8b9e048d8b );                          
        SDK_FIXED_SIZE( flt_context_registration_t, 0x38 );                          
    };                                                                       
};
#include "magic/flt_context_registration_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_context_registration_t, 0x38 );
