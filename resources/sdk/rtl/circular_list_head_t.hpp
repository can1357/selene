#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/circular_list_head_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CIRCULAR_LIST_HEAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct circular_list_head_t           
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                
        _m00 nt::list_entry_t* head_entry;  //{ +0x0000    +0x0000    +0x0000    } | .HeadEntry
                                          
        SDK_MAGIC_PROPERTIES( "_RTL_CIRCULAR_LIST_HEAD.$", 0x8, true, 0xc78a6b0e696294ef );           
        SDK_FIXED_SIZE( circular_list_head_t, 0x8 );           
    };                                    
};
#include "magic/circular_list_head_t.end.hpp"
SDK_VERIFY( struct rtl::circular_list_head_t, 0x8 );
