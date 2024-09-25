#pragma once
#include <sdkgen/support_library.hpp>
#include "acpi_spb_resource_t.hpp"

#include "magic/acpi_spb_uart_resource_t.start.hpp"
namespace pep
{
    // [struct _PEP_ACPI_SPB_UART_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acpi_spb_uart_resource_t                         
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 struct pep::acpi_spb_resource_t spb_common;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpbCommon
        _m01 uint32_t                        baud_rate;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BaudRate
        _m02 uint16_t                        rx_buffer_size;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .RxBufferSize
        _m03 uint16_t                        tx_buffer_size;  //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .TxBufferSize
        _m04 uint8_t                         parity;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Parity
        _m05 uint8_t                         lines_in_use;    //{ +0x0031    +0x0031    +0x0031    +0x0031    } | .LinesInUse
                                                            
        SDK_MAGIC_PROPERTIES( "_PEP_ACPI_SPB_UART_RESOURCE.$", 0x38, true, 0xd9663901edaa1eb );               
        SDK_FIXED_SIZE( acpi_spb_uart_resource_t, 0x38 );               
    };                                                      
};
#include "magic/acpi_spb_uart_resource_t.end.hpp"
SDK_VERIFY( struct pep::acpi_spb_uart_resource_t, 0x38 );
