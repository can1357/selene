#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifiertrackhdr_t.start.hpp"
namespace tag
{
    // [struct tagVERIFIERTRACKHDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifiertrackhdr_t         
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                            
        _m00 nt::list_entry_t list;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .list
        _m01 uint64_t         ul_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulSize
        _m02 uint32_t         ul_tag;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ulTag
                                      
        SDK_MAGIC_PROPERTIES( "tagVERIFIERTRACKHDR.$", 0x20, true, 0x467a48272ed8552b );        
        SDK_FIXED_SIZE( verifiertrackhdr_t, 0x20 );        
    };                                
};
#include "magic/verifiertrackhdr_t.end.hpp"
SDK_VERIFY( struct tag::verifiertrackhdr_t, 0x20 );
