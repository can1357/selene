#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorErrorIfEmitOutOfOrder]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_error_if_emit_out_of_order_t : int32_t
    {                                                    
        md_error_out_of_order_default = 0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_error_out_of_order_none =    0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_method_out_of_order =        0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_field_out_of_order =         0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_param_out_of_order =         0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_property_out_of_order =      0x8,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_event_out_of_order =         0x10,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_error_out_of_order_all =     0xff,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
