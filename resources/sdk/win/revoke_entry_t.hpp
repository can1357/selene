#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/revoke_entry_t.start.hpp"
namespace win
{
    // [struct _RevokeEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct revoke_entry_t             
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                            
        _m00 struct nt::guid_t clsid;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clsid
        _m01 uint32_t          dw_reg;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwReg
                                      
        SDK_MAGIC_PROPERTIES( "_RevokeEntry.$", 0x14, true, 0x8811e17d0c9f7e15 );       
        SDK_FIXED_SIZE( revoke_entry_t, 0x14 );       
    };                                
};
#include "magic/revoke_entry_t.end.hpp"
SDK_VERIFY( struct win::revoke_entry_t, 0x14 );
