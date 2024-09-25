#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_unknown_t; }

#include "magic/cleanlocalstorage_t.start.hpp"
namespace tag
{
    // [struct tagCLEANLOCALSTORAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cleanlocalstorage_t                    
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 struct win::i_unknown_t* p_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pInterface
        _m01 void*                    p_storage;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pStorage
        _m02 uint32_t                 flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .flags
                                                  
        SDK_MAGIC_PROPERTIES( "tagCLEANLOCALSTORAGE.$", 0x18, true, 0xe0556ca20e7e8576 );            
        SDK_FIXED_SIZE( cleanlocalstorage_t, 0x18 );            
    };                                            
};
#include "magic/cleanlocalstorage_t.end.hpp"
SDK_VERIFY( struct tag::cleanlocalstorage_t, 0x18 );
