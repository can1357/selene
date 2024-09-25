#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_user_marshal_info_level1_t.hpp"

#include "magic/ndr_user_marshal_info_t.start.hpp"
namespace win
{
    // [struct _NDR_USER_MARSHAL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_user_marshal_info_t                                        
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                
        _m00 uint32_t                                   information_level;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InformationLevel
        _m01 struct win::ndr_user_marshal_info_level1_t level1;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Level1
                                                                          
        SDK_MAGIC_PROPERTIES( "_NDR_USER_MARSHAL_INFO.$", 0x58, true, 0x77e2cdf25ddcac39 );                  
        SDK_FIXED_SIZE( ndr_user_marshal_info_t, 0x58 );                  
    };                                                                    
};
#include "magic/ndr_user_marshal_info_t.end.hpp"
SDK_VERIFY( struct win::ndr_user_marshal_info_t, 0x58 );
