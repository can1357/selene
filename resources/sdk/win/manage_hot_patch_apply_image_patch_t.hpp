#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/manage_hot_patch_apply_image_patch_t.start.hpp"
namespace win
{
    // [struct _MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH]
    // => Windows 11
    //
    struct manage_hot_patch_apply_image_patch_t                     
    {                                                               
        union u0_flags_t                                            
        {                                                           
            // Windows 11                                           
            //                                                      
            _m01 uint1_t  apply_reverse_patches;                      //{ +0x0000@0  } | .ApplyReversePatches
            _m02 uint1_t  apply_forward_patches;                      //{ +0x0000@1  } | .ApplyForwardPatches
            _m03 uint1_t  undo_patch;                                 //{ +0x0000@2  } | .UndoPatch
            _m04 uint32_t all_flags;                                  //{ +0x0000    } | .AllFlags
                                                                    
            SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.Flags.$", 0x0, false, 0xb014862af91a83d5 );                                          
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                          
        };                                                          
                                                                    
        // Windows 11                                               
        //                                                          
        _m00 uint32_t                           version;              //{ +0x0000    } | .Version
        _m05 u0_flags_t                         flags;                //{ +0x0004    } | .Flags
        _m06 void*                              process_handle;       //{ +0x0008    } | .ProcessHandle
        _m07 void*                              base_image_address;   //{ +0x0010    } | .BaseImageAddress
        _m08 void*                              patch_image_address;  //{ +0x0018    } | .PatchImageAddress
                                                                    
        SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_APPLY_IMAGE_PATCH.$", 0x0, false, 0xdf89ccbee930022b );                    
        SDK_FIXED_SIZE( manage_hot_patch_apply_image_patch_t, 0x20 );                    
    };                                                              
};
#include "magic/manage_hot_patch_apply_image_patch_t.end.hpp"
SDK_VERIFY( union win::manage_hot_patch_apply_image_patch_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct win::manage_hot_patch_apply_image_patch_t, 0x20 );
