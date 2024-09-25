#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/key_type_subtype_t.start.hpp"
namespace win
{
    // [struct _KEY_TYPE_SUBTYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_type_subtype_t              
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 uint32_t          dw_key_spec;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwKeySpec
        _m01 struct nt::guid_t type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 struct nt::guid_t subtype;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Subtype
                                           
        SDK_MAGIC_PROPERTIES( "_KEY_TYPE_SUBTYPE.$", 0x24, true, 0x152c571388a00ac7 );            
        SDK_FIXED_SIZE( key_type_subtype_t, 0x24 );            
    };                                     
};
#include "magic/key_type_subtype_t.end.hpp"
SDK_VERIFY( struct win::key_type_subtype_t, 0x24 );
