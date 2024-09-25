#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "containerversion_t.hpp"
#include "../tag/comversion_t.hpp"
#include "midl_i_local_object_exporter_0006_t.hpp"

namespace tag { struct dualstringarray_t; }

#include "magic/midl_i_local_object_exporter_0007_t.start.hpp"
namespace win
{
    struct hstring_t;

    // [struct __MIDL_ILocalObjectExporter_0007]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_local_object_exporter_0007_t                                        
    {                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m00 uint32_t                                      dw_tid;                      //{ +0x0000    +0x0000    +0x0000    } | .dwTid
        _m01 uint32_t                                      dw_pid;                      //{ +0x0004    +0x0004    +0x0004    } | .dwPid
        _m02 uint32_t                                      dw_authn_hint;               //{ +0x0008    +0x0008    +0x0008    } | .dwAuthnHint
        _m03 struct tag::comversion_t                      dcom_version;                //{ +0x000c    +0x000c    +0x000c    } | .dcomVersion
        _m04 struct win::containerversion_t                container_version;           //{ +0x0010    +0x0010    +0x0010    } | .containerVersion
        _m05 struct nt::guid_t                             ipid_rem_unknown;            //{ +0x0028    +0x0028    +0x0028    } | .ipidRemUnknown
        _m06 uint32_t                                      dw_flags;                    //{ +0x0038    +0x0038    +0x0038    } | .dwFlags
        _m07 struct tag::dualstringarray_t*                psa;                         //{ +0x0040    +0x0040    +0x0040    } | .psa
        _m08 struct nt::guid_t                             guid_process_identifier;     //{ +0x0048    +0x0048    +0x0048    } | .guidProcessIdentifier
        _m09 uint64_t                                      process_host_id;             //{ +0x0058    +0x0058    +0x0058    } | .processHostId
        _m10 enum win::midl_i_local_object_exporter_0006_t client_dependency_behavior;  //{ +0x0060    +0x0060    +0x0060    } | .clientDependencyBehavior
        _m11 struct win::hstring_t*                        package_full_name;           //{ +0x0068    +0x0068    +0x0068    } | .packageFullName
        _m12 struct win::hstring_t*                        user_sid;                    //{ +0x0070    +0x0070    +0x0070    } | .userSid
        _m13 struct win::hstring_t*                        appcontainer_sid;            //{ +0x0078    +0x0078    +0x0078    } | .appcontainerSid
        _m14 uint64_t                                      primary_oxid;                //{ +0x0080    +0x0080    +0x0080    } | .primaryOxid
        _m15 struct nt::guid_t                             primary_ipid_rem_unknown;    //{ +0x0088    +0x0088    +0x0088    } | .primaryIpidRemUnknown
                                                                                      
        SDK_MAGIC_PROPERTIES( "__MIDL_ILocalObjectExporter_0007.$", 0x98, true, 0xb9857dcdfb2e2aa2 );                           
        SDK_FIXED_SIZE( midl_i_local_object_exporter_0007_t, 0x98 );                           
    };                                                                                
};
#include "magic/midl_i_local_object_exporter_0007_t.end.hpp"
SDK_VERIFY( struct win::midl_i_local_object_exporter_0007_t, 0x98 );
