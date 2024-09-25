#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORPORT_FEATURE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storport_feature_type_t : int32_t      
    {                                                 
        bus_type_unit_control =                0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fru_id_unit_control =                  0x1,     // Windows 11
        max =                                  0x1,     // Windows 10 v2004, Windows 10 v20H2
        fru_id_adapter_control =               0x2,     // Windows 11
        set_event_logging_adapter_control =    0x3,     // Windows 11
        report_internal_data_unit_control =    0x4,     // Windows 11
        report_internal_data_adapter_control = 0x5,     // Windows 11
        //max =                                0x6,     // Windows 11
    };                                                
};
