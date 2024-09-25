#pragma once
#include <sdkgen/support_library.hpp>
#include "bcrypt_hash_operation_type_t.hpp"

#include "magic/bcrypt_multi_hash_operation_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_MULTI_HASH_OPERATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_multi_hash_operation_t                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                         
        _m00 uint32_t                               i_hash;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iHash
        _m01 enum win::bcrypt_hash_operation_type_t hash_operation;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .hashOperation
        _m02 uint8_t*                               pb_buffer;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbBuffer
        _m03 uint32_t                               cb_buffer;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbBuffer
                                                                   
        SDK_MAGIC_PROPERTIES( "_BCRYPT_MULTI_HASH_OPERATION.$", 0x18, true, 0xcf9295674565cf61 );               
        SDK_FIXED_SIZE( bcrypt_multi_hash_operation_t, 0x18 );               
    };                                                             
};
#include "magic/bcrypt_multi_hash_operation_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_multi_hash_operation_t, 0x18 );
