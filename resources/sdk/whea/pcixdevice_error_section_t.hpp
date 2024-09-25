#pragma once
#include <sdkgen/support_library.hpp>
#include "error_status_t.hpp"
#include "pcixdevice_id_t.hpp"
#include "pcixdevice_register_pair_t.hpp"
#include "pcixdevice_error_section_validbits_t.hpp"

#include "magic/pcixdevice_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIXDEVICE_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcixdevice_error_section_t                                             
    {                                                                             
        using register_data_pairs_t = sdk::array<struct whea::pcixdevice_register_pair_t, 1>;                    
                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                        
        _m00 union whea::pcixdevice_error_section_validbits_t valid_bits;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 union whea::error_status_t                       error_status;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorStatus
        _m02 struct whea::pcixdevice_id_t                     id_info;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IdInfo
        _m03 uint32_t                                         memory_number;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MemoryNumber
        _m04 uint32_t                                         io_number;            //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .IoNumber
        _m05 register_data_pairs_t                            register_data_pairs;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .RegisterDataPairs
                                                                                  
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIXDEVICE_ERROR_SECTION.$", 0x38, true, 0xf6b898d4c23b4564 );                    
        SDK_FIXED_SIZE( pcixdevice_error_section_t, 0x38 );                       
    };                                                                            
};
#include "magic/pcixdevice_error_section_t.end.hpp"
SDK_VERIFY( struct whea::pcixdevice_error_section_t, 0x38 );
