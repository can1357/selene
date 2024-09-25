#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/rsdsi_t.start.hpp"
namespace win
{
    // [struct _RSDSI]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rsdsi_t                          
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                  
        _m00 uint32_t              dw_sig;    //{ +0x0000    +0x0000    +0x0000    } | .dwSig
        _m01 struct nt::guid_t     guid_sig;  //{ +0x0004    +0x0004    +0x0004    } | .guidSig
        _m02 uint32_t              age;       //{ +0x0014    +0x0014    +0x0014    } | .age
        _m03 sdk::array<char, 780> sz_pdb;    //{ +0x0018    +0x0018    +0x0018    } | .szPdb
                                            
        SDK_MAGIC_PROPERTIES( "_RSDSI.$", 0x324, true, 0x39893b764e4da5d );         
        SDK_FIXED_SIZE( rsdsi_t, 0x324 );         
    };                                      
};
#include "magic/rsdsi_t.end.hpp"
SDK_VERIFY( struct win::rsdsi_t, 0x324 );
