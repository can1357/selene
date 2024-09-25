#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prov_enumalgs_ex_t.start.hpp"
namespace win
{
    // [struct _PROV_ENUMALGS_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct prov_enumalgs_ex_t                      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                         
        _m00 uint32_t             ai_algid;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .aiAlgid
        _m01 uint32_t             dw_default_len;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwDefaultLen
        _m02 uint32_t             dw_min_len;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMinLen
        _m03 uint32_t             dw_max_len;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwMaxLen
        _m04 uint32_t             dw_protocols;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwProtocols
        _m05 uint32_t             dw_name_len;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwNameLen
        _m06 sdk::array<char, 20> sz_name;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .szName
        _m07 uint32_t             dw_long_name_len;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwLongNameLen
        _m08 sdk::array<char, 40> sz_long_name;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .szLongName
                                                   
        SDK_MAGIC_PROPERTIES( "_PROV_ENUMALGS_EX.$", 0x58, true, 0xe0b7e71e6386486a );                 
        SDK_FIXED_SIZE( prov_enumalgs_ex_t, 0x58 );                 
    };                                             
};
#include "magic/prov_enumalgs_ex_t.end.hpp"
SDK_VERIFY( struct win::prov_enumalgs_ex_t, 0x58 );
