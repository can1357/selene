#pragma once
#include <sdkgen/support_library.hpp>
#include "profile_departure_style_t.hpp"

#include "magic/dock_interface_t.start.hpp"
namespace nt
{
    // [struct DOCK_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dock_interface_t                                             
    {                                                                   
        using profile_departure_set_mode_t = sdk::function<uint32_t(void*, enum nt::profile_departure_style_t)>*;                           
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m00 uint16_t                        size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                        version;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                           context;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*     interface_reference;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*     interface_dereference;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 profile_departure_set_mode_t    profile_departure_set_mode;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProfileDepartureSetMode
        _m06 sdk::function<uint32_t(void*)>* profile_departure_update;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProfileDepartureUpdate
                                                                        
        SDK_MAGIC_PROPERTIES( "DOCK_INTERFACE.$", 0x30, true, 0x14fdc085b83af9b6 );                           
        SDK_FIXED_SIZE( dock_interface_t, 0x30 );                           
    };                                                                  
};
#include "magic/dock_interface_t.end.hpp"
SDK_VERIFY( struct nt::dock_interface_t, 0x30 );
