#pragma once
#include <sdkgen/support_library.hpp>
#include "c_mutex_sem2_t.hpp"

#include "magic/cp_unk_list_t.start.hpp"
namespace win
{
    struct p_unk_list_element_t;

    // [class CpUnkList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cp_unk_list_t                              
    {                                                
        // Windows 10 v1607                          
        //                                           
        _m00 struct win::p_unk_list_element_t* head;   //{ +0x0000    } | ._head
        _m01 class win::c_mutex_sem2_t         mutex;  //{ +0x0008    } | ._mutex
                                                     
        SDK_MAGIC_PROPERTIES( "CpUnkList.$", 0x28, true, 0x9c3566a0b4825e1e );      
        SDK_DYNAMIC_SIZE( cp_unk_list_t );           
    };                                               
};
#include "magic/cp_unk_list_t.end.hpp"
