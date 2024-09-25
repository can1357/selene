#pragma once
#include <sdkgen/support_library.hpp>
#include "configuration_component_t.hpp"

#include "magic/configuration_component_data_t.start.hpp"
namespace nt
{
    struct configuration_component_data_t;

    // [struct _CONFIGURATION_COMPONENT_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct configuration_component_data_t                                  
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                 
        _m00 struct nt::configuration_component_data_t* parent;              //{ +0x0000    +0x0000    +0x0000    } | .Parent
        _m01 struct nt::configuration_component_data_t* child;               //{ +0x0008    +0x0008    +0x0008    } | .Child
        _m02 struct nt::configuration_component_data_t* sibling;             //{ +0x0010    +0x0010    +0x0010    } | .Sibling
        _m03 struct nt::configuration_component_t       component_entry;     //{ +0x0018    +0x0018    +0x0018    } | .ComponentEntry
        _m04 void*                                      configuration_data;  //{ +0x0040    +0x0040    +0x0040    } | .ConfigurationData
                                                                           
        SDK_MAGIC_PROPERTIES( "_CONFIGURATION_COMPONENT_DATA.$", 0x48, true, 0x23dfe38f16983fed );                   
        SDK_FIXED_SIZE( configuration_component_data_t, 0x48 );                   
    };                                                                     
};
#include "magic/configuration_component_data_t.end.hpp"
SDK_VERIFY( struct nt::configuration_component_data_t, 0x48 );
