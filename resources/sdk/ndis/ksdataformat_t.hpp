#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ksdataformat_t.start.hpp"
namespace ndis
{
    // [union KSDATAFORMAT]
    // => Windows 10 v1607
    //
    union ksdataformat_t                    
    {                                       
        // Windows 10 v1607                 
        //                                  
        _m00 uint32_t          format_size;   //{ +0x0000    } | .FormatSize
        _m01 uint32_t          flags;         //{ +0x0004    } | .Flags
        _m02 uint32_t          sample_size;   //{ +0x0008    } | .SampleSize
        _m03 struct nt::guid_t major_format;  //{ +0x0010    } | .MajorFormat
        _m04 struct nt::guid_t sub_format;    //{ +0x0020    } | .SubFormat
        _m05 struct nt::guid_t specifier;     //{ +0x0030    } | .Specifier
        _m06 int64_t           alignment;     //{ +0x0000    } | .Alignment
                                            
        SDK_MAGIC_PROPERTIES( "KSDATAFORMAT.$", 0x0, false, 0x541ede6fe23fc4ab );             
        SDK_FIXED_SIZE( ksdataformat_t, 0x40 );             
    };                                      
};
#include "magic/ksdataformat_t.end.hpp"
SDK_VERIFY( union ndis::ksdataformat_t, 0x40 );
