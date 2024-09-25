#pragma once
#include <sdkgen/support_library.hpp>
#include "sdword_hash_node_t.hpp"

#include "magic/apartment_entry_t.start.hpp"
namespace win
{
    // [struct ApartmentEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct apartment_entry_t                                   
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 struct win::sdword_hash_node_t node;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .node
        _m01 uint32_t                       h_com_activator;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hCOMActivator
        _m02 uint32_t                       h_win_rt_activator;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .hWinRTActivator
                                                               
        SDK_MAGIC_PROPERTIES( "ApartmentEntry.$", 0x20, true, 0xfa82b7444fd5c8e0 );                   
        SDK_FIXED_SIZE( apartment_entry_t, 0x20 );                   
    };                                                         
};
#include "magic/apartment_entry_t.end.hpp"
SDK_VERIFY( struct win::apartment_entry_t, 0x20 );
