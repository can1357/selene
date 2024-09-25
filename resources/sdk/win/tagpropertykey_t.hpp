#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/tagpropertykey_t.start.hpp"
namespace win
{
    // [struct _tagpropertykey]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tagpropertykey_t          
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                           
        _m00 struct nt::guid_t fmtid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fmtid
        _m01 uint32_t          pid;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pid
                                     
        SDK_MAGIC_PROPERTIES( "_tagpropertykey.$", 0x14, true, 0x9d12e6ed94401e17 );      
        SDK_FIXED_SIZE( tagpropertykey_t, 0x14 );      
    };                               
};
#include "magic/tagpropertykey_t.end.hpp"
SDK_VERIFY( struct win::tagpropertykey_t, 0x14 );
