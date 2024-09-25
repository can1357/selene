#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_resource_type_t.hpp"
#include "acpi_resource_flags_t.hpp"

#include "magic/acpi_extended_address_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_EXTENDED_ADDRESS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_extended_address_t                                
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                        
        _m00 enum pep::acpi_resource_type_t   type;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 union pep::acpi_resource_flags_t flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint8_t                          resource_flags;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceFlags
        _m03 uint8_t                          general_flags;        //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .GeneralFlags
        _m04 uint8_t                          type_specific_flags;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .TypeSpecificFlags
        _m05 uint8_t                          revision_id;          //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .RevisionId
        _m06 uint64_t                         granularity;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Granularity
        _m07 uint64_t                         minimum_address;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinimumAddress
        _m08 uint64_t                         maximum_address;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaximumAddress
        _m09 uint64_t                         translation_address;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TranslationAddress
        _m10 uint64_t                         address_length;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AddressLength
        _m11 uint64_t                         type_attribute;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TypeAttribute
        _m12 nt::unicode_view*                descriptor_name;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DescriptorName
                                                                  
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_EXTENDED_ADDRESS.$", 0x48, true, 0x53552abb2e4083e3 );                    
        SDK_FIXED_SIZE( acpi_extended_address_t, 0x48 );                    
    };                                                            
};
#include "magic/acpi_extended_address_t.end.hpp"
SDK_VERIFY( struct pep::acpi_extended_address_t, 0x48 );
