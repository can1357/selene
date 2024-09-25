#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/escapeflags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_ESCAPEFLAGS]
    // => WDK 10 (NV)
    //
    struct escapeflags_t                         
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  hardware_access;             //{ +0x0000@0  } | .HardwareAccess
        _m01 uint1_t  device_status_query;         //{ +0x0000@1  } | .DeviceStatusQuery
        _m02 uint1_t  change_frame_latency;        //{ +0x0000@2  } | .ChangeFrameLatency
        _m03 uint1_t  no_adapter_synchronization;  //{ +0x0000@3  } | .NoAdapterSynchronization
        _m04 uint1_t  virtual_machine_data;        //{ +0x0000@5  } | .VirtualMachineData
        _m05 uint1_t  driver_known_escape;         //{ +0x0000@6  } | .DriverKnownEscape
        _m06 uint1_t  driver_common_escape;        //{ +0x0000@7  } | .DriverCommonEscape
        _m07 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DDDI_ESCAPEFLAGS.$", 0x0, false, 0x1c191b759abd7f6a );                           
        SDK_FIXED_SIZE( escapeflags_t, 0x4 );                           
    };                                           
};
#include "magic/escapeflags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::escapeflags_t, 0x4 );
