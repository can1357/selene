#pragma once
#include <sdkgen/support_library.hpp>
#include "file_segment_element_t.hpp"

#include "magic/read_list_t.start.hpp"
namespace nt
{
    struct file_object_t;

    // [struct _READ_LIST]
    // => WDK 10 (NV)
    //
    struct read_list_t                                                         
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 struct nt::file_object_t*                       file_object;        //{ +0x0000    } | .FileObject
        _m01 uint32_t                                        number_of_entries;  //{ +0x0008    } | .NumberOfEntries
        _m02 uint32_t                                        is_image;           //{ +0x000c    } | .IsImage
        _m03 sdk::array<union nt::file_segment_element_t, 1> list;               //{ +0x0010    } | .List
                                                                               
        SDK_NONVOL_PROPERTIES( "_READ_LIST.$", 0x0, false, 0x1f19a56273fffa9 );                  
        SDK_FIXED_SIZE( read_list_t, 0x18 );                                   
    };                                                                         
};
#include "magic/read_list_t.end.hpp"
SDK_VERIFY( struct nt::read_list_t, 0x18 );
