#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/sparse_array_t.hpp"
#include "../rtlp/hp_address_space_type_t.hpp"

#include "magic/vamgr_vaspace_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VAMGR_VASPACE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vamgr_vaspace_t                                            
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                            
        _m00 enum rtlp::hp_address_space_type_t address_space_type;     //{ +0x0000    +0x0000    +0x0000    } | .AddressSpaceType
        _m01 uint64_t                           base_address;           //{ +0x0008    +0x0008    +0x0008    } | .BaseAddress
        _m02 struct rtl::sparse_array_t         va_range_array;         //{ +0x0010    +0x0010    +0x0010    } | .VaRangeArray
        _m03 sdk::array<uint8_t, 2128>          va_range_array_buffer;  //{ +0x0010    +0x0010    +0x0010    } | .VaRangeArrayBuffer
                                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_VAMGR_VASPACE.$", 0x860, true, 0xf6899065f60e2d9e );                      
        SDK_FIXED_SIZE( vamgr_vaspace_t, 0x860 );                      
    };                                                                
};
#include "magic/vamgr_vaspace_t.end.hpp"
SDK_VERIFY( struct heap::vamgr_vaspace_t, 0x860 );
