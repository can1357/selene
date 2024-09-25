#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/epilogue_dynamic_relocation_header_t.start.hpp"
namespace image
{
    // [struct _IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct epilogue_dynamic_relocation_header_t      
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t epilogue_count;                  //{ +0x0000    +0x0000    +0x0000    } | .EpilogueCount
        _m01 uint8_t  epilogue_byte_count;             //{ +0x0004    +0x0004    +0x0004    } | .EpilogueByteCount
        _m02 uint8_t  branch_descriptor_element_size;  //{ +0x0005    +0x0005    +0x0005    } | .BranchDescriptorElementSize
        _m03 uint16_t branch_descriptor_count;         //{ +0x0006    +0x0006    +0x0006    } | .BranchDescriptorCount
                                                     
        SDK_MAGIC_PROPERTIES( "_IMAGE_EPILOGUE_DYNAMIC_RELOCATION_HEADER.$", 0x8, true, 0x69646c2a34d9def1 );                               
        SDK_FIXED_SIZE( epilogue_dynamic_relocation_header_t, 0x8 );                               
    };                                               
};
#include "magic/epilogue_dynamic_relocation_header_t.end.hpp"
SDK_VERIFY( struct image::epilogue_dynamic_relocation_header_t, 0x8 );
