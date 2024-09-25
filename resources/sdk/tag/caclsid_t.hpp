#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/caclsid_t.start.hpp"
namespace tag
{
    // [struct tagCACLSID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caclsid_t                    
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                              
        _m00 uint32_t           c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 struct nt::guid_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                                        
        SDK_MAGIC_PROPERTIES( "tagCACLSID.$", 0x10, true, 0xdcfcd0f56a39f8d6 );        
        SDK_FIXED_SIZE( caclsid_t, 0x10 );        
    };                                  
};
#include "magic/caclsid_t.end.hpp"
SDK_VERIFY( struct tag::caclsid_t, 0x10 );
