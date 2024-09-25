#pragma once
#include <sdkgen/support_library.hpp>
#include "bitmap_ex_t.hpp"

#include "magic/rva_list_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RVA_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rva_list_t                                       
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                  
        _m00 uint64_t                rva_count;               //{ +0x0000    +0x0000    +0x0000    } | .RvaCount
        _m01 uint32_t                state_bits_per_rva;      //{ +0x0008    +0x0008    +0x0008    } | .StateBitsPerRva
        _m02 uint8_t*                compressed_buffer;       //{ +0x0010    +0x0010    +0x0010    } | .CompressedBuffer
        _m03 uint64_t                compressed_buffer_size;  //{ +0x0018    +0x0018    +0x0018    } | .CompressedBufferSize
        _m04 struct rtl::bitmap_ex_t rva_state_bit_map;       //{ +0x0020    +0x0020    +0x0020    } | .RvaStateBitMap
        _m05 uint32_t*               state_bit_value_map;     //{ +0x0030    +0x0030    +0x0030    } | .StateBitValueMap
        _m06 void*                   extension_buffer;        //{ +0x0038    +0x0038    +0x0038    } | .ExtensionBuffer
                                                            
        SDK_MAGIC_PROPERTIES( "_RTL_RVA_LIST.$", 0x40, true, 0xc3367daf8159e3b4 );                       
        SDK_FIXED_SIZE( rva_list_t, 0x40 );                       
    };                                                      
};
#include "magic/rva_list_t.end.hpp"
SDK_VERIFY( struct rtl::rva_list_t, 0x40 );
