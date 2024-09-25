#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3dk/mdt/vidpn_present_path_content_t.hpp"

#include "magic/settargetcontenttype_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETTARGETCONTENTTYPE]
    // => WDK 10 (NV)
    //
    struct settargetcontenttype_t                                      
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                                     target_id;     //{ +0x0000    } | .TargetId
        _m01 enum d3dk::mdt::vidpn_present_path_content_t content_type;  //{ +0x0004    } | .ContentType
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETTARGETCONTENTTYPE.$", 0x0, false, 0x9767d350556b4845 );             
        SDK_FIXED_SIZE( settargetcontenttype_t, 0x8 );                 
    };                                                                 
};
#include "magic/settargetcontenttype_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::settargetcontenttype_t, 0x8 );
