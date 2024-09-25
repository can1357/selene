#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct hhive_t; }

#include "magic/key_reference_t.start.hpp"
namespace cm
{
    // [struct _CM_KEY_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_reference_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                
        _m00 uint32_t            key_cell;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyCell
        _m01 struct nt::hhive_t* key_hive;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyHive
                                          
        SDK_MAGIC_PROPERTIES( "_CM_KEY_REFERENCE.$", 0x10, true, 0xf9402696ed80834a );         
        SDK_FIXED_SIZE( key_reference_t, 0x10 );         
    };                                    
};
#include "magic/key_reference_t.end.hpp"
SDK_VERIFY( struct cm::key_reference_t, 0x10 );
