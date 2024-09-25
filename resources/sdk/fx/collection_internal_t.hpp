#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/collection_internal_t.start.hpp"
namespace fx
{
    // [struct FxCollectionInternal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct collection_internal_t          
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                
        _m00 uint32_t         m_count;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Count
        _m01 nt::list_entry_t m_list_head;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_ListHead
                                          
        SDK_MAGIC_PROPERTIES( "FxCollectionInternal.$", 0x18, true, 0x2719f706ffe6191d );            
        SDK_FIXED_SIZE( collection_internal_t, 0x18 );            
    };                                    
};
#include "magic/collection_internal_t.end.hpp"
SDK_VERIFY( struct fx::collection_internal_t, 0x18 );
