#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ftm_marshaled_object_container_t.start.hpp"
namespace win
{
    // [class FtmMarshaledObjectContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ftm_marshaled_object_container_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t capacity;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._capacity
        _m01 uint32_t count;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._count
                                          
        SDK_MAGIC_PROPERTIES( "FtmMarshaledObjectContainer.$", 0x18, true, 0xb64adac80016cc29 );         
        SDK_FIXED_SIZE( ftm_marshaled_object_container_t, 0x18 );         
    };                                    
};
#include "magic/ftm_marshaled_object_container_t.end.hpp"
SDK_VERIFY( class win::ftm_marshaled_object_container_t, 0x18 );
