#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/rsdsi_header_t.start.hpp"
namespace win
{
    // [struct _RSDSI_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rsdsi_header_t               
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 uint32_t          dw_sig;    //{ +0x0000    +0x0000    +0x0000    } | .dwSig
        _m01 struct nt::guid_t guid_sig;  //{ +0x0004    +0x0004    +0x0004    } | .guidSig
        _m02 uint32_t          age;       //{ +0x0014    +0x0014    +0x0014    } | .age
                                        
        SDK_MAGIC_PROPERTIES( "_RSDSI_HEADER.$", 0x18, true, 0xe48288f0b1c4bf97 );         
        SDK_FIXED_SIZE( rsdsi_header_t, 0x18 );         
    };                                  
};
#include "magic/rsdsi_header_t.end.hpp"
SDK_VERIFY( struct win::rsdsi_header_t, 0x18 );
