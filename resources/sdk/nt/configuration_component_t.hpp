#pragma once
#include <sdkgen/support_library.hpp>
#include "device_flags_t.hpp"
#include "configuration_type_t.hpp"
#include "configuration_class_t.hpp"

#include "magic/configuration_component_t.start.hpp"
namespace nt
{
    // [struct _CONFIGURATION_COMPONENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct configuration_component_t                                  
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                            
        _m00 enum nt::configuration_class_t _class;                     //{ +0x0000    +0x0000    +0x0000    } | .Class
        _m01 enum nt::configuration_type_t  type;                       //{ +0x0004    +0x0004    +0x0004    } | .Type
        _m02 struct nt::device_flags_t      flags;                      //{ +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint16_t                       version;                    //{ +0x000c    +0x000c    +0x000c    } | .Version
        _m04 uint16_t                       revision;                   //{ +0x000e    +0x000e    +0x000e    } | .Revision
        _m05 uint32_t                       key;                        //{ +0x0010    +0x0010    +0x0010    } | .Key
        _m06 uint32_t                       affinity_mask;              //{ +0x0014    +0x0014    +0x0014    } | .AffinityMask
        _m07 uint16_t                       group;                      //{ +0x0014    +0x0014    +0x0014    } | .Group
        _m08 uint16_t                       group_index;                //{ +0x0016    +0x0016    +0x0016    } | .GroupIndex
        _m09 uint32_t                       configuration_data_length;  //{ +0x0018    +0x0018    +0x0018    } | .ConfigurationDataLength
        _m10 uint32_t                       identifier_length;          //{ +0x001c    +0x001c    +0x001c    } | .IdentifierLength
        _m11 char*                          identifier;                 //{ +0x0020    +0x0020    +0x0020    } | .Identifier
                                                                      
        SDK_MAGIC_PROPERTIES( "_CONFIGURATION_COMPONENT.$", 0x28, true, 0xfeeead23fb664f79 );                          
        SDK_FIXED_SIZE( configuration_component_t, 0x28 );                          
    };                                                                
};
#include "magic/configuration_component_t.end.hpp"
SDK_VERIFY( struct nt::configuration_component_t, 0x28 );
