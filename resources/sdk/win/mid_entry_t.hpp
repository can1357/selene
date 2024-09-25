#pragma once
#include <sdkgen/support_library.hpp>
#include "s_string_hash_node_t.hpp"

#include "magic/mid_entry_t.start.hpp"
namespace win
{
    // [class MIDEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class mid_entry_t                                  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                             
        _m00 struct win::s_string_hash_node_t node;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._Node
        _m01 uint64_t                         mid;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._mid
        _m02 uint32_t                         c_refs;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._cRefs
                                                       
        // Windows 10 v1607                            
        //                                             
        _m03 uint32_t                         dw_flags;  //{ +0x002c    } | ._dwFlags
                                                       
        SDK_MAGIC_PROPERTIES( "MIDEntry.$", 0x40, true, 0xf1115fa706563745 );         
        SDK_DYNAMIC_SIZE( mid_entry_t );               
    };                                                 
};
#include "magic/mid_entry_t.end.hpp"
