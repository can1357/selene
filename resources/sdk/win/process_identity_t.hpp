#pragma once
#include <sdkgen/support_library.hpp>
#include "string_cache_t.hpp"

#include "magic/process_identity_t.start.hpp"
namespace win
{
    // [class ProcessIdentity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class process_identity_t                                            
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                              
        _m00 class win::string_cache_t cached_package_family_name;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cachedPackageFamilyName
        _m01 class win::string_cache_t cached_application_user_model_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cachedApplicationUserModelId
                                                                        
        SDK_MAGIC_PROPERTIES( "ProcessIdentity.$", 0x10, true, 0x7d6e935ad1742be9 );                                 
        SDK_FIXED_SIZE( process_identity_t, 0x10 );                                 
    };                                                                  
};
#include "magic/process_identity_t.end.hpp"
SDK_VERIFY( class win::process_identity_t, 0x10 );
