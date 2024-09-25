#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/buffer_t.hpp"

#include "magic/secpkg_app_mode_info_t.start.hpp"
namespace win
{
    // [struct _SECPKG_APP_MODE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct secpkg_app_mode_info_t               
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                      
        _m00 uint32_t             user_function;  //{ +0x0000    +0x0000    +0x0000    } | .UserFunction
        _m01 uint64_t             argument1;      //{ +0x0008    +0x0008    +0x0008    } | .Argument1
        _m02 uint64_t             argument2;      //{ +0x0010    +0x0010    +0x0010    } | .Argument2
        _m03 struct sec::buffer_t user_data;      //{ +0x0018    +0x0018    +0x0018    } | .UserData
        _m04 uint8_t              return_to_lsa;  //{ +0x0028    +0x0028    +0x0028    } | .ReturnToLsa
                                                
        SDK_MAGIC_PROPERTIES( "_SECPKG_APP_MODE_INFO.$", 0x30, true, 0x4d8a3130a8acff37 );              
        SDK_FIXED_SIZE( secpkg_app_mode_info_t, 0x30 );              
    };                                          
};
#include "magic/secpkg_app_mode_info_t.end.hpp"
SDK_VERIFY( struct win::secpkg_app_mode_info_t, 0x30 );
