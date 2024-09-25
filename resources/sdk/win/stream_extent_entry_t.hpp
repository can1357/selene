#pragma once
#include <sdkgen/support_library.hpp>
#include "retrieval_pointers_buffer_t.hpp"

#include "magic/stream_extent_entry_t.start.hpp"
namespace win
{
    // [struct _STREAM_EXTENT_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct stream_extent_entry_t                                                               
    {                                                                                          
        union u0_extent_information_t                                                          
        {                                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
            //                                                                                 
            _m01 struct win::retrieval_pointers_buffer_t retrieval_pointers;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RetrievalPointers
                                                                                               
            SDK_NONVOL_PROPERTIES( "_STREAM_EXTENT_ENTRY.ExtentInformation.$", 0x20, true, 0x6aae1fd2d0edeb74 );                                      
            SDK_FIXED_SIZE( u0_extent_information_t, 0x20 );                                      
        };                                                                                     
                                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                                     
        _m00 uint32_t                                                       flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m02 u0_extent_information_t                                        extent_information;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ExtentInformation
                                                                                               
        SDK_NONVOL_PROPERTIES( "_STREAM_EXTENT_ENTRY.$", 0x28, true, 0x6aee215ba6aa2e89 );                   
        SDK_FIXED_SIZE( stream_extent_entry_t, 0x28 );                                         
    };                                                                                         
};
#include "magic/stream_extent_entry_t.end.hpp"
SDK_VERIFY( union win::stream_extent_entry_t::u0_extent_information_t, 0x20 );
SDK_VERIFY( struct win::stream_extent_entry_t, 0x28 );
