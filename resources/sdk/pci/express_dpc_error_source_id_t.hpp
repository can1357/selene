#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_error_source_id_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DPC_ERROR_SOURCE_ID]
    // => Windows 11
    //
    union express_dpc_error_source_id_t
    {                                  
        // Windows 11           
        //                      
        _m00 uint3_t  function;          //{ +0x0000@0  } | .Function
        _m01 uint5_t  device;            //{ +0x0000@3  } | .Device
        _m02 uint8_t  bus;               //{ +0x0000@8  } | .Bus
        _m03 uint16_t as_ushort;         //{ +0x0000    } | .AsUSHORT
                                       
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_DPC_ERROR_SOURCE_ID.$", 0x0, false, 0x6509ba6fe485e24c );          
        SDK_FIXED_SIZE( express_dpc_error_source_id_t, 0x2 );          
    };                                 
};
#include "magic/express_dpc_error_source_id_t.end.hpp"
SDK_VERIFY( union pci::express_dpc_error_source_id_t, 0x2 );
