#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_gpio_resource_t.hpp"
#include "acpi_resource_type_t.hpp"
#include "acpi_extended_address_t.hpp"
#include "acpi_spb_i2c_resource_t.hpp"
#include "acpi_spb_spi_resource_t.hpp"
#include "acpi_spb_uart_resource_t.hpp"
#include "acpi_interrupt_resource_t.hpp"
#include "acpi_io_memory_resource_t.hpp"

#include "magic/acpi_resource_t.start.hpp"
namespace pep
{
    // [union _PEP_ACPI_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union acpi_resource_t                                           
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                          
        _m00 enum pep::acpi_resource_type_t        type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct pep::acpi_io_memory_resource_t io_memory;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoMemory
        _m02 struct pep::acpi_interrupt_resource_t interrupt;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Interrupt
        _m03 struct pep::acpi_gpio_resource_t      gpio;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Gpio
        _m04 struct pep::acpi_spb_i2c_resource_t   spb_i2c;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpbI2c
        _m05 struct pep::acpi_spb_spi_resource_t   spb_spi;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpbSpi
        _m06 struct pep::acpi_spb_uart_resource_t  spb_uart;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpbUart
        _m07 struct pep::acpi_extended_address_t   extended_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtendedAddress
                                                                    
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_RESOURCE.$", 0x48, true, 0x2594be0d620fe985 );                 
        SDK_FIXED_SIZE( acpi_resource_t, 0x48 );                    
    };                                                              
};
#include "magic/acpi_resource_t.end.hpp"
SDK_VERIFY( union pep::acpi_resource_t, 0x48 );
