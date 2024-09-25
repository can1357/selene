#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nb10_t.start.hpp"
namespace nt
{
    // [struct _NB10]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nb10_t                           
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                  
        _m00 uint32_t            signature;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t            offset;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Offset
        _m02 uint32_t            time_stamp;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeStamp
        _m03 uint32_t            age;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Age
        _m04 sdk::array<char, 1> pdb_name;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PdbName
                                            
        SDK_MAGIC_PROPERTIES( "_NB10.$", 0x14, true, 0x9969705ae4bc29a1 );           
        SDK_FIXED_SIZE( nb10_t, 0x14 );           
    };                                      
};
#include "magic/nb10_t.end.hpp"
SDK_VERIFY( struct nt::nb10_t, 0x14 );
