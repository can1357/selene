#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_PublishActivityAnnotations]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_publish_activity_annotations_t : uint8_t
    {                                                          
        none =              0x0,                                 // Windows 10 v2004, Windows 10 v20H2
        block_annotations = 0x1,                                 // Windows 10 v2004, Windows 10 v20H2
    };                                                         
};
