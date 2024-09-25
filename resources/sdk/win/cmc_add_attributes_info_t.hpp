#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmc_add_attributes_info_t.start.hpp"
namespace win
{
    struct crypt_attribute_t;

    // [struct _CMC_ADD_ATTRIBUTES_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_add_attributes_info_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 uint32_t                       dw_cmc_data_reference;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCmcDataReference
        _m01 uint32_t                       c_cert_reference;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cCertReference
        _m02 uint32_t*                      rgdw_cert_reference;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgdwCertReference
        _m03 uint32_t                       c_attribute;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cAttribute
        _m04 struct win::crypt_attribute_t* rg_attribute;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgAttribute
                                                                  
        SDK_MAGIC_PROPERTIES( "_CMC_ADD_ATTRIBUTES_INFO.$", 0x20, true, 0x10e6424de83f18a8 );                      
        SDK_FIXED_SIZE( cmc_add_attributes_info_t, 0x20 );                      
    };                                                            
};
#include "magic/cmc_add_attributes_info_t.end.hpp"
SDK_VERIFY( struct win::cmc_add_attributes_info_t, 0x20 );
