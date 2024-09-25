#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "s_hash_chain_t.hpp"

#include "magic/suuid_hash_node_t.start.hpp"
namespace win
{
    // [struct SUUIDHashNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct suuid_hash_node_t                  
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                    
        _m00 struct win::s_hash_chain_t chain;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .chain
        _m01 struct nt::guid_t          key;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .key
                                              
        SDK_MAGIC_PROPERTIES( "SUUIDHashNode.$", 0x20, true, 0xdc5785ad754a69e6 );      
        SDK_FIXED_SIZE( suuid_hash_node_t, 0x20 );      
    };                                        
};
#include "magic/suuid_hash_node_t.end.hpp"
SDK_VERIFY( struct win::suuid_hash_node_t, 0x20 );
