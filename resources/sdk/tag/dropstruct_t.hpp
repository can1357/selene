#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/dropstruct_t.start.hpp"
namespace tag
{
    // [struct tagDROPSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dropstruct_t                          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                       
        _m00 struct win::hwnd_t* hwnd_source;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hwndSource
        _m01 struct win::hwnd_t* hwnd_sink;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndSink
        _m02 uint32_t            w_fmt;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wFmt
        _m03 uint64_t            dw_data;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwData
        _m04 struct tag::point_t pt_drop;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ptDrop
        _m05 uint32_t            dw_control_data;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwControlData
                                                 
        SDK_MAGIC_PROPERTIES( "tagDROPSTRUCT.$", 0x30, true, 0xf62cbdc0c454c211 );                
        SDK_FIXED_SIZE( dropstruct_t, 0x30 );                
    };                                           
};
#include "magic/dropstruct_t.end.hpp"
SDK_VERIFY( struct tag::dropstruct_t, 0x30 );
