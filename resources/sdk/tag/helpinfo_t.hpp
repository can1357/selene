#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

#include "magic/helpinfo_t.start.hpp"
namespace tag
{
    // [struct tagHELPINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct helpinfo_t                           
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                      
        _m00 uint32_t            cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t             i_context_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iContextType
        _m02 int32_t             i_ctrl_id;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iCtrlId
        _m03 void*               h_item_handle;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hItemHandle
        _m04 uint64_t            dw_context_id;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwContextId
        _m05 struct tag::point_t mouse_pos;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MousePos
                                                
        SDK_MAGIC_PROPERTIES( "tagHELPINFO.$", 0x28, true, 0x66420fd63eb9f962 );               
        SDK_FIXED_SIZE( helpinfo_t, 0x28 );               
    };                                          
};
#include "magic/helpinfo_t.end.hpp"
SDK_VERIFY( struct tag::helpinfo_t, 0x28 );
