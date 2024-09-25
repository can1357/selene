#pragma once
#include <sdkgen/support_library.hpp>
#include "segmentflags_t.hpp"

#include "magic/segmentdescriptor3_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SEGMENTDESCRIPTOR3]
    // => WDK 10 (NV)
    //
    struct segmentdescriptor3_t                                    
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 struct dxgk::segmentflags_t flags;                      //{ +0x0000    } | .Flags
        _m01 int64_t                     base_address;               //{ +0x0008    } | .BaseAddress
        _m02 int64_t                     cpu_translated_address;     //{ +0x0010    } | .CpuTranslatedAddress
        _m03 uint64_t                    size;                       //{ +0x0018    } | .Size
        _m04 uint32_t                    nb_of_banks;                //{ +0x0020    } | .NbOfBanks
        _m05 uint64_t*                   p_bank_range_table;         //{ +0x0028    } | .pBankRangeTable
        _m06 uint64_t                    commit_limit;               //{ +0x0030    } | .CommitLimit
        _m07 uint64_t                    system_memory_end_address;  //{ +0x0038    } | .SystemMemoryEndAddress
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_SEGMENTDESCRIPTOR3.$", 0x0, false, 0x3dac3266139f4c44 );                          
        SDK_FIXED_SIZE( segmentdescriptor3_t, 0x48 );                          
    };                                                             
};
#include "magic/segmentdescriptor3_t.end.hpp"
SDK_VERIFY( struct dxgk::segmentdescriptor3_t, 0x48 );
