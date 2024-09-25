#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_scatter_gather_element_t.hpp"

#include "magic/stor_scatter_gather_list_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_SCATTER_GATHER_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_scatter_gather_list_t    
    {                                    
        using list_t = sdk::array<struct stor::port::stor_scatter_gather_element_t>;                   
                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t number_of_elements;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfElements
        _m01 list_t   list;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .List
                                         
        SDK_MAGIC_PROPERTIES( "_STOR_SCATTER_GATHER_LIST.$", 0x10, true, 0x51db57435dc5409 );                   
        SDK_FIXED_SIZE( stor_scatter_gather_list_t, 0x10 );                   
    };                                   
};
#include "magic/stor_scatter_gather_list_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_scatter_gather_list_t, 0x10 );
