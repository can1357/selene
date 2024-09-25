#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_ex_t.hpp"

namespace nt { struct mmsupport_instance_t; }

#include "magic/dynamic_bitmap_t.start.hpp"
namespace mi
{
    // [struct _MI_DYNAMIC_BITMAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_bitmap_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                     
        _m00 struct rtl::bitmap_ex_t          bitmap;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bitmap
        _m01 uint64_t                         maximum_size;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumSize
        _m02 uint64_t                         hint;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Hint
        _m03 void*                            base_va;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BaseVa
        _m04 uint64_t                         size_top_down;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SizeTopDown
        _m05 uint64_t                         hint_top_down;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HintTopDown
        _m06 void*                            base_va_top_down;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BaseVaTopDown
        _m07 uint64_t                         spin_lock;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SpinLock
                                                               
        // Windows 10 v1607                                    
        //                                                     
        _m08 struct nt::mmsupport_instance_t* vm;                //{ +0x0048    } | .Vm
                                                               
        SDK_MAGIC_PROPERTIES( "_MI_DYNAMIC_BITMAP.$", 0x48, true, 0xb1d4d8451ec45e71 );                 
        SDK_DYNAMIC_SIZE( dynamic_bitmap_t );                  
    };                                                         
};
#include "magic/dynamic_bitmap_t.end.hpp"
