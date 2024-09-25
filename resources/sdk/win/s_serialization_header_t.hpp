#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_serialization_header_t.start.hpp"
namespace win
{
    // [struct _SSerializationHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_serialization_header_t  
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t dw_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 void*    pv_marshal_ptr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvMarshalPtr
                                     
        SDK_MAGIC_PROPERTIES( "_SSerializationHeader.$", 0x10, true, 0xee08884c76851c15 );               
        SDK_FIXED_SIZE( s_serialization_header_t, 0x10 );               
    };                               
};
#include "magic/s_serialization_header_t.end.hpp"
SDK_VERIFY( struct win::s_serialization_header_t, 0x10 );
