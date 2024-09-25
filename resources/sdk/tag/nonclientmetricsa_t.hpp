#pragma once
#include <sdkgen/support_library.hpp>
#include "logfonta_t.hpp"

#include "magic/nonclientmetricsa_t.start.hpp"
namespace tag
{
    // [struct tagNONCLIENTMETRICSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nonclientmetricsa_t                            
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               cb_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t                i_border_width;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iBorderWidth
        _m02 int32_t                i_scroll_width;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iScrollWidth
        _m03 int32_t                i_scroll_height;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iScrollHeight
        _m04 int32_t                i_caption_width;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iCaptionWidth
        _m05 int32_t                i_caption_height;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .iCaptionHeight
        _m06 struct tag::logfonta_t lf_caption_font;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lfCaptionFont
        _m07 int32_t                i_sm_caption_width;     //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .iSmCaptionWidth
        _m08 int32_t                i_sm_caption_height;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .iSmCaptionHeight
        _m09 struct tag::logfonta_t lf_sm_caption_font;     //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .lfSmCaptionFont
        _m10 int32_t                i_menu_width;           //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .iMenuWidth
        _m11 int32_t                i_menu_height;          //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .iMenuHeight
        _m12 struct tag::logfonta_t lf_menu_font;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .lfMenuFont
        _m13 struct tag::logfonta_t lf_status_font;         //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .lfStatusFont
        _m14 struct tag::logfonta_t lf_message_font;        //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .lfMessageFont
        _m15 int32_t                i_padded_border_width;  //{ +0x0154    +0x0154    +0x0154    +0x0154    } | .iPaddedBorderWidth
                                                          
        SDK_MAGIC_PROPERTIES( "tagNONCLIENTMETRICSA.$", 0x158, true, 0xd90097cb7ff49183 );                      
        SDK_FIXED_SIZE( nonclientmetricsa_t, 0x158 );                      
    };                                                    
};
#include "magic/nonclientmetricsa_t.end.hpp"
SDK_VERIFY( struct tag::nonclientmetricsa_t, 0x158 );
