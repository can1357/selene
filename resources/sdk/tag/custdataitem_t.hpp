#pragma once
#include <sdkgen/support_library.hpp>
#include "variant_t.hpp"
#include "../nt/guid_t.hpp"

#include "magic/custdataitem_t.start.hpp"
namespace tag
{
    // [struct tagCUSTDATAITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custdataitem_t                    
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                   
        _m00 struct nt::guid_t     guid;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guid
        _m01 struct tag::variant_t var_value;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .varValue
                                             
        SDK_MAGIC_PROPERTIES( "tagCUSTDATAITEM.$", 0x28, true, 0x3a87e8076f04833d );          
        SDK_FIXED_SIZE( custdataitem_t, 0x28 );          
    };                                       
};
#include "magic/custdataitem_t.end.hpp"
SDK_VERIFY( struct tag::custdataitem_t, 0x28 );
