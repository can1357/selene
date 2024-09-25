#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_unknown_t; }

#include "magic/dde_class_info_t.start.hpp"
namespace tag
{
    // [struct _tagDdeClassInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dde_class_info_t                               
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 uint32_t                 dw_context_mask;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwContextMask
        _m01 int32_t                  f_claim_factory;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fClaimFactory
        _m02 uint32_t                 dw_context;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwContext
        _m03 uint32_t                 dw_flags;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFlags
        _m04 uint32_t                 dw_thread_id;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwThreadId
        _m05 uint32_t                 dw_registration_key;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwRegistrationKey
        _m06 struct win::i_unknown_t* punk;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .punk
                                                          
        SDK_MAGIC_PROPERTIES( "_tagDdeClassInfo.$", 0x20, true, 0x42645fdf84c8e235 );                    
        SDK_FIXED_SIZE( dde_class_info_t, 0x20 );                    
    };                                                    
};
#include "magic/dde_class_info_t.end.hpp"
SDK_VERIFY( struct tag::dde_class_info_t, 0x20 );
