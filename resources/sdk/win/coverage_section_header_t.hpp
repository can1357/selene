#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_section_header_t.start.hpp"
namespace win
{
    // [struct _COVERAGE_SECTION_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_section_header_t                        
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                  
        _m00 uint32_t                signature;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                coverage_type;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CoverageType
        _m02 sdk::array<uint8_t, 16> md5_hash;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MD5Hash
        _m03 uint32_t                coverage_section_size;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CoverageSectionSize
        _m04 uint32_t                coverage_vector_size;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CoverageVectorSize
        _m05 uint32_t                coverage_vector_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CoverageVectorOffset
        _m06 uint32_t                extra_data_offset;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ExtraDataOffset
                                                            
        SDK_MAGIC_PROPERTIES( "_COVERAGE_SECTION_HEADER.$", 0x28, true, 0xc69cbc6fa8cb5962 );                       
        SDK_FIXED_SIZE( coverage_section_header_t, 0x28 );                       
    };                                                      
};
#include "magic/coverage_section_header_t.end.hpp"
SDK_VERIFY( struct win::coverage_section_header_t, 0x28 );
