#pragma once
#include <sdkgen/support_library.hpp>
#include "net_luid_lh_t.hpp"
#include "object_header_t.hpp"

#include "magic/protocol_restart_parameters_t.start.hpp"
namespace ndis
{
    struct restart_attributes_t;

    // [struct _NDIS_PROTOCOL_RESTART_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocol_restart_parameters_t                                         
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                       
        _m00 struct ndis::object_header_t       header;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t*                           filter_module_name_buffer;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FilterModuleNameBuffer
        _m02 uint32_t                           filter_module_name_buffer_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FilterModuleNameBufferLength
        _m03 struct ndis::restart_attributes_t* restart_attributes;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RestartAttributes
        _m04 uint32_t                           bound_if_index;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BoundIfIndex
        _m05 union ndis::net_luid_lh_t          bound_if_netluid;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BoundIfNetluid
        _m06 uint32_t                           flags;                             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_PROTOCOL_RESTART_PARAMETERS.$", 0x38, true, 0x54f489577c75ecb3 );                                 
        SDK_FIXED_SIZE( protocol_restart_parameters_t, 0x38 );                                 
    };                                                                           
};
#include "magic/protocol_restart_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::protocol_restart_parameters_t, 0x38 );
