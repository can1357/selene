#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmworking_set_expansion_head_t.start.hpp"
namespace nt
{
    // [struct _MMWORKING_SET_EXPANSION_HEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmworking_set_expansion_head_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::list_entry_t list_head;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
                                         
        SDK_MAGIC_PROPERTIES( "_MMWORKING_SET_EXPANSION_HEAD.$", 0x10, true, 0xb531971d1c038da6 );          
        SDK_FIXED_SIZE( mmworking_set_expansion_head_t, 0x10 );          
    };                                   
};
#include "magic/mmworking_set_expansion_head_t.end.hpp"
SDK_VERIFY( struct nt::mmworking_set_expansion_head_t, 0x10 );
