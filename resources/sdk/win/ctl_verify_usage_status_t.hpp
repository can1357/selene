#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ctl_verify_usage_status_t.start.hpp"
namespace win
{
    struct ctl_context_t;
    struct cert_context_t;

    // [struct _CTL_VERIFY_USAGE_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_verify_usage_status_t                               
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                         
        _m00 uint32_t                           cb_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                           dw_error;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwError
        _m02 uint32_t                           dw_flags;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlags
        _m03 const struct win::ctl_context_t**  pp_ctl;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ppCtl
        _m04 uint32_t                           dw_ctl_entry_index;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwCtlEntryIndex
        _m05 const struct win::cert_context_t** pp_signer;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ppSigner
        _m06 uint32_t                           dw_signer_index;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwSignerIndex
                                                                   
        SDK_MAGIC_PROPERTIES( "_CTL_VERIFY_USAGE_STATUS.$", 0x30, true, 0xb95bd061e5c3f2cc );                   
        SDK_FIXED_SIZE( ctl_verify_usage_status_t, 0x30 );                   
    };                                                             
};
#include "magic/ctl_verify_usage_status_t.end.hpp"
SDK_VERIFY( struct win::ctl_verify_usage_status_t, 0x30 );
