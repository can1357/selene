#pragma once
#include <sdkgen/support_library.hpp>
#include "error_type_t.hpp"
#include "error_severity_t.hpp"
#include "raw_data_format_t.hpp"
#include "error_source_type_t.hpp"
#include "nmi_error_section_t.hpp"
#include "error_packet_flags_t.hpp"
#include "pmem_error_section_t.hpp"
#include "memory_error_section_t.hpp"
#include "pcixbus_error_section_t.hpp"
#include "pciexpress_error_section_t.hpp"
#include "pcixdevice_error_section_t.hpp"
#include "processor_generic_error_section_t.hpp"

#include "magic/error_packet_v1_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_PACKET_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_packet_v1_t                                                   
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                     
        _m00 uint32_t                                       signature;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 union whea::error_packet_flags_t               flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                       size;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 uint32_t                                       raw_data_length;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .RawDataLength
        _m04 uint64_t                                       context;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Context
        _m05 enum whea::error_type_t                        error_type;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorType
        _m06 enum whea::error_severity_t                    error_severity;      //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .ErrorSeverity
        _m07 uint32_t                                       error_source_id;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ErrorSourceId
        _m08 enum whea::error_source_type_t                 error_source_type;   //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .ErrorSourceType
        _m09 uint32_t                                       version;             //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .Version
        _m10 uint64_t                                       cpu;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Cpu
        _m11 struct whea::processor_generic_error_section_t processor_error;     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ProcessorError
        _m12 struct whea::memory_error_section_t            memory_error;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .MemoryError
        _m13 struct whea::nmi_error_section_t               nmi_error;           //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .NmiError
        _m14 struct whea::pciexpress_error_section_t        pci_express_error;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PciExpressError
        _m15 struct whea::pcixbus_error_section_t           pci_x_bus_error;     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PciXBusError
        _m16 struct whea::pcixdevice_error_section_t        pci_x_device_error;  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .PciXDeviceError
        _m17 enum whea::raw_data_format_t                   raw_data_format;     //{ +0x0110    +0x0110    +0x0110    +0x0110    +0x0110    } | .RawDataFormat
        _m18 uint32_t                                       raw_data_offset;     //{ +0x0114    +0x0114    +0x0114    +0x0114    +0x0114    } | .RawDataOffset
        _m19 sdk::array<uint8_t, 1>                         raw_data;            //{ +0x0118    +0x0118    +0x0118    +0x0118    +0x0118    } | .RawData
                                                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                     
        _m20 struct whea::pmem_error_section_t              pmem_error;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .PmemError
                                                                               
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_PACKET_V1.$", 0x119, true, 0xe44160560c99db4a );                   
        SDK_FIXED_SIZE( error_packet_v1_t, 0x119 );                            
    };                                                                         
};
#include "magic/error_packet_v1_t.end.hpp"
SDK_VERIFY( struct whea::error_packet_v1_t, 0x119 );
