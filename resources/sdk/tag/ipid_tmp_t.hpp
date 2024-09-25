#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class oxid_entry_t; }
namespace win { struct i_unknown_t; }

#include "magic/ipid_tmp_t.start.hpp"
namespace tag
{
    // [struct tagIPIDTmp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipid_tmp_t                                
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint32_t                 dw_flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 uint32_t                 c_strong_refs;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cStrongRefs
        _m02 uint32_t                 c_weak_refs;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cWeakRefs
        _m03 uint32_t                 c_private_refs;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cPrivateRefs
        _m04 void*                    pv;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pv
        _m05 struct win::i_unknown_t* p_stub;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pStub
        _m06 class win::oxid_entry_t* p_oxid_entry;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pOXIDEntry
                                                     
        SDK_MAGIC_PROPERTIES( "tagIPIDTmp.$", 0x28, true, 0xfa40be9c627bf57d );               
        SDK_FIXED_SIZE( ipid_tmp_t, 0x28 );               
    };                                               
};
#include "magic/ipid_tmp_t.end.hpp"
SDK_VERIFY( struct tag::ipid_tmp_t, 0x28 );
