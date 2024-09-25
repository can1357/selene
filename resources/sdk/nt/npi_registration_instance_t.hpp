#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis { struct npi_moduleid_t; }

#include "magic/npi_registration_instance_t.start.hpp"
namespace nt
{
    struct guid_t;

    // [struct _NPI_REGISTRATION_INSTANCE]
    // => WDK 10 (NV)
    //
    struct npi_registration_instance_t                                       
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint16_t                           version;                       //{ +0x0000    } | .Version
        _m01 uint16_t                           size;                          //{ +0x0002    } | .Size
        _m02 const struct nt::guid_t*           npi_id;                        //{ +0x0008    } | .NpiId
        _m03 const struct ndis::npi_moduleid_t* module_id;                     //{ +0x0010    } | .ModuleId
        _m04 uint32_t                           number;                        //{ +0x0018    } | .Number
        _m05 const void*                        npi_specific_characteristics;  //{ +0x0020    } | .NpiSpecificCharacteristics
                                                                             
        SDK_NONVOL_PROPERTIES( "_NPI_REGISTRATION_INSTANCE.$", 0x0, false, 0xa4416aef21b7a5c8 );                             
        SDK_FIXED_SIZE( npi_registration_instance_t, 0x28 );                             
    };                                                                       
};
#include "magic/npi_registration_instance_t.end.hpp"
SDK_VERIFY( struct nt::npi_registration_instance_t, 0x28 );
