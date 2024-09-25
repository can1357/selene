#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "device_process_query_interface_request_t.hpp"

namespace nt { struct interface_t; }

#include "magic/query_interface_t.start.hpp"
namespace fx
{
    class device_t;

    // [struct FxQueryInterface]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct query_interface_t                                             
    {                                                                    
        using m_process_request_t = class fx::device_process_query_interface_request_t;                             
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                               
        _m00 struct nt::guid_t              m_interface_type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_InterfaceType
        _m01 struct nt::interface_t*        m_interface;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Interface
        _m02 class fx::device_t*            m_device;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_Device
        _m03 m_process_request_t            m_process_request;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ProcessRequest
        _m04 struct nt::single_list_entry_t m_entry;                       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_Entry
        _m05 uint8_t                        m_import_interface;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_ImportInterface
        _m06 uint8_t                        m_send_query_to_parent_stack;  //{ +0x0031    +0x0031    +0x0031    +0x0031    } | .m_SendQueryToParentStack
        _m07 uint8_t                        m_embedded_interface;          //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .m_EmbeddedInterface
                                                                         
        SDK_MAGIC_PROPERTIES( "FxQueryInterface.$", 0x38, true, 0xdc17f5306389462c );                             
        SDK_FIXED_SIZE( query_interface_t, 0x38 );                             
    };                                                                   
};
#include "magic/query_interface_t.end.hpp"
SDK_VERIFY( struct fx::query_interface_t, 0x38 );
