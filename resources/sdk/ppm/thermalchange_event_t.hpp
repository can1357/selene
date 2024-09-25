#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermalchange_event_t.start.hpp"
namespace ppm
{
    // [struct PPM_THERMALCHANGE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermalchange_event_t         
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t thermal_constraint;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThermalConstraint
        _m01 uint64_t processors;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Processors
                                         
        SDK_MAGIC_PROPERTIES( "PPM_THERMALCHANGE_EVENT.$", 0x10, true, 0xe01a676a2e0a1a4f );                   
        SDK_FIXED_SIZE( thermalchange_event_t, 0x10 );                   
    };                                   
};
#include "magic/thermalchange_event_t.end.hpp"
SDK_VERIFY( struct ppm::thermalchange_event_t, 0x10 );
