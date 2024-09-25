#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_hashed_url_t.hpp"

#include "magic/cert_biometric_data_t.start.hpp"
namespace win
{
    // [struct _CERT_BIOMETRIC_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_biometric_data_t                                            
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                  
        _m00 uint32_t                      dw_type_of_biometric_data_choice;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwTypeOfBiometricDataChoice
        _m01 uint32_t                      dw_predefined;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwPredefined
        _m02 char*                         psz_obj_id;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszObjId
        _m03 struct win::cert_hashed_url_t hashed_url;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HashedUrl
                                                                            
        SDK_MAGIC_PROPERTIES( "_CERT_BIOMETRIC_DATA.$", 0x40, true, 0xea5204e63b8d79cd );                                 
        SDK_FIXED_SIZE( cert_biometric_data_t, 0x40 );                                 
    };                                                                      
};
#include "magic/cert_biometric_data_t.end.hpp"
SDK_VERIFY( struct win::cert_biometric_data_t, 0x40 );
