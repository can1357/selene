#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/connect_mode_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ConnectMode]
    // => WDK 10 (NV)
    //
    struct connect_mode_t                        
    {                                            
        // WDK 10                                
        //                                       
        _m00 struct nt::guid_t guid_mode;          //{ +0x0000    } | .guidMode
        _m01 uint16_t          w_restricted_mode;  //{ +0x0010    } | .wRestrictedMode
                                                 
        SDK_NONVOL_PROPERTIES( "_DXVA_ConnectMode.$", 0x0, false, 0x94e9ba3089af8b5c );                  
        SDK_FIXED_SIZE( connect_mode_t, 0x12 );                  
    };                                           
};
#include "magic/connect_mode_t.end.hpp"
SDK_VERIFY( struct dxva::connect_mode_t, 0x12 );
