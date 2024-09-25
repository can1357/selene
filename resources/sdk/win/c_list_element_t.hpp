#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_list_element_t.start.hpp"
namespace win
{
    class c_list_element_t;

    // [class CListElement]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_list_element_t                             
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 class win::c_list_element_t* flink;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._flink
        _m01 class win::c_list_element_t* blink;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._blink
                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m02 bool                         m_is_in_list;  //{ +0x0010    +0x0010    +0x0010    } | .m_isInList
                                                       
        SDK_MAGIC_PROPERTIES( "CListElement.$", 0x18, true, 0x47a988043a931fe4 );             
        SDK_DYNAMIC_SIZE( c_list_element_t );             
    };                                                 
};
#include "magic/c_list_element_t.end.hpp"
