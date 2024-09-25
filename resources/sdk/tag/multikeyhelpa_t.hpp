#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multikeyhelpa_t.start.hpp"
namespace tag
{
    // [struct tagMULTIKEYHELPA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct multikeyhelpa_t                    
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint32_t            mk_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mkSize
        _m01 char                mk_keylist;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .mkKeylist
        _m02 sdk::array<char, 1> sz_keyphrase;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .szKeyphrase
                                              
        SDK_MAGIC_PROPERTIES( "tagMULTIKEYHELPA.$", 0x8, true, 0xf40306d04bc8e75c );             
        SDK_FIXED_SIZE( multikeyhelpa_t, 0x8 );             
    };                                        
};
#include "magic/multikeyhelpa_t.end.hpp"
SDK_VERIFY( struct tag::multikeyhelpa_t, 0x8 );
