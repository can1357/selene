#pragma once
#include <sdkgen/support_library.hpp>
#include "tag_info_t.hpp"

#include "magic/heap_tagging_info_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HEAP_TAGGING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_tagging_info_t                                    
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                        
        _m00 uint16_t                               version;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                               flags;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 void*                                  process;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Process
        _m03 uint64_t                               entries_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EntriesCount
        _m04 sdk::array<struct rtlp::tag_info_t, 1> entries;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Entries
                                                                  
        SDK_MAGIC_PROPERTIES( "_RTLP_HEAP_TAGGING_INFO.$", 0x30, true, 0x441cad32b4516326 );              
        SDK_FIXED_SIZE( heap_tagging_info_t, 0x30 );              
    };                                                            
};
#include "magic/heap_tagging_info_t.end.hpp"
SDK_VERIFY( struct rtlp::heap_tagging_info_t, 0x30 );
