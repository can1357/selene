#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hbrush_t;    }
namespace win { struct hicon_t;     }
namespace win { struct hinstance_t; }
namespace win { struct hwnd_t;      }

#include "magic/wndclassexa_t.start.hpp"
namespace tag
{
    // [struct tagWNDCLASSEXA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wndclassexa_t                              
    {                                                 
        using lpfn_wnd_proc_t = sdk::function<int64_t(struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*;                
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 uint32_t                 cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                 style;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .style
        _m02 lpfn_wnd_proc_t          lpfn_wnd_proc;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpfnWndProc
        _m03 int32_t                  cb_cls_extra;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbClsExtra
        _m04 int32_t                  cb_wnd_extra;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cbWndExtra
        _m05 struct win::hinstance_t* h_instance;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hInstance
        _m06 struct win::hicon_t*     h_icon;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hIcon
        _m07 struct win::hicon_t*     h_cursor;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hCursor
        _m08 struct win::hbrush_t*    hbr_background;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hbrBackground
        _m09 const char*              lpsz_menu_name;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .lpszMenuName
        _m10 const char*              lpsz_class_name;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .lpszClassName
        _m11 struct win::hicon_t*     h_icon_sm;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .hIconSm
                                                      
        SDK_MAGIC_PROPERTIES( "tagWNDCLASSEXA.$", 0x50, true, 0xc77de1119d0714b1 );                
        SDK_FIXED_SIZE( wndclassexa_t, 0x50 );                
    };                                                
};
#include "magic/wndclassexa_t.end.hpp"
SDK_VERIFY( struct tag::wndclassexa_t, 0x50 );
