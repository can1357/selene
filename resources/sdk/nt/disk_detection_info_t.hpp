#pragma once
#include <sdkgen/support_library.hpp>
#include "detection_type_t.hpp"
#include "disk_int13_info_t.hpp"
#include "disk_ex_int13_info_t.hpp"

#include "magic/disk_detection_info_t.start.hpp"
namespace nt
{
    // [struct _DISK_DETECTION_INFO]
    // => WDK 10 (NV)
    //
    struct disk_detection_info_t                                 
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                        size_of_detect_info;  //{ +0x0000    } | .SizeOfDetectInfo
        _m01 enum nt::detection_type_t       detection_type;       //{ +0x0004    } | .DetectionType
        _m02 struct nt::disk_int13_info_t    int13;                //{ +0x0008    } | .Int13
        _m03 struct nt::disk_ex_int13_info_t ex_int13;             //{ +0x0018    } | .ExInt13
                                                                 
        SDK_NONVOL_PROPERTIES( "_DISK_DETECTION_INFO.$", 0x0, false, 0xd638e2cb3a3050f6 );                    
        SDK_FIXED_SIZE( disk_detection_info_t, 0x38 );                    
    };                                                           
};
#include "magic/disk_detection_info_t.end.hpp"
SDK_VERIFY( struct nt::disk_detection_info_t, 0x38 );
