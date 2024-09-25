#pragma once
#include <sdkgen/support_library.hpp>
#include "pagedir_information_t.hpp"
#include "fileoffset_information_t.hpp"
#include "memory_frame_information_t.hpp"
#include "unique_process_information_t.hpp"

#include "magic/mmpfn_identity_t.start.hpp"
namespace win
{
    // [struct _MMPFN_IDENTITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpfn_identity_t                                                  
    {                                                                        
        union u0_u2_t                                                        
        {                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                              
            //                                                               
            _m05 uint1_t image;                                                //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Image
            _m06 uint1_t mismatch;                                             //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .Mismatch
            _m07 uint1_t combined_page;                                        //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .CombinedPage
            _m08 void*   file_object;                                          //{ +0x0000    +0x0000    +0x0000    } | .FileObject
            _m09 void*   unique_file_object_key;                               //{ +0x0000    +0x0000    +0x0000    } | .UniqueFileObjectKey
            _m10 void*   proto_pte_address;                                    //{ +0x0000    +0x0000    +0x0000    } | .ProtoPteAddress
            _m11 void*   virtual_address;                                      //{ +0x0000    +0x0000    +0x0000    } | .VirtualAddress
                                                                             
            SDK_MAGIC_PROPERTIES( "_MMPFN_IDENTITY.u2.$", 0x8, true, 0x9ae5ed5395aba24 );                                              
            SDK_FIXED_SIZE( u0_u2_t, 0x8 );                                              
        };                                                                   
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                   
        _m00 struct win::memory_frame_information_t   e1;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .e1
        _m01 struct win::fileoffset_information_t     e2;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .e2
        _m02 struct win::pagedir_information_t        e3;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .e3
        _m03 struct win::unique_process_information_t e4;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .e4
        _m04 uint64_t                                 page_frame_index;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PageFrameIndex
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                       
        //                                                                   
        _m12 u0_u2_t                                  u2;                      //{ +0x0010    +0x0010    +0x0010    } | .u2
                                                                             
        // Windows 11                                                        
        //                                                                   
        _m13 uint1_t                                  image;                   //{ +0x0010@0  } | .Image
        _m14 uint1_t                                  mismatch;                //{ +0x0010@1  } | .Mismatch
        _m15 uint1_t                                  combined_page;           //{ +0x0010@0  } | .CombinedPage
        _m16 void*                                    file_object;             //{ +0x0010    } | .FileObject
        _m17 void*                                    unique_file_object_key;  //{ +0x0010    } | .UniqueFileObjectKey
        _m18 void*                                    proto_pte_address;       //{ +0x0010    } | .ProtoPteAddress
        _m19 void*                                    virtual_address;         //{ +0x0010    } | .VirtualAddress
                                                                             
        SDK_MAGIC_PROPERTIES( "_MMPFN_IDENTITY.$", 0x18, true, 0xabe292884ab13447 );                       
        SDK_FIXED_SIZE( mmpfn_identity_t, 0x18 );                            
    };                                                                       
};
#include "magic/mmpfn_identity_t.end.hpp"
SDK_VERIFY( union win::mmpfn_identity_t::u0_u2_t, 0x8 );
SDK_VERIFY( struct win::mmpfn_identity_t, 0x18 );
