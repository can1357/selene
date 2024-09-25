#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmc_add_extensions_info_t.start.hpp"
namespace win
{
    struct cert_extension_t;

    // [struct _CMC_ADD_EXTENSIONS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_add_extensions_info_t                             
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                       
        _m00 uint32_t                      dw_cmc_data_reference;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCmcDataReference
        _m01 uint32_t                      c_cert_reference;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cCertReference
        _m02 uint32_t*                     rgdw_cert_reference;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgdwCertReference
        _m03 uint32_t                      c_extension;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cExtension
        _m04 struct win::cert_extension_t* rg_extension;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgExtension
                                                                 
        SDK_MAGIC_PROPERTIES( "_CMC_ADD_EXTENSIONS_INFO.$", 0x20, true, 0x311a07fefa0db054 );                      
        SDK_FIXED_SIZE( cmc_add_extensions_info_t, 0x20 );                      
    };                                                           
};
#include "magic/cmc_add_extensions_info_t.end.hpp"
SDK_VERIFY( struct win::cmc_add_extensions_info_t, 0x20 );
