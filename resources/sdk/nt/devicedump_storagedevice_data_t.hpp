#pragma once
#include <sdkgen/support_library.hpp>
#include "devicedump_section_header_t.hpp"
#include "devicedump_structure_version_t.hpp"
#include "devicedump_subsection_pointer_t.hpp"

#include "magic/devicedump_storagedevice_data_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_STORAGEDEVICE_DATA]
    // => WDK 10 (NV)
    //
    struct devicedump_storagedevice_data_t                                       
    {                                                                            
        // WDK 10                                                                
        //                                                                       
        _m00 struct nt::devicedump_structure_version_t  descriptor;                //{ +0x0000    } | .Descriptor
        _m01 struct nt::devicedump_section_header_t     section_header;            //{ +0x000c    } | .SectionHeader
        _m02 uint32_t                                   dw_buffer_size;            //{ +0x0100    } | .dwBufferSize
        _m03 uint32_t                                   dw_reason_for_collection;  //{ +0x0104    } | .dwReasonForCollection
        _m04 struct nt::devicedump_subsection_pointer_t public_data;               //{ +0x0108    } | .PublicData
        _m05 struct nt::devicedump_subsection_pointer_t restricted_data;           //{ +0x0114    } | .RestrictedData
        _m06 struct nt::devicedump_subsection_pointer_t private_data;              //{ +0x0120    } | .PrivateData
                                                                                 
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STORAGEDEVICE_DATA.$", 0x0, false, 0x38677340b89bd15c );                         
        SDK_FIXED_SIZE( devicedump_storagedevice_data_t, 0x12c );                         
    };                                                                           
};
#include "magic/devicedump_storagedevice_data_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_storagedevice_data_t, 0x12c );
