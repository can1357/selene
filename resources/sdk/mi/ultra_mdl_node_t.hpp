#pragma once
#include <sdkgen/support_library.hpp>
#include "aligned_slist_t.hpp"

#include "magic/ultra_mdl_node_t.start.hpp"
namespace mi
{
    // [struct _MI_ULTRA_MDL_NODE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ultra_mdl_node_t                                           
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                            
        _m00 sdk::array<struct mi::aligned_slist_t, 8> ultra_mdl_maps;  //{ +0x0000    +0x0000    +0x0000    } | .UltraMdlMaps
                                                                      
        SDK_MAGIC_PROPERTIES( "_MI_ULTRA_MDL_NODE.$", 0x200, true, 0xbf6d8a779738d0e3 );               
        SDK_FIXED_SIZE( ultra_mdl_node_t, 0x200 );                    
    };                                                                
};
#include "magic/ultra_mdl_node_t.end.hpp"
SDK_VERIFY( struct mi::ultra_mdl_node_t, 0x200 );
