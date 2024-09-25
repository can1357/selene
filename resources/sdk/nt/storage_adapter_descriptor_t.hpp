#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_adapter_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ADAPTER_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_adapter_descriptor_t       
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint32_t version;                  //{ +0x0000    } | .Version
        _m01 uint32_t size;                     //{ +0x0004    } | .Size
        _m02 uint32_t maximum_transfer_length;  //{ +0x0008    } | .MaximumTransferLength
        _m03 uint32_t maximum_physical_pages;   //{ +0x000c    } | .MaximumPhysicalPages
        _m04 uint32_t alignment_mask;           //{ +0x0010    } | .AlignmentMask
        _m05 uint8_t  adapter_uses_pio;         //{ +0x0014    } | .AdapterUsesPio
        _m06 uint8_t  adapter_scans_down;       //{ +0x0015    } | .AdapterScansDown
        _m07 uint8_t  command_queueing;         //{ +0x0016    } | .CommandQueueing
        _m08 uint8_t  accelerated_transfer;     //{ +0x0017    } | .AcceleratedTransfer
        _m09 uint8_t  bus_type;                 //{ +0x0018    } | .BusType
        _m10 uint16_t bus_major_version;        //{ +0x001a    } | .BusMajorVersion
        _m11 uint16_t bus_minor_version;        //{ +0x001c    } | .BusMinorVersion
        _m12 uint8_t  srb_type;                 //{ +0x001e    } | .SrbType
        _m13 uint8_t  address_type;             //{ +0x001f    } | .AddressType
                                              
        SDK_NONVOL_PROPERTIES( "_STORAGE_ADAPTER_DESCRIPTOR.$", 0x0, false, 0x6b2ebf81bbb0e0b2 );                        
        SDK_FIXED_SIZE( storage_adapter_descriptor_t, 0x20 );                        
    };                                        
};
#include "magic/storage_adapter_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_adapter_descriptor_t, 0x20 );
