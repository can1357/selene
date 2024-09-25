#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_safearray_union_t.start.hpp"
namespace win
{
    // [struct _wireSAFEARRAY_UNION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_safearray_union_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t sf_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sfType
                                 
        SDK_MAGIC_PROPERTIES( "_wireSAFEARRAY_UNION.$", 0x28, true, 0xe39128d50842dbe );        
        SDK_FIXED_SIZE( wire_safearray_union_t, 0x28 );        
    };                           
};
#include "magic/wire_safearray_union_t.end.hpp"
SDK_VERIFY( struct win::wire_safearray_union_t, 0x28 );
