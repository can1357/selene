#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_module_information_t.start.hpp"
namespace kaux
{
    // [struct _AUX_PROCESS_MODULE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_module_information_t                   
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 void*                    section;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Section
        _m01 void*                    mapped_base;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MappedBase
        _m02 void*                    image_base;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageBase
        _m03 uint32_t                 image_size;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ImageSize
        _m04 uint32_t                 flags;                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Flags
        _m05 uint16_t                 load_order_index;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LoadOrderIndex
        _m06 uint16_t                 init_order_index;     //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .InitOrderIndex
        _m07 uint16_t                 load_count;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .LoadCount
        _m08 uint16_t                 offset_to_file_name;  //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .OffsetToFileName
        _m09 sdk::array<uint8_t, 256> full_path_name;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FullPathName
                                                          
        SDK_MAGIC_PROPERTIES( "_AUX_PROCESS_MODULE_INFORMATION.$", 0x128, true, 0x69ecf5cd8ddd4594 );                    
        SDK_FIXED_SIZE( process_module_information_t, 0x128 );                    
    };                                                    
};
#include "magic/process_module_information_t.end.hpp"
SDK_VERIFY( struct kaux::process_module_information_t, 0x128 );
