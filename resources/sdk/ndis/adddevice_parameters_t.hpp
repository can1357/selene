#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "net_luid_lh_t.hpp"
#include "physical_medium_t.hpp"

#include "magic/adddevice_parameters_t.start.hpp"
namespace ndis
{
    // [struct NDIS_ADDDEVICE_PARAMETERS]
    // => Windows 10 v1607
    //
    struct adddevice_parameters_t                                      
    {                                                                  
        // Windows 10 v1607                                            
        //                                                             
        _m00 struct nt::guid_t            interface_guid;                //{ +0x0000    } | .InterfaceGuid
        _m01 union ndis::net_luid_lh_t    net_luid;                      //{ +0x0010    } | .NetLuid
        _m02 bool                         is_physical_medium_available;  //{ +0x0018    } | .IsPhysicalMediumAvailable
        _m03 enum ndis::physical_medium_t physical_medium;               //{ +0x001c    } | .PhysicalMedium
        _m04 bool                         is_im_miniport;                //{ +0x0038    } | .IsImMiniport
        _m05 uint32_t                     characteristics;               //{ +0x003c    } | .Characteristics
        _m06 void*                        miniport_adapter_context;      //{ +0x0040    } | .MiniportAdapterContext
                                                                       
        SDK_MAGIC_PROPERTIES( "NDIS_ADDDEVICE_PARAMETERS.$", 0x0, false, 0xa54b66816fe3ac9a );                             
        SDK_FIXED_SIZE( adddevice_parameters_t, 0x48 );                             
    };                                                                 
};
#include "magic/adddevice_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::adddevice_parameters_t, 0x48 );
