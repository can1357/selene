#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custdata_t.start.hpp"
namespace tag
{
    struct custdataitem_t;

    // [struct tagCUSTDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custdata_t                                  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 uint32_t                    c_cust_data;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cCustData
        _m01 struct tag::custdataitem_t* prg_cust_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .prgCustData
                                                       
        SDK_MAGIC_PROPERTIES( "tagCUSTDATA.$", 0x10, true, 0x9abe3b6ee79ea55a );              
        SDK_FIXED_SIZE( custdata_t, 0x10 );              
    };                                                 
};
#include "magic/custdata_t.end.hpp"
SDK_VERIFY( struct tag::custdata_t, 0x10 );
