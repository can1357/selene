#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/ctl_verify_usage_para_t.start.hpp"
namespace win
{
    // [struct _CTL_VERIFY_USAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_verify_usage_para_t                         
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 uint32_t                     cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::cryptoapi_blob_t list_identifier;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListIdentifier
        _m02 uint32_t                     c_ctl_store;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cCtlStore
        _m03 void**                       rgh_ctl_store;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .rghCtlStore
        _m04 uint32_t                     c_signer_store;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .cSignerStore
        _m05 void**                       rgh_signer_store;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .rghSignerStore
                                                           
        SDK_MAGIC_PROPERTIES( "_CTL_VERIFY_USAGE_PARA.$", 0x38, true, 0x2ad40f36e800d8b9 );                 
        SDK_FIXED_SIZE( ctl_verify_usage_para_t, 0x38 );                 
    };                                                     
};
#include "magic/ctl_verify_usage_para_t.end.hpp"
SDK_VERIFY( struct win::ctl_verify_usage_para_t, 0x38 );
