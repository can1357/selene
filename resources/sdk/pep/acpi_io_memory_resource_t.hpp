#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_resource_type_t.hpp"

#include "magic/acpi_io_memory_resource_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_IO_MEMORY_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_io_memory_resource_t                        
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                  
        _m00 enum pep::acpi_resource_type_t type;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                        information;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Information
        _m02 int64_t                        minimum_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumAddress
        _m03 int64_t                        maximum_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumAddress
        _m04 uint32_t                       alignment;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Alignment
        _m05 uint32_t                       length;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Length
                                                            
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_IO_MEMORY_RESOURCE.$", 0x20, true, 0x48a88da5f3455853 );                
        SDK_FIXED_SIZE( acpi_io_memory_resource_t, 0x20 );                
    };                                                      
};
#include "magic/acpi_io_memory_resource_t.end.hpp"
SDK_VERIFY( struct pep::acpi_io_memory_resource_t, 0x20 );
