#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/non_paged_debug_info_t.start.hpp"
namespace nt
{
    // [struct _NON_PAGED_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct non_paged_debug_info_t     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint16_t signature;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t flags;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 uint32_t size;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m03 uint16_t machine;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Machine
        _m04 uint16_t characteristics;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Characteristics
        _m05 uint32_t time_date_stamp;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeDateStamp
        _m06 uint32_t check_sum;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CheckSum
        _m07 uint32_t size_of_image;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SizeOfImage
        _m08 uint64_t image_base;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ImageBase
                                      
        SDK_MAGIC_PROPERTIES( "_NON_PAGED_DEBUG_INFO.$", 0x20, true, 0x299bc729d0f1832d );                
        SDK_DYNAMIC_SIZE( non_paged_debug_info_t );                
    };                                
};
#include "magic/non_paged_debug_info_t.end.hpp"
