#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/manage_hot_patch_query_active_patches_t.start.hpp"
namespace win
{
    struct hot_patch_image_info_t;

    // [struct _MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct manage_hot_patch_query_active_patches_t                      
    {                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                              
        _m00 uint32_t                            version;                 //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 void*                               process_handle;          //{ +0x0008    +0x0008    +0x0008    } | .ProcessHandle
        _m02 uint32_t                            patch_count;             //{ +0x0010    +0x0010    +0x0010    } | .PatchCount
        _m03 nt::unicode_view*                   patch_path_strings;      //{ +0x0018    +0x0018    +0x0018    } | .PatchPathStrings
        _m04 struct win::hot_patch_image_info_t* base_infos;              //{ +0x0020    +0x0020    +0x0020    } | .BaseInfos
                                                                        
        // Windows 11                                                   
        //                                                              
        _m05 uint32_t*                           patch_sequence_numbers;  //{ +0x0028    } | .PatchSequenceNumbers
                                                                        
        SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_QUERY_ACTIVE_PATCHES.$", 0x28, true, 0x2b1af668bb915c08 );                       
        SDK_DYNAMIC_SIZE( manage_hot_patch_query_active_patches_t );                       
    };                                                                  
};
#include "magic/manage_hot_patch_query_active_patches_t.end.hpp"
