#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_set_layer_information_t.start.hpp"
namespace win
{
    // [struct _KEY_SET_LAYER_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_set_layer_information_t  
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 uint1_t is_tombstone;        //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .IsTombstone
        _m01 uint1_t is_supersede_local;  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .IsSupersedeLocal
        _m02 uint1_t is_supersede_tree;   //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .IsSupersedeTree
        _m03 uint1_t class_is_inherited;  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .ClassIsInherited
                                        
        SDK_MAGIC_PROPERTIES( "_KEY_SET_LAYER_INFORMATION.$", 0x4, true, 0xd39d6374678ad09e );                   
        SDK_FIXED_SIZE( key_set_layer_information_t, 0x4 );                   
    };                                  
};
#include "magic/key_set_layer_information_t.end.hpp"
SDK_VERIFY( struct win::key_set_layer_information_t, 0x4 );
