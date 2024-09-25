#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triple_list_entry_t.start.hpp"
namespace win
{
    struct triple_list_entry_t;

    // [struct _TRIPLE_LIST_ENTRY]
    // => Windows 10 v1607
    //
    struct triple_list_entry_t                                     
    {                                                              
        // Windows 10 v1607                                        
        //                                                         
        _m00 sdk::array<struct win::triple_list_entry_t*, 3> flink;  //{ +0x0000    } | .Flink
        _m01 struct win::triple_list_entry_t*                blink;  //{ +0x0018    } | .Blink
                                                                   
        SDK_MAGIC_PROPERTIES( "_TRIPLE_LIST_ENTRY.$", 0x0, false, 0x39585f21567f2865 );      
        SDK_FIXED_SIZE( triple_list_entry_t, 0x20 );               
    };                                                             
};
#include "magic/triple_list_entry_t.end.hpp"
SDK_VERIFY( struct win::triple_list_entry_t, 0x20 );
