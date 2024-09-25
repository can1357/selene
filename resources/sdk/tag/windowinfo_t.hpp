#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/windowinfo_t.start.hpp"
namespace tag
{
    // [struct tagWINDOWINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct windowinfo_t                           
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                        
        _m00 uint32_t           cb_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t rc_window;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcWindow
        _m02 struct tag::rect_t rc_client;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rcClient
        _m03 uint32_t           dw_style;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwStyle
        _m04 uint32_t           dw_ex_style;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwExStyle
        _m05 uint32_t           dw_window_status;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwWindowStatus
        _m06 uint32_t           cx_window_borders;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cxWindowBorders
        _m07 uint32_t           cy_window_borders;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .cyWindowBorders
        _m08 uint16_t           atom_window_type;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .atomWindowType
        _m09 uint16_t           w_creator_version;  //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .wCreatorVersion
                                                  
        SDK_MAGIC_PROPERTIES( "tagWINDOWINFO.$", 0x3c, true, 0x9b05c09648626a05 );                  
        SDK_FIXED_SIZE( windowinfo_t, 0x3c );                  
    };                                            
};
#include "magic/windowinfo_t.end.hpp"
SDK_VERIFY( struct tag::windowinfo_t, 0x3c );
