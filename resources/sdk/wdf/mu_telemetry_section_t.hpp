#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/mu_telemetry_section_t.start.hpp"
namespace wdf
{
    // [struct _MU_TELEMETRY_SECTION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mu_telemetry_section_t                 
    {                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 struct nt::guid_t component_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ComponentID
        _m01 struct nt::guid_t sub_component_id;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SubComponentID
        _m02 uint32_t          error_status_value;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ErrorStatusValue
        _m03 uint64_t          additional_info1;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AdditionalInfo1
        _m04 uint64_t          additional_info2;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AdditionalInfo2
                                                  
        SDK_NONVOL_PROPERTIES( "_MU_TELEMETRY_SECTION.$", 0x38, true, 0x693f03bdc1262ec8 );                   
        SDK_FIXED_SIZE( mu_telemetry_section_t, 0x38 );                   
    };                                            
};
#include "magic/mu_telemetry_section_t.end.hpp"
SDK_VERIFY( struct wdf::mu_telemetry_section_t, 0x38 );
