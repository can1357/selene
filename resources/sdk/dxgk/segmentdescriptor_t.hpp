#pragma once
#include <sdkgen/support_library.hpp>
#include "segmentflags_t.hpp"

#include "magic/segmentdescriptor_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SEGMENTDESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct segmentdescriptor_t                                  
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 int64_t                     base_address;            //{ +0x0000    } | .BaseAddress
        _m01 int64_t                     cpu_translated_address;  //{ +0x0008    } | .CpuTranslatedAddress
        _m02 uint64_t                    size;                    //{ +0x0010    } | .Size
        _m03 uint32_t                    nb_of_banks;             //{ +0x0018    } | .NbOfBanks
        _m04 uint64_t*                   p_bank_range_table;      //{ +0x0020    } | .pBankRangeTable
        _m05 uint64_t                    commit_limit;            //{ +0x0028    } | .CommitLimit
        _m06 struct dxgk::segmentflags_t flags;                   //{ +0x0030    } | .Flags
                                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_SEGMENTDESCRIPTOR.$", 0x0, false, 0x7e59a971069c1e61 );                       
        SDK_FIXED_SIZE( segmentdescriptor_t, 0x38 );                       
    };                                                          
};
#include "magic/segmentdescriptor_t.end.hpp"
SDK_VERIFY( struct dxgk::segmentdescriptor_t, 0x38 );
