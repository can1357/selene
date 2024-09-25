#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct partial_resource_descriptor_t; }

#include "magic/getresourceforbar_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETRESOURCEFORBAR]
    // => WDK 10 (NV)
    //
    struct getresourceforbar_t                                                
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                  virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 uint32_t                                  bar_index;               //{ +0x0004    } | .BarIndex
        _m02 struct cm::partial_resource_descriptor_t* p_resource;              //{ +0x0008    } | .pResource
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETRESOURCEFORBAR.$", 0x0, false, 0xefc2c31faad0e49f );                       
        SDK_FIXED_SIZE( getresourceforbar_t, 0x10 );                          
    };                                                                        
};
#include "magic/getresourceforbar_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getresourceforbar_t, 0x10 );
