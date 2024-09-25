#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proclocalgic_t.start.hpp"
namespace nt
{
    // [struct _PROCLOCALGIC]
    // => Windows 11
    //
    struct proclocalgic_t                              
    {                                                  
        // Windows 11                                  
        //                                             
        _m00 uint8_t  type;                              //{ +0x0000    } | .Type
        _m01 uint8_t  length;                            //{ +0x0001    } | .Length
        _m02 uint32_t identifier;                        //{ +0x0004    } | .Identifier
        _m03 uint32_t acpi_processor_id;                 //{ +0x0008    } | .AcpiProcessorId
        _m04 uint32_t flags;                             //{ +0x000c    } | .Flags
        _m05 uint32_t parking_protocol_version;          //{ +0x0010    } | .ParkingProtocolVersion
        _m06 uint32_t performance_interrupt_gsi;         //{ +0x0014    } | .PerformanceInterruptGsi
        _m07 uint64_t parked_physical_address;           //{ +0x0018    } | .ParkedPhysicalAddress
        _m08 uint64_t controller_physical_address;       //{ +0x0020    } | .ControllerPhysicalAddress
        _m09 uint64_t gicv;                              //{ +0x0028    } | .Gicv
        _m10 uint64_t gich;                              //{ +0x0030    } | .Gich
        _m11 uint32_t vgic_maintenance_interrupt;        //{ +0x0038    } | .VgicMaintenanceInterrupt
        _m12 uint64_t gicr_base_address;                 //{ +0x003c    } | .GicrBaseAddress
        _m13 uint64_t mpidr;                             //{ +0x0044    } | .Mpidr
        _m14 uint8_t  processor_power_efficiency_class;  //{ +0x004c    } | .ProcessorPowerEfficiencyClass
                                                       
        SDK_MAGIC_PROPERTIES( "_PROCLOCALGIC.$", 0x0, false, 0xb79ab5aeae0c7d9d );                                 
        SDK_FIXED_SIZE( proclocalgic_t, 0x50 );                                 
    };                                                 
};
#include "magic/proclocalgic_t.end.hpp"
SDK_VERIFY( struct nt::proclocalgic_t, 0x50 );
