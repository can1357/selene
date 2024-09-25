#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/tag_info_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_TAG_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tag_info_t                                  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                             
        _m00 struct nt::guid_t id;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint64_t          current_allocated_bytes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentAllocatedBytes
                                                       
        SDK_MAGIC_PROPERTIES( "_RTLP_TAG_INFO.$", 0x18, true, 0x3871305611557a87 );                        
        SDK_FIXED_SIZE( tag_info_t, 0x18 );                        
    };                                                 
};
#include "magic/tag_info_t.end.hpp"
SDK_VERIFY( struct rtlp::tag_info_t, 0x18 );
