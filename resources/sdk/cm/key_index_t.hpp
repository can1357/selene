#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_index_t.start.hpp"
namespace cm
{
    // [struct _CM_KEY_INDEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_index_t                         
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 uint16_t                signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t                count;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Count
        _m02 sdk::array<uint32_t, 1> list;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .List
                                               
        SDK_MAGIC_PROPERTIES( "_CM_KEY_INDEX.$", 0x8, true, 0xe8a4af5c45cd76 );          
        SDK_FIXED_SIZE( key_index_t, 0x8 );          
    };                                         
};
#include "magic/key_index_t.end.hpp"
SDK_VERIFY( struct cm::key_index_t, 0x8 );
