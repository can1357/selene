#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/klib_fns_t.start.hpp"
namespace kaux
{
    // [struct _AUX_KLIB_FNS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct klib_fns_t                                                   
    {                                                                   
        using p_query_module_information_t = sdk::function<int32_t(uint32_t*, uint32_t, void*)>*;                             
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                              
        _m00 p_query_module_information_t  query_module_information_ptr;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryModuleInformationPtr
                                                                        
        SDK_MAGIC_PROPERTIES( "_AUX_KLIB_FNS.$", 0x8, true, 0x133c1d6166813b5b );                             
        SDK_FIXED_SIZE( klib_fns_t, 0x8 );                              
    };                                                                  
};
#include "magic/klib_fns_t.end.hpp"
SDK_VERIFY( struct kaux::klib_fns_t, 0x8 );
