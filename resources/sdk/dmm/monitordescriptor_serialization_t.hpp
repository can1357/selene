#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/monitor_descriptor_type_t.hpp"
#include "../d3dk/mdt/monitor_capabilities_origin_t.hpp"

#include "magic/monitordescriptor_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_MONITORDESCRIPTOR_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitordescriptor_serialization_t                      
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                        
        _m00 uint32_t                                      id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 enum d3dk::mdt::monitor_descriptor_type_t     type;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 enum d3dk::mdt::monitor_capabilities_origin_t origin;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Origin
        _m03 sdk::array<uint8_t, 128>                      data;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Data
                                                                  
        SDK_MAGIC_PROPERTIES( "_DMM_MONITORDESCRIPTOR_SERIALIZATION.$", 0x8c, true, 0xcc1d660e8ecfb9b4 );       
        SDK_FIXED_SIZE( monitordescriptor_serialization_t, 0x8c );       
    };                                                            
};
#include "magic/monitordescriptor_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::monitordescriptor_serialization_t, 0x8c );
