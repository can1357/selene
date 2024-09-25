#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::protocols::super_wet_ink
{
    // [PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x256318, 0x1596d bytes
    // win32kfull.sys .text:0x255634, 0x1659e bytes
    // win32kfull.sys .text:0x256228, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) pen_type_from_ink_feedback_pen_type;
    
    // [PopulatePayloadV1@SuperWetInk@Protocols]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25634c, 0x1596d bytes
    // win32kfull.sys .text:0x255668, 0x1659e bytes
    // win32kfull.sys .text:0x25625c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) populate_payload_v1;
};
#include "magic/api.end.hpp"
