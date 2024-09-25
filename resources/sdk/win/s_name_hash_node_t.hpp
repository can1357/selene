#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "s_hash_chain_t.hpp"
#include "../tag/securitybinding_t.hpp"

#include "magic/s_name_hash_node_t.start.hpp"
namespace win
{
    // [struct SNameHashNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_name_hash_node_t                      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                         
        _m00 struct win::s_hash_chain_t    chain;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .chain
        _m01 uint32_t                      dw_hash;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwHash
        _m02 uint32_t                      c_ref;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cRef
        _m03 struct nt::guid_t             ipid;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ipid
        _m04 struct tag::securitybinding_t s_name;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .sName
                                                   
        SDK_MAGIC_PROPERTIES( "SNameHashNode.$", 0x30, true, 0x9183ec753099a732 );        
        SDK_FIXED_SIZE( s_name_hash_node_t, 0x30 );        
    };                                             
};
#include "magic/s_name_hash_node_t.end.hpp"
SDK_VERIFY( struct win::s_name_hash_node_t, 0x30 );
