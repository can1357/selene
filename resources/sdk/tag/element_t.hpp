#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_unknown_t; }

#include "magic/element_t.start.hpp"
namespace tag
{
    struct element_t;

    // [struct tagElement]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct element_t                                
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 struct tag::element_t*   p_next;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 uint32_t                 i_hash_value;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iHashValue
        _m02 uint16_t                 f_value_flags;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fValueFlags
        _m03 uint16_t                 cb_key;         //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .cbKey
        _m04 struct win::i_unknown_t* p_unknown;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pUnknown
        _m05 sdk::array<uint8_t>      ab_key;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .abKey
                                                    
        SDK_MAGIC_PROPERTIES( "tagElement.$", 0x18, true, 0xb4011227ce8bfa9c );              
        SDK_FIXED_SIZE( element_t, 0x18 );              
    };                                              
};
#include "magic/element_t.end.hpp"
SDK_VERIFY( struct tag::element_t, 0x18 );
