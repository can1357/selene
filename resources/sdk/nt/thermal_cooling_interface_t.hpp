#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thermal_cooling_interface_t.start.hpp"
namespace nt
{
    // [struct _THERMAL_COOLING_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thermal_cooling_interface_t                                   
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                               
        _m00 uint16_t                              size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                              version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                 context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*           interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*           interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 uint32_t                              flags;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m06 sdk::function<void(void*, uint8_t)>*  active_cooling;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ActiveCooling
        _m07 sdk::function<void(void*, uint32_t)>* passive_cooling;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PassiveCooling
                                                                         
        SDK_MAGIC_PROPERTIES( "_THERMAL_COOLING_INTERFACE.$", 0x38, true, 0x318feb90a1ac6a40 );                      
        SDK_FIXED_SIZE( thermal_cooling_interface_t, 0x38 );                      
    };                                                                   
};
#include "magic/thermal_cooling_interface_t.end.hpp"
SDK_VERIFY( struct nt::thermal_cooling_interface_t, 0x38 );
