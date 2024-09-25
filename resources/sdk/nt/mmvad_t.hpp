#pragma once
#include <sdkgen/support_library.hpp>
#include "mmvad_short_t.hpp"
#include "mmvad_flags2_t.hpp"
#include "../mi/vad_sequential_info_t.hpp"

#include "magic/mmvad_t.start.hpp"
namespace nt
{
    struct mmpte_t;
    struct eprocess_t;
    struct subsection_t;
    struct file_object_t;
    struct mmextend_info_t;

    // [struct _MMVAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmvad_t                                                
    {                                                             
        using vad_flags2_t = sdk::variant<struct nt::mmvad_flags2_t, volatile struct nt::mmvad_flags2_t>;                    
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                        
        _m00 struct nt::mmvad_short_t         core;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Core
        _m01 uint32_t                         long_flags2;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LongFlags2
        _m02 vad_flags2_t                     vad_flags2;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .VadFlags2
        _m03 struct nt::subsection_t*         subsection;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Subsection
        _m04 struct nt::mmpte_t*              first_prototype_pte;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FirstPrototypePte
        _m05 struct nt::mmpte_t*              last_contiguous_pte;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LastContiguousPte
        _m06 nt::list_entry_t                 view_links;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ViewLinks
        _m07 struct nt::eprocess_t*           vads_process;         //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .VadsProcess
        _m08 struct mi::vad_sequential_info_t sequential_va;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SequentialVa
        _m09 struct nt::mmextend_info_t*      extended_info;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ExtendedInfo
        _m10 struct nt::file_object_t*        file_object;          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .FileObject
                                                                  
        SDK_MAGIC_PROPERTIES( "_MMVAD.$", 0x88, true, 0xef835f27585ebd09 );                    
        SDK_FIXED_SIZE( mmvad_t, 0x88 );                          
    };                                                            
};
#include "magic/mmvad_t.end.hpp"
SDK_VERIFY( struct nt::mmvad_t, 0x88 );
