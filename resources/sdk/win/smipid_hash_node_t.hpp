#pragma once
#include <sdkgen/support_library.hpp>
#include "mipid_t.hpp"
#include "s_hash_chain_t.hpp"

#include "magic/smipid_hash_node_t.start.hpp"
namespace win
{
    // [struct SMIPIDHashNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct smipid_hash_node_t                 
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                    
        _m00 struct win::s_hash_chain_t chain;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .chain
        _m01 struct win::mipid_t        mipid;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .mipid
                                              
        SDK_MAGIC_PROPERTIES( "SMIPIDHashNode.$", 0x30, true, 0x60164ba9cdb2b595 );      
        SDK_FIXED_SIZE( smipid_hash_node_t, 0x30 );      
    };                                        
};
#include "magic/smipid_hash_node_t.end.hpp"
SDK_VERIFY( struct win::smipid_hash_node_t, 0x30 );
