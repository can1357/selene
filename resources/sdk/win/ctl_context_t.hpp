#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ctl_context_t.start.hpp"
namespace win
{
    struct ctl_info_t;

    // [struct _CTL_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_context_t                                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                         
        _m00 uint32_t                dw_msg_and_cert_encoding_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMsgAndCertEncodingType
        _m01 uint8_t*                pb_ctl_encoded;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbCtlEncoded
        _m02 uint32_t                cb_ctl_encoded;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbCtlEncoded
        _m03 struct win::ctl_info_t* p_ctl_info;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pCtlInfo
        _m04 void*                   h_cert_store;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hCertStore
        _m05 void*                   h_crypt_msg;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hCryptMsg
        _m06 uint8_t*                pb_ctl_content;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pbCtlContent
        _m07 uint32_t                cb_ctl_content;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .cbCtlContent
                                                                   
        SDK_MAGIC_PROPERTIES( "_CTL_CONTEXT.$", 0x40, true, 0x1fe35d9d0651fe4a );                              
        SDK_FIXED_SIZE( ctl_context_t, 0x40 );                              
    };                                                             
};
#include "magic/ctl_context_t.end.hpp"
SDK_VERIFY( struct win::ctl_context_t, 0x40 );
