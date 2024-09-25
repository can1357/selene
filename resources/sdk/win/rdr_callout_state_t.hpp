#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../rpc/syntax_identifier_t.hpp"
#include "../rpc/http_redirector_stage_t.hpp"

#include "magic/rdr_callout_state_t.start.hpp"
namespace win
{
    // [struct _RDR_CALLOUT_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rdr_callout_state_t                                       
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                           
        _m00 int32_t                           last_error;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LastError
        _m01 void*                             last_ee_info;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastEEInfo
        _m02 enum rpc::http_redirector_stage_t last_called_stage;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastCalledStage
        _m03 uint16_t*                         server_name;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ServerName
        _m04 uint16_t*                         server_port;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ServerPort
        _m05 uint16_t*                         remote_user;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RemoteUser
        _m06 uint16_t*                         auth_type;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AuthType
        _m07 uint8_t                           resource_type_present;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ResourceTypePresent
        _m08 uint8_t                           session_id_present;     //{ +0x0039    +0x0039    +0x0039    +0x0039    } | .SessionIdPresent
        _m09 uint8_t                           interface_present;      //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .InterfacePresent
        _m10 struct nt::guid_t                 resource_type;          //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ResourceType
        _m11 struct nt::guid_t                 session_id;             //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .SessionId
        _m12 struct rpc::syntax_identifier_t   interface;              //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .Interface
        _m13 void*                             cert_context;           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CertContext
                                                                     
        SDK_MAGIC_PROPERTIES( "_RDR_CALLOUT_STATE.$", 0x78, true, 0x74438768845096bf );                      
        SDK_FIXED_SIZE( rdr_callout_state_t, 0x78 );                      
    };                                                               
};
#include "magic/rdr_callout_state_t.end.hpp"
SDK_VERIFY( struct win::rdr_callout_state_t, 0x78 );
