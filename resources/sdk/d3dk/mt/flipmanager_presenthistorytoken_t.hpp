#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flipmanager_presenthistorytoken_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN]
    // => WDK 10 (NV)
    //
    struct flipmanager_presenthistorytoken_t        
    {                                               
        union u0_flags_t                            
        {                                           
            // WDK 10                               
            //                                      
            _m02 uint1_t  discard;                    //{ +0x0000@0  } | .Discard
            _m03 uint1_t  present_at;                 //{ +0x0000@1  } | .PresentAt
            _m04 uint32_t value;                      //{ +0x0000    } | .Value
                                                    
            SDK_NONVOL_PROPERTIES( "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.Flags.$", 0x0, false, 0x69bdaf644eac4cae );                          
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                          
        };                                          
                                                    
        // WDK 10                                   
        //                                          
        _m00 uint64_t                h_private_data;  //{ +0x0000    } | .hPrivateData
        _m01 uint64_t                present_at_qpc;  //{ +0x0008    } | .PresentAtQpc
        _m05 u0_flags_t              flags;           //{ +0x0010    } | .Flags
                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN.$", 0x0, false, 0x8fad399e9330c587 );               
        SDK_FIXED_SIZE( flipmanager_presenthistorytoken_t, 0x18 );               
    };                                              
};
#include "magic/flipmanager_presenthistorytoken_t.end.hpp"
SDK_VERIFY( union d3dk::mt::flipmanager_presenthistorytoken_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::flipmanager_presenthistorytoken_t, 0x18 );
