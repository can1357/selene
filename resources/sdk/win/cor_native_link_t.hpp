#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_native_link_t.start.hpp"
namespace win
{
    // [struct COR_NATIVE_LINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_native_link_t        
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t  m_link_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_linkType
        _m01 uint8_t  m_flags;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .m_flags
        _m02 uint32_t m_entry_point;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .m_entryPoint
                                    
        SDK_MAGIC_PROPERTIES( "COR_NATIVE_LINK.$", 0x6, true, 0x74fc6a743e922bc2 );              
        SDK_FIXED_SIZE( cor_native_link_t, 0x6 );              
    };                              
};
#include "magic/cor_native_link_t.end.hpp"
SDK_VERIFY( struct win::cor_native_link_t, 0x6 );
