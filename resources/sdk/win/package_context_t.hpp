#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/package_context_t.start.hpp"
namespace win
{
    struct hkey_t;

    // [struct PackageContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct package_context_t                            
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                              
        _m00 void*               user_token;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .userToken
        _m01 bool                is_initialized_for_deh;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .isInitializedForDEH
        _m02 struct win::hkey_t* package_id_key;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .packageIdKey
                                                        
        SDK_MAGIC_PROPERTIES( "PackageContext.$", 0x28, true, 0xe031bad689171dc8 );                       
        SDK_FIXED_SIZE( package_context_t, 0x28 );                       
    };                                                  
};
#include "magic/package_context_t.end.hpp"
SDK_VERIFY( struct win::package_context_t, 0x28 );
