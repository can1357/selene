#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kcb_layer_info_t.start.hpp"
namespace cm
{
    struct kcb_layer_info_t;
    struct key_control_block_t;

    // [struct _CM_KCB_LAYER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kcb_layer_info_t                                        
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                         
        _m00 nt::list_entry_t                layer_list_entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LayerListEntry
        _m01 struct cm::key_control_block_t* kcb;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Kcb
        _m02 struct cm::kcb_layer_info_t*    lower_layer;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowerLayer
        _m03 nt::list_entry_t                upper_layer_list_head;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UpperLayerListHead
                                                                   
        SDK_MAGIC_PROPERTIES( "_CM_KCB_LAYER_INFO.$", 0x30, true, 0x51a9403540cd644f );                      
        SDK_FIXED_SIZE( kcb_layer_info_t, 0x30 );                      
    };                                                             
};
#include "magic/kcb_layer_info_t.end.hpp"
SDK_VERIFY( struct cm::kcb_layer_info_t, 0x30 );
