#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/monitor_source_mode_t.hpp"
#include "../d3dk/mdt/monitor_timing_type_t.hpp"

#include "magic/monitor_source_mode_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_MONITOR_SOURCE_MODE_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitor_source_mode_serialization_t                   
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                       
        _m00 struct d3dk::mdt::monitor_source_mode_t info;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Info
        _m01 enum d3dk::mdt::monitor_timing_type_t   timing_type;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .TimingType
                                                                 
        SDK_MAGIC_PROPERTIES( "_DMM_MONITOR_SOURCE_MODE_SERIALIZATION.$", 0x68, true, 0x665f250c92e744d2 );            
        SDK_FIXED_SIZE( monitor_source_mode_serialization_t, 0x68 );            
    };                                                           
};
#include "magic/monitor_source_mode_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::monitor_source_mode_serialization_t, 0x68 );
