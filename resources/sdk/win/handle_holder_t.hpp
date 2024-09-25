#pragma once
#include <sdkgen/support_library.hpp>
#include "system_handle_t.hpp"

#include "magic/handle_holder_t.start.hpp"
namespace win
{
    // [class HandleHolder]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class handle_holder_t                             
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                            
        _m00 const enum win::system_handle_t idl_type;  //{ +0x0030    +0x0030    +0x0030    } | ._idlType
                                                      
        SDK_MAGIC_PROPERTIES( "HandleHolder.$", 0x50, true, 0xe251ca2f525f2bf6 );         
        SDK_FIXED_SIZE( handle_holder_t, 0x50 );         
    };                                                
};
#include "magic/handle_holder_t.end.hpp"
SDK_VERIFY( class win::handle_holder_t, 0x50 );
