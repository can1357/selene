#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_trust_list_info_t.start.hpp"
namespace win
{
    struct ctl_entry_t;
    struct ctl_context_t;

    // [struct _CERT_TRUST_LIST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_trust_list_info_t                           
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m00 uint32_t                         cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::ctl_entry_t*         p_ctl_entry;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCtlEntry
        _m02 const struct win::ctl_context_t* p_ctl_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pCtlContext
                                                            
        SDK_MAGIC_PROPERTIES( "_CERT_TRUST_LIST_INFO.$", 0x18, true, 0x5cf94e30a5ea3ee5 );              
        SDK_FIXED_SIZE( cert_trust_list_info_t, 0x18 );              
    };                                                      
};
#include "magic/cert_trust_list_info_t.end.hpp"
SDK_VERIFY( struct win::cert_trust_list_info_t, 0x18 );
