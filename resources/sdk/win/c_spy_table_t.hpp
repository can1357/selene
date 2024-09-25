#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_spy_table_t.start.hpp"
namespace win
{
    struct aentry_t;

    // [class CSpyTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_spy_table_t                            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                         
        _m00 uint32_t              m_c_allocations;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_cAllocations
        _m01 struct win::aentry_t* m_table;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_table
        _m02 uint32_t              m_c_entries;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_cEntries
                                                   
        SDK_MAGIC_PROPERTIES( "CSpyTable.$", 0x18, true, 0xcae5f35d4c28c4fa );                
        SDK_FIXED_SIZE( c_spy_table_t, 0x18 );                
    };                                             
};
#include "magic/c_spy_table_t.end.hpp"
SDK_VERIFY( class win::c_spy_table_t, 0x18 );
