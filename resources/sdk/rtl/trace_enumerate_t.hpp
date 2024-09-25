#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_enumerate_t.start.hpp"
namespace rtl
{
    struct trace_block_t;
    struct trace_database_t;

    // [struct _RTL_TRACE_ENUMERATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_enumerate_t                        
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                          
        _m00 struct rtl::trace_database_t* database;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Database
        _m01 uint32_t                      index;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Index
        _m02 struct rtl::trace_block_t*    block;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Block
                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_TRACE_ENUMERATE.$", 0x18, true, 0xf9851c8d276c0983 );         
        SDK_FIXED_SIZE( trace_enumerate_t, 0x18 );         
    };                                              
};
#include "magic/trace_enumerate_t.end.hpp"
SDK_VERIFY( struct rtl::trace_enumerate_t, 0x18 );
