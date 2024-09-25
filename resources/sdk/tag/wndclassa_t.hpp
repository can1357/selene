#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hbrush_t;    }
namespace win { struct hicon_t;     }
namespace win { struct hinstance_t; }
namespace win { struct hwnd_t;      }

#include "magic/wndclassa_t.start.hpp"
namespace tag
{
    // [struct tagWNDCLASSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wndclassa_t                                
    {                                                 
        using lpfn_wnd_proc_t = sdk::function<int64_t(struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*;                
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 uint32_t                 style;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .style
        _m01 lpfn_wnd_proc_t          lpfn_wnd_proc;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpfnWndProc
        _m02 int32_t                  cb_cls_extra;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbClsExtra
        _m03 int32_t                  cb_wnd_extra;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cbWndExtra
        _m04 struct win::hinstance_t* h_instance;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hInstance
        _m05 struct win::hicon_t*     h_icon;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hIcon
        _m06 struct win::hicon_t*     h_cursor;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hCursor
        _m07 struct win::hbrush_t*    hbr_background;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hbrBackground
        _m08 const char*              lpsz_menu_name;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .lpszMenuName
        _m09 const char*              lpsz_class_name;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .lpszClassName
                                                      
        SDK_MAGIC_PROPERTIES( "tagWNDCLASSA.$", 0x48, true, 0x8a1a40e30e985a58 );                
        SDK_FIXED_SIZE( wndclassa_t, 0x48 );                
    };                                                
};
#include "magic/wndclassa_t.end.hpp"
SDK_VERIFY( struct tag::wndclassa_t, 0x48 );
