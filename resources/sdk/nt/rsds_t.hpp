#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/rsds_t.start.hpp"
namespace nt
{
    // [struct _RSDS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rsds_t                          
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                 
        _m00 uint32_t            signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 struct nt::guid_t   guid;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Guid
        _m02 uint32_t            age;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Age
        _m03 sdk::array<char, 1> pdb_name;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PdbName
                                           
        SDK_MAGIC_PROPERTIES( "_RSDS.$", 0x1c, true, 0x1bd8faa4f802e265 );          
        SDK_FIXED_SIZE( rsds_t, 0x1c );          
    };                                     
};
#include "magic/rsds_t.end.hpp"
SDK_VERIFY( struct nt::rsds_t, 0x1c );
