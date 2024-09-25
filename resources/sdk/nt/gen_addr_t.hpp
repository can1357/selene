#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gen_addr_t.start.hpp"
namespace nt
{
    // [struct _GEN_ADDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gen_addr_t                 
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint8_t address_space_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AddressSpaceID
        _m01 uint8_t bit_width;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .BitWidth
        _m02 uint8_t bit_offset;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BitOffset
        _m03 uint8_t access_size;       //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .AccessSize
        _m04 int64_t address;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Address
                                      
        SDK_MAGIC_PROPERTIES( "_GEN_ADDR.$", 0xc, true, 0xd42733c3ab00c61f );                 
        SDK_FIXED_SIZE( gen_addr_t, 0xc );                 
    };                                
};
#include "magic/gen_addr_t.end.hpp"
SDK_VERIFY( struct nt::gen_addr_t, 0xc );
