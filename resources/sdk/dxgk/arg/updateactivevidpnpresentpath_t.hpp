#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3dk/mdt/vidpn_present_path_t.hpp"

#include "magic/updateactivevidpnpresentpath_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH]
    // => WDK 10 (NV)
    //
    struct updateactivevidpnpresentpath_t                                    
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 struct d3dk::mdt::vidpn_present_path_t vid_pn_present_path_info;  //{ +0x0000    } | .VidPnPresentPathInfo
                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.$", 0x0, false, 0x6c021361f7b1794d );                         
        SDK_FIXED_SIZE( updateactivevidpnpresentpath_t, 0x168 );                         
    };                                                                       
};
#include "magic/updateactivevidpnpresentpath_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::updateactivevidpnpresentpath_t, 0x168 );
