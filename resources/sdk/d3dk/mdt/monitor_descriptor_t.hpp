#pragma once
#include <sdkgen/support_library.hpp>
#include "monitor_descriptor_type_t.hpp"
#include "monitor_capabilities_origin_t.hpp"

#include "magic/monitor_descriptor_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_MONITOR_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct monitor_descriptor_t                                      
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                                      id;         //{ +0x0000    } | .Id
        _m01 enum d3dk::mdt::monitor_descriptor_type_t     type;       //{ +0x0004    } | .Type
        _m02 uint64_t                                      data_size;  //{ +0x0008    } | .DataSize
        _m03 void*                                         p_data;     //{ +0x0010    } | .pData
        _m04 enum d3dk::mdt::monitor_capabilities_origin_t origin;     //{ +0x0018    } | .Origin
                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_MONITOR_DESCRIPTOR.$", 0x0, false, 0x586991ec2d9998a8 );          
        SDK_FIXED_SIZE( monitor_descriptor_t, 0x20 );                
    };                                                               
};
#include "magic/monitor_descriptor_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::monitor_descriptor_t, 0x20 );
