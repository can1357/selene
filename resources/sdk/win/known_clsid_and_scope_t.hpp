#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/known_clsid_and_scope_t.start.hpp"
namespace win
{
    // [struct KnownClsidAndScope]
    // => Windows 10 v1607
    //
    struct known_clsid_and_scope_t                
    {                                             
        // Windows 10 v1607                       
        //                                        
        _m00 struct nt::guid_t clsid;               //{ +0x0000    } | .clsid
        _m01 uint32_t          registration_scope;  //{ +0x0010    } | .registrationScope
                                                  
        SDK_MAGIC_PROPERTIES( "KnownClsidAndScope.$", 0x0, false, 0xc56d595b83a93b6a );                   
        SDK_FIXED_SIZE( known_clsid_and_scope_t, 0x14 );                   
    };                                            
};
#include "magic/known_clsid_and_scope_t.end.hpp"
SDK_VERIFY( struct win::known_clsid_and_scope_t, 0x14 );
