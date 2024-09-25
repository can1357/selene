#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/coverage_sampler_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_COVERAGE_SAMPLER_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_sampler_information_t                                      
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                     
        _m00 enum etwi::information_class_t event_trace_information_class;       //{ +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint8_t                        coverage_sampler_information_class;  //{ +0x0004    +0x0004    +0x0004    } | .CoverageSamplerInformationClass
        _m02 uint8_t                        major_version;                       //{ +0x0005    +0x0005    +0x0005    } | .MajorVersion
        _m03 uint8_t                        minor_version;                       //{ +0x0006    +0x0006    +0x0006    } | .MinorVersion
        _m04 uint64_t                       sampler_handle;                      //{ +0x0008    +0x0008    +0x0008    } | .SamplerHandle
                                                                               
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_COVERAGE_SAMPLER_INFORMATION.$", 0x10, true, 0xf48416f4c9a9fbea );                                   
        SDK_FIXED_SIZE( coverage_sampler_information_t, 0x10 );                                   
    };                                                                         
};
#include "magic/coverage_sampler_information_t.end.hpp"
SDK_VERIFY( struct etwi::coverage_sampler_information_t, 0x10 );
