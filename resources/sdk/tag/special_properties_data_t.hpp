#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/special_properties_data_t.start.hpp"
namespace tag
{
    // [struct tagSpecialPropertiesData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct special_properties_data_t                          
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint32_t                dw_session_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSessionId
        _m01 int32_t                 f_remote_this_session_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fRemoteThisSessionId
        _m02 int32_t                 f_client_impersonating;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fClientImpersonating
        _m03 int32_t                 f_partition_id_present;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fPartitionIDPresent
        _m04 uint32_t                dw_default_authn_lvl;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwDefaultAuthnLvl
        _m05 struct nt::guid_t       guid_partition;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .guidPartition
        _m06 uint32_t                dw_prt_flags;              //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwPRTFlags
        _m07 uint32_t                dw_orig_clsctx;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwOrigClsctx
        _m08 uint32_t                dw_flags;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwFlags
        _m09 uint32_t                dw_pid;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwPid
        _m10 uint64_t                hwnd;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .hwnd
        _m11 uint32_t                ul_service_id;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ulServiceId
        _m12 sdk::array<uint32_t, 4> dw_reserved;               //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwReserved
                                                              
        SDK_MAGIC_PROPERTIES( "tagSpecialPropertiesData.$", 0x58, true, 0x609e60426587e414 );                         
        SDK_FIXED_SIZE( special_properties_data_t, 0x58 );                         
    };                                                        
};
#include "magic/special_properties_data_t.end.hpp"
SDK_VERIFY( struct tag::special_properties_data_t, 0x58 );
