#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpn_serialization_t.hpp"
#include "commitvidpnrequest_diaginfo_t.hpp"

#include "magic/commitvidpnrequest_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_COMMITVIDPNREQUEST_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct commitvidpnrequest_serialization_t                                    
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                       
        _m00 uint32_t                                  affected_vid_pn_source_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AffectedVidPnSourceId
        _m01 struct dmm::commitvidpnrequest_diaginfo_t request_diag_info;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RequestDiagInfo
        _m02 struct dmm::vidpn_serialization_t         vid_pn_serialization;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VidPnSerialization
                                                                                 
        SDK_MAGIC_PROPERTIES( "_DMM_COMMITVIDPNREQUEST_SERIALIZATION.$", 0x1c, true, 0xb8d7d592fae977d8 );                          
        SDK_FIXED_SIZE( commitvidpnrequest_serialization_t, 0x1c );                          
    };                                                                           
};
#include "magic/commitvidpnrequest_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::commitvidpnrequest_serialization_t, 0x1c );
