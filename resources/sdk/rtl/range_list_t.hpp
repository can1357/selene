#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/range_list_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RANGE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct range_list_t                 
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::list_entry_t list_head;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 uint32_t         flags;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 uint32_t         count;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Count
        _m03 uint32_t         stamp;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Stamp
                                        
        SDK_MAGIC_PROPERTIES( "_RTL_RANGE_LIST.$", 0x20, true, 0xe13407f021d1af98 );          
        SDK_FIXED_SIZE( range_list_t, 0x20 );          
    };                                  
};
#include "magic/range_list_t.end.hpp"
SDK_VERIFY( struct rtl::range_list_t, 0x20 );
