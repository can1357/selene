#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prov_enumalgs_t.start.hpp"
namespace win
{
    // [struct _PROV_ENUMALGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct prov_enumalgs_t                    
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                    
        _m00 uint32_t             ai_algid;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .aiAlgid
        _m01 uint32_t             dw_bit_len;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwBitLen
        _m02 uint32_t             dw_name_len;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwNameLen
        _m03 sdk::array<char, 20> sz_name;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .szName
                                              
        SDK_MAGIC_PROPERTIES( "_PROV_ENUMALGS.$", 0x20, true, 0x26be310dcacd9d3 );            
        SDK_FIXED_SIZE( prov_enumalgs_t, 0x20 );            
    };                                        
};
#include "magic/prov_enumalgs_t.end.hpp"
SDK_VERIFY( struct win::prov_enumalgs_t, 0x20 );
