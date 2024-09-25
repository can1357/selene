#pragma once
#include <sdkgen/support_library.hpp>
#include "s_hash_chain_t.hpp"

#include "magic/s_activatable_class_id_hash_node_t.start.hpp"
namespace win
{
    // [struct SActivatableClassIdHashNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_activatable_class_id_hash_node_t                
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                   
        _m00 struct win::s_hash_chain_t chain;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .chain
        _m01 const wchar_t*             activatable_class_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .activatableClassId
                                                             
        SDK_MAGIC_PROPERTIES( "SActivatableClassIdHashNode.$", 0x18, true, 0x515db580da939d5e );                     
        SDK_FIXED_SIZE( s_activatable_class_id_hash_node_t, 0x18 );                     
    };                                                       
};
#include "magic/s_activatable_class_id_hash_node_t.end.hpp"
SDK_VERIFY( struct win::s_activatable_class_id_hash_node_t, 0x18 );
