#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muilangcfgnode_t.start.hpp"
namespace win
{
    // [struct _MUILANGCFGNODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muilangcfgnode_t                        
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 int16_t                lang_spec;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LangSpec
        _m01 uint16_t               fallback_types;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .FallbackTypes
        _m02 sdk::array<int16_t, 3> fallback_specs;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .FallbackSpecs
                                                   
        SDK_MAGIC_PROPERTIES( "_MUILANGCFGNODE.$", 0xc, true, 0x80f5ea6260ca2b8d );               
        SDK_FIXED_SIZE( muilangcfgnode_t, 0xc );               
    };                                             
};
#include "magic/muilangcfgnode_t.end.hpp"
SDK_VERIFY( struct win::muilangcfgnode_t, 0xc );
