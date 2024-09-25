#pragma once
#include <sdkgen/support_library.hpp>
#include "scmregkey_t.hpp"
#include "../nt/guid_t.hpp"

#include "magic/mgot_scm_token_t.start.hpp"
namespace win
{
    // [struct _MgotScmToken]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mgot_scm_token_t                      
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 struct nt::guid_t       clsid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clsid
        _m01 struct win::scmregkey_t srk_reg_key;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .srkRegKey
                                                 
        SDK_MAGIC_PROPERTIES( "_MgotScmToken.$", 0x20, true, 0x48126bfdb2ff0c17 );            
        SDK_FIXED_SIZE( mgot_scm_token_t, 0x20 );            
    };                                           
};
#include "magic/mgot_scm_token_t.end.hpp"
SDK_VERIFY( struct win::mgot_scm_token_t, 0x20 );
