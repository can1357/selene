#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct partial_resource_descriptor_t; }
namespace nt { struct mdl_t;                         }

#include "magic/getbackingresource_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETBACKINGRESOURCE]
    // => WDK 10 (NV)
    //
    struct getbackingresource_t                                               
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                  virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 uint16_t                                  resource_index;          //{ +0x0004    } | .ResourceIndex
        _m02 struct cm::partial_resource_descriptor_t* resource;                //{ +0x0008    } | .Resource
        _m03 struct nt::mdl_t*                         p_mdl;                   //{ +0x0010    } | .pMdl
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETBACKINGRESOURCE.$", 0x0, false, 0xa70cb22f63230d0c );                       
        SDK_FIXED_SIZE( getbackingresource_t, 0x18 );                         
    };                                                                        
};
#include "magic/getbackingresource_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getbackingresource_t, 0x18 );
