#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_layer_information_t.start.hpp"
namespace win
{
    // [struct _KEY_LAYER_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_layer_information_t      
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 uint1_t is_tombstone;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IsTombstone
        _m01 uint1_t is_supersede_local;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IsSupersedeLocal
        _m02 uint1_t is_supersede_tree;   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IsSupersedeTree
        _m03 uint1_t class_is_inherited;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ClassIsInherited
                                        
        SDK_NONVOL_PROPERTIES( "_KEY_LAYER_INFORMATION.$", 0x4, true, 0x39128d8d84b25010 );                   
        SDK_FIXED_SIZE( key_layer_information_t, 0x4 );                   
    };                                  
};
#include "magic/key_layer_information_t.end.hpp"
SDK_VERIFY( struct win::key_layer_information_t, 0x4 );
