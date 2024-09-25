#pragma once
#include <sdkgen/support_library.hpp>
#include "device_ids_t.hpp"

#include "magic/query_device_ids_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERY_DEVICE_IDS]
    // => WDK 10 (NV)
    //
    struct query_device_ids_t                                     
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                      physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 struct d3dk::mt::device_ids_t device_ids;              //{ +0x0004    } | .DeviceIds
                                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERY_DEVICE_IDS.$", 0x0, false, 0xf581b025b9234262 );                       
        SDK_FIXED_SIZE( query_device_ids_t, 0x1c );                       
    };                                                            
};
#include "magic/query_device_ids_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::query_device_ids_t, 0x1c );
