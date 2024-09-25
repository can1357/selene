#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_ex_t.hpp"

namespace nt { struct mmvad_short_t; }

#include "magic/sub64k_free_ranges_t.start.hpp"
namespace mi
{
    // [struct _MI_SUB64K_FREE_RANGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct sub64k_free_ranges_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2               
        //                                            
        _m00 struct rtl::bitmap_ex_t   bit_map;         //{ +0x0000    +0x0000    +0x0000    } | .BitMap
        _m01 nt::list_entry_t          list_entry;      //{ +0x0010    +0x0010    +0x0010    } | .ListEntry
        _m02 struct nt::mmvad_short_t* vad;             //{ +0x0020    +0x0020    +0x0020    } | .Vad
        _m03 uint32_t                  set_bits;        //{ +0x002c    +0x0028    +0x0028    } | .SetBits
        _m04 varuint_t                 sub_list_index;  //{ +0x0028    +0x0030@0  +0x0030@0  } | .SubListIndex
        _m05 varuint_t                 hint;            //{ +0x002a    +0x0030@2  +0x0030@2  } | .Hint
                                                      
        // Windows 10 v2004, Windows 10 v20H2               
        //                                            
        _m06 uint32_t                  full_set_bits;   //{ +0x002c    +0x002c    } | .FullSetBits
                                                      
        SDK_MAGIC_PROPERTIES( "_MI_SUB64K_FREE_RANGES.$", 0x38, true, 0xf0feddf0b648a611 );               
        SDK_DYNAMIC_SIZE( sub64k_free_ranges_t );               
    };                                                
};
#include "magic/sub64k_free_ranges_t.end.hpp"
