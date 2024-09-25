#pragma once
#include <sdkgen/support_library.hpp>
#include "pdo_event_callbacks_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../fx/collection_internal_t.hpp"

namespace fx { class device_t;                    }
namespace fx { class string_t;                    }
namespace fx { struct device_description_entry_t; }

#include "magic/pdo_init_t.start.hpp"
namespace wdf
{
    // [struct PdoInit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pdo_init_t                                                             
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                        
        _m00 struct wdf::pdo_event_callbacks_t      event_callbacks;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventCallbacks
        _m01 class fx::device_t*                    parent;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Parent
        _m02 class fx::string_t*                    device_id;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DeviceID
        _m03 class fx::string_t*                    instance_id;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .InstanceID
        _m04 struct fx::collection_internal_t       hardware_i_ds;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .HardwareIDs
        _m05 struct fx::collection_internal_t       compatible_i_ds;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CompatibleIDs
        _m06 class fx::string_t*                    container_id;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ContainerID
        _m07 struct nt::single_list_entry_t         device_text;                    //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .DeviceText
        _m08 struct nt::single_list_entry_t**       last_device_text_entry;         //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .LastDeviceTextEntry
        _m09 struct fx::device_description_entry_t* description_entry;              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .DescriptionEntry
        _m10 uint32_t                               default_locale;                 //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DefaultLocale
        _m11 uint8_t                                raw;                            //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .Raw
        _m12 uint8_t                                _static;                        //{ +0x00ad    +0x00ad    +0x00ad    +0x00ad    } | .Static
        _m13 uint8_t                                forward_request_to_parent;      //{ +0x00ae    +0x00ae    +0x00ae    +0x00ae    } | .ForwardRequestToParent
                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                        
        _m14 uint8_t                                no_power_dependency_on_parent;  //{ +0x00af    +0x00af    +0x00af    } | .NoPowerDependencyOnParent
                                                                                  
        SDK_MAGIC_PROPERTIES( "PdoInit.$", 0xb0, true, 0xbf4aed2d34ea812b );                              
        SDK_FIXED_SIZE( pdo_init_t, 0xb0 );                                       
    };                                                                            
};
#include "magic/pdo_init_t.end.hpp"
SDK_VERIFY( struct wdf::pdo_init_t, 0xb0 );
