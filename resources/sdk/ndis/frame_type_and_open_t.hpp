#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/frame_type_and_open_t.start.hpp"
namespace ndis
{
    struct open_block_t;

    // [struct _NDIS_FRAME_TYPE_AND_OPEN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct frame_type_and_open_t             
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                   
        _m00 uint16_t                   type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct ndis::open_block_t* open;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Open
                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_FRAME_TYPE_AND_OPEN.$", 0x10, true, 0xf685b30cde55cc0d );     
        SDK_FIXED_SIZE( frame_type_and_open_t, 0x10 );     
    };                                       
};
#include "magic/frame_type_and_open_t.end.hpp"
SDK_VERIFY( struct ndis::frame_type_and_open_t, 0x10 );
