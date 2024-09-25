#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_type_t.hpp"

#include "magic/hardware_configuration_data_t.start.hpp"
namespace video
{
    // [struct _VIDEO_HARDWARE_CONFIGURATION_DATA]
    // => WDK 10 (NV)
    //
    struct hardware_configuration_data_t              
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 enum nt::interface_type_t interface_type;  //{ +0x0000    } | .InterfaceType
        _m01 uint32_t                  bus_number;      //{ +0x0004    } | .BusNumber
        _m02 uint16_t                  version;         //{ +0x0008    } | .Version
        _m03 uint16_t                  revision;        //{ +0x000a    } | .Revision
        _m04 uint16_t                  irql;            //{ +0x000c    } | .Irql
        _m05 uint16_t                  vector;          //{ +0x000e    } | .Vector
        _m06 uint32_t                  control_base;    //{ +0x0010    } | .ControlBase
        _m07 uint32_t                  control_size;    //{ +0x0014    } | .ControlSize
        _m08 uint32_t                  cursor_base;     //{ +0x0018    } | .CursorBase
        _m09 uint32_t                  cursor_size;     //{ +0x001c    } | .CursorSize
        _m10 uint32_t                  frame_base;      //{ +0x0020    } | .FrameBase
        _m11 uint32_t                  frame_size;      //{ +0x0024    } | .FrameSize
                                                      
        SDK_NONVOL_PROPERTIES( "_VIDEO_HARDWARE_CONFIGURATION_DATA.$", 0x0, false, 0x291438fc91402e29 );               
        SDK_FIXED_SIZE( hardware_configuration_data_t, 0x28 );               
    };                                                
};
#include "magic/hardware_configuration_data_t.end.hpp"
SDK_VERIFY( struct video::hardware_configuration_data_t, 0x28 );
