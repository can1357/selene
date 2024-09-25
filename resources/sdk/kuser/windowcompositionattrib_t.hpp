#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum WINDOWCOMPOSITIONATTRIB]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class windowcompositionattrib_t : int32_t
    {                                             
        undefined =                     0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ncrendering_enabled =           0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ncrendering_policy =            0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        transitions_forcedisabled =     0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow_ncpaint =                 0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        caption_button_bounds =         0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nonclient_rtl_layout =          0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_iconic_representation =   0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_frame_bounds =         0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_iconic_bitmap =             0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        theme_attributes =              0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ncrendering_exiled =            0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ncadornmentinfo =               0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        excluded_from_livepreview =     0xd,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_overlay_active =          0xe,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        force_activewindow_appearance = 0xf,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disallow_peek =                 0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cloak =                         0x11,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cloaked =                       0x12,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        accent_policy =                 0x13,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        freeze_representation =         0x14,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ever_uncloaked =                0x15,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        visual_owner =                  0x16,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        holographic =                   0x17,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //last =                        0x17,       // Windows 10 v1607
        excluded_from_dda =             0x18,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        passiveupdatemode =             0x19,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        usedarkmodecolors =             0x1a,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        corner_style =                  0x1b,       // Windows 11
        last =                          0x1b,       // Windows 10 v2004, Windows 10 v20H2
        part_color =                    0x1c,       // Windows 11
        disable_movesize_feedback =     0x1d,       // Windows 11
        systembackdrop_type =           0x1e,       // Windows 11
        //last =                        0x1f,       // Windows 11
    };                                            
};
