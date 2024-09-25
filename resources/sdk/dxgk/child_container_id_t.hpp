#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/child_container_id_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CHILD_CONTAINER_ID]
    // => WDK 10 (NV)
    //
    struct child_container_id_t                          
    {                                                    
        struct u0_eld_info_t                             
        {                                                
            // WDK 10                                    
            //                                           
            _m01 uint64_t port_id;                         //{ +0x0000    } | .PortId
            _m02 uint16_t manufacturer_name;               //{ +0x0008    } | .ManufacturerName
            _m03 uint16_t product_code;                    //{ +0x000a    } | .ProductCode
                                                         
            SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_CONTAINER_ID.EldInfo.$", 0x0, false, 0x521c5f6ed0df1b93 );                               
            SDK_FIXED_SIZE( u0_eld_info_t, 0x10 );                               
        };                                               
                                                         
        // WDK 10                                        
        //                                               
        _m00 struct nt::guid_t              container_id;  //{ +0x0000    } | .ContainerId
        _m04 u0_eld_info_t                  eld_info;      //{ +0x0010    } | .EldInfo
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_CONTAINER_ID.$", 0x0, false, 0x554ce85427b1459 );             
        SDK_FIXED_SIZE( child_container_id_t, 0x20 );             
    };                                                   
};
#include "magic/child_container_id_t.end.hpp"
SDK_VERIFY( struct dxgk::child_container_id_t::u0_eld_info_t, 0x10 );
SDK_VERIFY( struct dxgk::child_container_id_t, 0x20 );
