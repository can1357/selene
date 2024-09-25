#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_logotype_info_t.start.hpp"
namespace win
{
    struct cert_logotype_data_t;
    struct cert_logotype_reference_t;

    // [struct _CERT_LOGOTYPE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_info_t                                              
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                   
        _m00 uint32_t                               dw_logotype_info_choice;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwLogotypeInfoChoice
        _m01 struct win::cert_logotype_data_t*      p_logotype_direct_info;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pLogotypeDirectInfo
        _m02 struct win::cert_logotype_reference_t* p_logotype_indirect_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pLogotypeIndirectInfo
                                                                             
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_INFO.$", 0x10, true, 0x9ebc82441fcad096 );                         
        SDK_FIXED_SIZE( cert_logotype_info_t, 0x10 );                         
    };                                                                       
};
#include "magic/cert_logotype_info_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_info_t, 0x10 );
