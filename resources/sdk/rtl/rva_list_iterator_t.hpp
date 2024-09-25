#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rva_list_iterator_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RVA_LIST_ITERATOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rva_list_iterator_t                   
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t current_rva;                 //{ +0x0000    +0x0000    +0x0000    } | .CurrentRva
        _m01 uint32_t current_rva_index;           //{ +0x0004    +0x0004    +0x0004    } | .CurrentRvaIndex
        _m02 uint32_t compressed_rva_data_offset;  //{ +0x0008    +0x0008    +0x0008    } | .CompressedRvaDataOffset
                                                 
        SDK_MAGIC_PROPERTIES( "_RTL_RVA_LIST_ITERATOR.$", 0xc, true, 0x5111fabc5934f837 );                           
        SDK_FIXED_SIZE( rva_list_iterator_t, 0xc );                           
    };                                           
};
#include "magic/rva_list_iterator_t.end.hpp"
SDK_VERIFY( struct rtl::rva_list_iterator_t, 0xc );
