#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_multi_object_length_struct_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_MULTI_OBJECT_LENGTH_STRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_multi_object_length_struct_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t cb_per_object;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbPerObject
        _m01 uint32_t cb_per_element;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbPerElement
                                              
        SDK_MAGIC_PROPERTIES( "_BCRYPT_MULTI_OBJECT_LENGTH_STRUCT.$", 0x8, true, 0x951102d82dd6c388 );               
        SDK_FIXED_SIZE( bcrypt_multi_object_length_struct_t, 0x8 );               
    };                                        
};
#include "magic/bcrypt_multi_object_length_struct_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_multi_object_length_struct_t, 0x8 );
