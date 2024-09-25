#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "../nt/guid_t.hpp"
#include "net_luid_lh_t.hpp"

#include "magic/wdf_complete_add_params_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WDF_COMPLETE_ADD_PARAMS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdf_complete_add_params_t                           
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                     
        _m00 union ndis::net_luid_lh_t net_luid;                 //{ +0x0000    +0x0010    +0x0000    } | .NetLuid
        _m01 enum ndis::medium_t       media_type;               //{ +0x0008    +0x0018    +0x0008    } | .MediaType
        _m02 nt::unicode_view          base_name;                //{ +0x0010    +0x0020    +0x0010    } | .BaseName
        _m03 nt::unicode_view          adapter_instance_name;    //{ +0x0020    +0x0030    +0x0020    } | .AdapterInstanceName
                                                               
        // Windows 11                                          
        //                                                     
        _m04 struct nt::guid_t         interface_guid;           //{ +0x0000    } | .InterfaceGuid
        _m05 nt::unicode_view          driver_image_name;        //{ +0x0040    } | .DriverImageName
        _m06 void*                     execution_context_knobs;  //{ +0x0050    } | .ExecutionContextKnobs
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_WDF_COMPLETE_ADD_PARAMS.$", 0x30, true, 0xc27f11d1427ddfdf );                        
        SDK_DYNAMIC_SIZE( wdf_complete_add_params_t );                        
    };                                                         
};
#include "magic/wdf_complete_add_params_t.end.hpp"
