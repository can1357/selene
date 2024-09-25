#pragma once
#include <sdkgen/support_library.hpp>
#include "name_hash_t.hpp"
#include "component_hash_t.hpp"

#include "magic/name_control_block_t.start.hpp"
namespace cm
{
    struct key_hash_t;

    // [struct _CM_NAME_CONTROL_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_control_block_t                      
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                           
        _m00 uint1_t                     compressed;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Compressed
        _m01 uint31_t                    ref_count;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RefCount
        _m02 struct cm::name_hash_t      name_hash;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NameHash
        _m03 struct cm::component_hash_t conv_key;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConvKey
        _m04 struct cm::key_hash_t*      next_hash;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextHash
        _m05 uint16_t                    name_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NameLength
        _m06 sdk::array<wchar_t, 1>      name;         //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .Name
                                                     
        SDK_MAGIC_PROPERTIES( "_CM_NAME_CONTROL_BLOCK.$", 0x20, true, 0x10794d49d8cc6e06 );            
        SDK_FIXED_SIZE( name_control_block_t, 0x20 );            
    };                                               
};
#include "magic/name_control_block_t.end.hpp"
SDK_VERIFY( struct cm::name_control_block_t, 0x20 );
