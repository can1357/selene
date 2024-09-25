#pragma once
#include <sdkgen/support_library.hpp>
#include "ctl_usage_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/ctl_find_usage_para_t.start.hpp"
namespace win
{
    struct cert_info_t;

    // [struct _CTL_FIND_USAGE_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_find_usage_para_t                          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 uint32_t                     cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::ctl_usage_t      subject_usage;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubjectUsage
        _m02 struct win::cryptoapi_blob_t list_identifier;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ListIdentifier
        _m03 struct win::cert_info_t*     p_signer;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pSigner
                                                          
        SDK_MAGIC_PROPERTIES( "_CTL_FIND_USAGE_PARA.$", 0x30, true, 0x88406a8fe3c64162 );                
        SDK_FIXED_SIZE( ctl_find_usage_para_t, 0x30 );                
    };                                                    
};
#include "magic/ctl_find_usage_para_t.end.hpp"
SDK_VERIFY( struct win::ctl_find_usage_para_t, 0x30 );
