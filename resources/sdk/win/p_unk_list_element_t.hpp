#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/p_unk_list_element_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct p_unk_list_element_t;

    // [struct pUnkListElement]
    // => Windows 10 v1607
    //
    struct p_unk_list_element_t                      
    {                                                
        // Windows 10 v1607                          
        //                                           
        _m00 struct win::i_unknown_t*          p_unk;  //{ +0x0000    } | ._pUnk
        _m01 struct win::p_unk_list_element_t* next;   //{ +0x0008    } | ._next
                                                     
        SDK_MAGIC_PROPERTIES( "pUnkListElement.$", 0x0, false, 0xd09df8373fb1e85b );      
        SDK_FIXED_SIZE( p_unk_list_element_t, 0x10 );      
    };                                               
};
#include "magic/p_unk_list_element_t.end.hpp"
SDK_VERIFY( struct win::p_unk_list_element_t, 0x10 );
