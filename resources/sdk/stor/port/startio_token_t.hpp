#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/slist_entry_t.hpp"

#include "magic/startio_token_t.start.hpp"
namespace stor::port
{
    // [struct _STARTIO_TOKEN]
    // => Windows 10 v1607
    //
    struct startio_token_t                   
    {                                        
        // Windows 10 v1607                  
        //                                   
        _m00 struct nt::slist_entry_t link;    //{ +0x0000    } | .Link
        _m01 uint32_t                 node;    //{ +0x0010    } | .Node
        _m02 uint32_t                 number;  //{ +0x0014    } | .Number
                                             
        SDK_MAGIC_PROPERTIES( "_STARTIO_TOKEN.$", 0x0, false, 0x381cad6087520add );       
        SDK_FIXED_SIZE( startio_token_t, 0x20 );       
    };                                       
};
#include "magic/startio_token_t.end.hpp"
SDK_VERIFY( struct stor::port::startio_token_t, 0x20 );
