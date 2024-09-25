#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace win { struct i_unknown_t; }

#include "magic/context_property_t.start.hpp"
namespace tag
{
    // [struct tagContextProperty]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_property_t                   
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct nt::guid_t        policy_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .policyId
        _m01 uint32_t                 flags;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .flags
        _m02 struct win::i_unknown_t* p_unk;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pUnk
                                                
        SDK_MAGIC_PROPERTIES( "tagContextProperty.$", 0x20, true, 0xaf6452ec6c558a0f );          
        SDK_FIXED_SIZE( context_property_t, 0x20 );          
    };                                          
};
#include "magic/context_property_t.end.hpp"
SDK_VERIFY( struct tag::context_property_t, 0x20 );
