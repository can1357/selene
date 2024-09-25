#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

namespace nt { struct guid_t; }

#include "magic/switch_net_buffer_list_context_type_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_net_buffer_list_context_type_info_t  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 struct ndis::object_header_t header;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 char*                        context_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextName
        _m02 struct nt::guid_t*           extension_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExtensionId
                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_SWITCH_NET_BUFFER_LIST_CONTEXT_TYPE_INFO.$", 0x18, true, 0xf908538d56ca7d2 );             
        SDK_FIXED_SIZE( switch_net_buffer_list_context_type_info_t, 0x18 );             
    };                                                 
};
#include "magic/switch_net_buffer_list_context_type_info_t.end.hpp"
SDK_VERIFY( struct ndis::switch_net_buffer_list_context_type_info_t, 0x18 );
