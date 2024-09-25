#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

#include "magic/token_attr_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_TOKEN_ATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_attr_t                          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 struct nt::luid_t token_id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenId
        _m01 struct nt::luid_t authentication_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AuthenticationId
        _m02 struct nt::luid_t modified_id;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ModifiedId
                                                 
        SDK_MAGIC_PROPERTIES( "_ALPC_TOKEN_ATTR.$", 0x18, true, 0x8938e0e805efff48 );                  
        SDK_FIXED_SIZE( token_attr_t, 0x18 );                  
    };                                           
};
#include "magic/token_attr_t.end.hpp"
SDK_VERIFY( struct alpc::token_attr_t, 0x18 );
