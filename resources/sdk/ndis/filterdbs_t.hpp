#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filterdbs_t.start.hpp"
namespace ndis
{
    struct x_filter_t;

    // [struct FILTERDBS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filterdbs_t                        
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                    
        _m00 struct ndis::x_filter_t* eth_db;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EthDB
        _m01 struct ndis::x_filter_t* null_db;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NullDB
        _m02 struct ndis::x_filter_t* tr_db;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TrDB
        _m03 void*                    yyydb;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .YYYDB
        _m04 void*                    xxxdb;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .XXXDB
                                              
        SDK_MAGIC_PROPERTIES( "FILTERDBS.$", 0x20, true, 0xfe7a16e02db75e27 );        
        SDK_FIXED_SIZE( filterdbs_t, 0x20 );        
    };                                        
};
#include "magic/filterdbs_t.end.hpp"
SDK_VERIFY( struct ndis::filterdbs_t, 0x20 );
