#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/collection_entry_t.start.hpp"
namespace fx
{
    class object_t;

    // [class FxCollectionEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class collection_entry_t                  
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 class fx::object_t* m_object;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Object
        _m01 nt::list_entry_t    m_list_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_ListEntry
                                              
        SDK_MAGIC_PROPERTIES( "FxCollectionEntry.$", 0x18, true, 0x1a0a2da648475752 );             
        SDK_FIXED_SIZE( collection_entry_t, 0x18 );             
    };                                        
};
#include "magic/collection_entry_t.end.hpp"
SDK_VERIFY( class fx::collection_entry_t, 0x18 );
