#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "interface_type_t.hpp"

#include "magic/miniport_adapter_registration_attributes_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_registration_attributes_t                    
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                               
        _m00 struct ndis::object_header_t header;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                        miniport_adapter_context;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportAdapterContext
        _m02 uint32_t                     attribute_flags;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AttributeFlags
        _m03 uint32_t                     check_for_hang_time_in_seconds;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CheckForHangTimeInSeconds
        _m04 enum ndis::interface_type_t  interface_type;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceType
                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES.$", 0x20, true, 0xdf33a60074dd3683 );                               
        SDK_FIXED_SIZE( miniport_adapter_registration_attributes_t, 0x20 );                               
    };                                                                   
};
#include "magic/miniport_adapter_registration_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_adapter_registration_attributes_t, 0x20 );
