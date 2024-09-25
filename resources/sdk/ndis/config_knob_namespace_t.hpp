#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "config_knob_namespace_type_t.hpp"

#include "magic/config_knob_namespace_t.start.hpp"
namespace ndis
{
    // [struct _CONFIG_KNOB_NAMESPACE]
    // => Windows 11
    //
    struct config_knob_namespace_t                                  
    {                                                               
        // Windows 11                                               
        //                                                          
        _m00 enum ndis::config_knob_namespace_type_t namespace_type;  //{ +0x0000    } | .NamespaceType
        _m01 struct nt::guid_t                       object_id;       //{ +0x0004    } | .ObjectId
                                                                    
        SDK_MAGIC_PROPERTIES( "_CONFIG_KNOB_NAMESPACE.$", 0x0, false, 0xd83736441a77e13d );               
        SDK_FIXED_SIZE( config_knob_namespace_t, 0x14 );               
    };                                                              
};
#include "magic/config_knob_namespace_t.end.hpp"
SDK_VERIFY( struct ndis::config_knob_namespace_t, 0x14 );
