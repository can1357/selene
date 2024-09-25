#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl { struct splay_links_t; }

#include "magic/unmarshalers_table_t.start.hpp"
namespace win
{
    // [class UnmarshalersTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class unmarshalers_table_t                 
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                     
        _m00 struct rtl::splay_links_t* p_root;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pRoot
                                               
        SDK_MAGIC_PROPERTIES( "UnmarshalersTable.$", 0x10, true, 0x5f8b6217ccf0e49f );       
        SDK_FIXED_SIZE( unmarshalers_table_t, 0x10 );       
    };                                         
};
#include "magic/unmarshalers_table_t.end.hpp"
SDK_VERIFY( class win::unmarshalers_table_t, 0x10 );
