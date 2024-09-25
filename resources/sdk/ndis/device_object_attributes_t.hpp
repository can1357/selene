#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct guid_t;          }
namespace nt { struct irp_t;           }

#include "magic/device_object_attributes_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_DEVICE_OBJECT_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_object_attributes_t                         
    {                                                         
        using major_functions_t = sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>**;                    
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 struct ndis::object_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 nt::unicode_view*            device_name;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceName
        _m02 nt::unicode_view*            symbolic_name;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SymbolicName
        _m03 major_functions_t            major_functions;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MajorFunctions
        _m04 uint32_t                     extension_size;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtensionSize
        _m05 const nt::unicode_view*      default_sddl_string;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DefaultSDDLString
        _m06 const struct nt::guid_t*     device_class_guid;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceClassGuid
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_DEVICE_OBJECT_ATTRIBUTES.$", 0x38, true, 0x9fd5451ea88a9f25 );                    
        SDK_FIXED_SIZE( device_object_attributes_t, 0x38 );                    
    };                                                        
};
#include "magic/device_object_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::device_object_attributes_t, 0x38 );
