#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_name_constraints_info_t.start.hpp"
namespace win
{
    struct cert_general_subtree_t;

    // [struct _CERT_NAME_CONSTRAINTS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_name_constraints_info_t                               
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 uint32_t                            c_permitted_subtree;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cPermittedSubtree
        _m01 struct win::cert_general_subtree_t* rg_permitted_subtree;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgPermittedSubtree
        _m02 uint32_t                            c_excluded_subtree;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cExcludedSubtree
        _m03 struct win::cert_general_subtree_t* rg_excluded_subtree;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgExcludedSubtree
                                                                      
        SDK_MAGIC_PROPERTIES( "_CERT_NAME_CONSTRAINTS_INFO.$", 0x20, true, 0x7edac6a65619df7e );                     
        SDK_FIXED_SIZE( cert_name_constraints_info_t, 0x20 );                     
    };                                                                
};
#include "magic/cert_name_constraints_info_t.end.hpp"
SDK_VERIFY( struct win::cert_name_constraints_info_t, 0x20 );
