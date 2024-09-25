#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_entry_t.start.hpp"
namespace stor::port
{
    struct dump_entry_t;

    // [struct _DUMP_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dump_entry_t                             
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                          
        _m00 struct stor::port::dump_entry_t* flink;  //{ +0x0000    +0x0000    +0x0000    } | .Flink
        _m01 struct stor::port::dump_entry_t* blink;  //{ +0x0008    +0x0008    +0x0008    } | .Blink
                                                    
        SDK_MAGIC_PROPERTIES( "_DUMP_ENTRY.$", 0x10, true, 0xbadb5c599ac86d43 );      
        SDK_FIXED_SIZE( dump_entry_t, 0x10 );       
    };                                              
};
#include "magic/dump_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::dump_entry_t, 0x10 );
