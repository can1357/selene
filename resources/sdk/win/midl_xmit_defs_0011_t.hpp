#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_xmit_defs_0011_t.start.hpp"
namespace win
{
    struct containerthat_t;
    struct container_extent_t;
    struct midl_xmit_defs_0010_t;

    // [struct __MIDL_XmitDefs_0011]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_xmit_defs_0011_t                                                   
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                         
        _m00 uint64_t                           marshaling_set_id;                   //{ +0x0008    +0x0000    +0x0000    +0x0000    } | .marshalingSetId
        _m01 struct win::midl_xmit_defs_0010_t* p_async_response_block;              //{ +0x0018    +0x0010    +0x0010    +0x0010    } | .pAsyncResponseBlock
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                         
        _m02 struct win::container_extent_t*    container_error_information;         //{ +0x0018    +0x0018    +0x0018    } | .containerErrorInformation
        _m03 struct win::containerthat_t*       container_passthrough_data;          //{ +0x0020    +0x0020    +0x0020    } | .containerPassthroughData
                                                                                   
        // Windows 10 v1607                                                        
        //                                                                         
        _m04 uint64_t                           marshaling_set_acknowledgment_oxid;  //{ +0x0000    } | .marshalingSetAcknowledgmentOxid
                                                                                   
        SDK_MAGIC_PROPERTIES( "__MIDL_XmitDefs_0011.$", 0x28, true, 0xab6cac184b43d2cf );                                   
        SDK_DYNAMIC_SIZE( midl_xmit_defs_0011_t );                                   
    };                                                                             
};
#include "magic/midl_xmit_defs_0011_t.end.hpp"
