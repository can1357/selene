#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/public_bcb_t.start.hpp"
namespace nt
{
    // [struct _PUBLIC_BCB]
    // => WDK 10 (NV)
    //
    struct public_bcb_t                  
    {                                    
        // WDK 10                        
        //                               
        _m00 int16_t  node_type_code;      //{ +0x0000    } | .NodeTypeCode
        _m01 int16_t  node_byte_size;      //{ +0x0002    } | .NodeByteSize
        _m02 uint32_t mapped_length;       //{ +0x0004    } | .MappedLength
        _m03 int64_t  mapped_file_offset;  //{ +0x0008    } | .MappedFileOffset
                                         
        SDK_NONVOL_PROPERTIES( "_PUBLIC_BCB.$", 0x0, false, 0x726759237dd44a41 );                   
        SDK_FIXED_SIZE( public_bcb_t, 0x10 );                   
    };                                   
};
#include "magic/public_bcb_t.end.hpp"
SDK_VERIFY( struct nt::public_bcb_t, 0x10 );
