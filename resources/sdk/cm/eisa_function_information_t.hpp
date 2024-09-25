#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/eisa_dma_configuration_t.hpp"
#include "../win/eisa_irq_configuration_t.hpp"
#include "../win/eisa_port_configuration_t.hpp"
#include "../win/eisa_memory_configuration_t.hpp"

#include "magic/eisa_function_information_t.start.hpp"
namespace cm
{
    // [struct _CM_EISA_FUNCTION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_function_information_t                   
    {                                                    
        using eisa_memory_t = sdk::array<struct win::eisa_memory_configuration_t, 9>;                    
        using eisa_irq_t =    sdk::array<struct win::eisa_irq_configuration_t, 7>;                    
        using eisa_dma_t =    sdk::array<struct win::eisa_dma_configuration_t, 4>;                    
        using eisa_port_t =   sdk::array<struct win::eisa_port_configuration_t, 20>;                    
                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint32_t                compressed_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompressedId
        _m01 uint8_t                 id_slot_flags1;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .IdSlotFlags1
        _m02 uint8_t                 id_slot_flags2;       //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .IdSlotFlags2
        _m03 uint8_t                 minor_revision;       //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .MinorRevision
        _m04 uint8_t                 major_revision;       //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .MajorRevision
        _m05 sdk::array<uint8_t, 26> selections;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Selections
        _m06 uint8_t                 function_flags;       //{ +0x0022    +0x0022    +0x0022    +0x0022    +0x0022    } | .FunctionFlags
        _m07 sdk::array<uint8_t, 80> type_string;          //{ +0x0023    +0x0023    +0x0023    +0x0023    +0x0023    } | .TypeString
        _m08 eisa_memory_t           eisa_memory;          //{ +0x0073    +0x0073    +0x0073    +0x0073    +0x0073    } | .EisaMemory
        _m09 eisa_irq_t              eisa_irq;             //{ +0x00b2    +0x00b2    +0x00b2    +0x00b2    +0x00b2    } | .EisaIrq
        _m10 eisa_dma_t              eisa_dma;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .EisaDma
        _m11 eisa_port_t             eisa_port;            //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .EisaPort
        _m12 sdk::array<uint8_t, 60> initialization_data;  //{ +0x0104    +0x0104    +0x0104    +0x0104    +0x0104    } | .InitializationData
                                                         
        SDK_NONVOL_PROPERTIES( "_CM_EISA_FUNCTION_INFORMATION.$", 0x140, true, 0xc44d754f8cd82c50 );                    
        SDK_FIXED_SIZE( eisa_function_information_t, 0x140 );                    
    };                                                   
};
#include "magic/eisa_function_information_t.end.hpp"
SDK_VERIFY( struct cm::eisa_function_information_t, 0x140 );
