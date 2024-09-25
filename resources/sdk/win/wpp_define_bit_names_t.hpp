#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WPP_DEFINE_BIT_NAMES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wpp_define_bit_names_t : int32_t
    {                                          
        block_start_kmdf_trace_guid = 0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingfull =             0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingerror =            0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingdbgprint =         0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingframeworks =       0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingapi =              0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingapierror =         0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingresources =        0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracinglocking =          0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingcontext =          0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingpool =             0xa,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracinghandle =           0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingpnp =              0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingio =               0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingiotarget =         0xe,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingdma =              0xf,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingrequest =          0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingdriver =           0x11,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingdevice =           0x12,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracinguserobject =       0x13,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingobject =           0x14,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingpnppowerstates =   0x15,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bit_tracingifrcapture =       0x16,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        block_end_kmdf_trace_guid =   0x17,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
