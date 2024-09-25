#pragma once
#include <sdkgen/support_library.hpp>
#include "logfontw_t.hpp"

#include "magic/nonclientmetricsw_t.start.hpp"
namespace tag
{
    // [struct tagNONCLIENTMETRICSW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nonclientmetricsw_t                            
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               cb_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t                i_border_width;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iBorderWidth
        _m02 int32_t                i_scroll_width;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iScrollWidth
        _m03 int32_t                i_scroll_height;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iScrollHeight
        _m04 int32_t                i_caption_width;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iCaptionWidth
        _m05 int32_t                i_caption_height;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .iCaptionHeight
        _m06 struct tag::logfontw_t lf_caption_font;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lfCaptionFont
        _m07 int32_t                i_sm_caption_width;     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .iSmCaptionWidth
        _m08 int32_t                i_sm_caption_height;    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .iSmCaptionHeight
        _m09 struct tag::logfontw_t lf_sm_caption_font;     //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .lfSmCaptionFont
        _m10 int32_t                i_menu_width;           //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .iMenuWidth
        _m11 int32_t                i_menu_height;          //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .iMenuHeight
        _m12 struct tag::logfontw_t lf_menu_font;           //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .lfMenuFont
        _m13 struct tag::logfontw_t lf_status_font;         //{ +0x013c    +0x013c    +0x013c    +0x013c    } | .lfStatusFont
        _m14 struct tag::logfontw_t lf_message_font;        //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .lfMessageFont
        _m15 int32_t                i_padded_border_width;  //{ +0x01f4    +0x01f4    +0x01f4    +0x01f4    } | .iPaddedBorderWidth
                                                          
        SDK_MAGIC_PROPERTIES( "tagNONCLIENTMETRICSW.$", 0x1f8, true, 0x3faf8c6b4d1be62c );                      
        SDK_FIXED_SIZE( nonclientmetricsw_t, 0x1f8 );                      
    };                                                    
};
#include "magic/nonclientmetricsw_t.end.hpp"
SDK_VERIFY( struct tag::nonclientmetricsw_t, 0x1f8 );
