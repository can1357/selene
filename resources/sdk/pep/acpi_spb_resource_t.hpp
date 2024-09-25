#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_resource_type_t.hpp"
#include "acpi_resource_flags_t.hpp"

#include "magic/acpi_spb_resource_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_SPB_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_spb_resource_t                                      
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                          
        _m00 enum pep::acpi_resource_type_t   type;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 union pep::acpi_resource_flags_t flags;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint16_t                         type_specific_flags;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TypeSpecificFlags
        _m03 uint8_t                          resource_source_index;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ResourceSourceIndex
        _m04 nt::unicode_view*                resource_source_name;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceSourceName
        _m05 char*                            vendor_data;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VendorData
        _m06 uint16_t                         vendor_data_length;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .VendorDataLength
                                                                    
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_SPB_RESOURCE.$", 0x28, true, 0x15c425e6fa39e36 );                      
        SDK_FIXED_SIZE( acpi_spb_resource_t, 0x28 );                      
    };                                                              
};
#include "magic/acpi_spb_resource_t.end.hpp"
SDK_VERIFY( struct pep::acpi_spb_resource_t, 0x28 );
