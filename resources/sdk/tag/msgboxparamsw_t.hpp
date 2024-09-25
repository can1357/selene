#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hinstance_t; }
namespace win { struct hwnd_t;      }

#include "magic/msgboxparamsw_t.start.hpp"
namespace tag
{
    struct helpinfo_t;

    // [struct tagMSGBOXPARAMSW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msgboxparamsw_t                                                       
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                       
        _m00 uint32_t                                      cb_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::hwnd_t*                           hwnd_owner;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndOwner
        _m02 struct win::hinstance_t*                      h_instance;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hInstance
        _m03 const wchar_t*                                lpsz_text;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpszText
        _m04 const wchar_t*                                lpsz_caption;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lpszCaption
        _m05 uint32_t                                      dw_style;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwStyle
        _m06 const wchar_t*                                lpsz_icon;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .lpszIcon
        _m07 uint64_t                                      dw_context_help_id;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwContextHelpId
        _m08 sdk::function<void(struct tag::helpinfo_t*)>* lpfn_msg_box_callback;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .lpfnMsgBoxCallback
        _m09 uint32_t                                      dw_language_id;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .dwLanguageId
                                                                                 
        SDK_MAGIC_PROPERTIES( "tagMSGBOXPARAMSW.$", 0x50, true, 0x6695cb10ab19c4cd );                      
        SDK_FIXED_SIZE( msgboxparamsw_t, 0x50 );                                 
    };                                                                           
};
#include "magic/msgboxparamsw_t.end.hpp"
SDK_VERIFY( struct tag::msgboxparamsw_t, 0x50 );
