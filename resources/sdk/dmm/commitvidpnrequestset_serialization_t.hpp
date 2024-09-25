#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/commitvidpnrequestset_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_COMMITVIDPNREQUESTSET_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct commitvidpnrequestset_serialization_t                  
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                        
        _m00 uint8_t                 num_commit_vid_pn_requests;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumCommitVidPnRequests
        _m01 sdk::array<uint32_t, 1> commit_vid_pn_request_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CommitVidPnRequestOffset
                                                                  
        SDK_MAGIC_PROPERTIES( "_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION.$", 0x8, true, 0x8f252427e2f10a1e );                             
        SDK_FIXED_SIZE( commitvidpnrequestset_serialization_t, 0x8 );                             
    };                                                            
};
#include "magic/commitvidpnrequestset_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::commitvidpnrequestset_serialization_t, 0x8 );
