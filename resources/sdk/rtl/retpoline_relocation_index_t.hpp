#pragma once
#include <sdkgen/support_library.hpp>
#include "../image/switchtable_branch_dynamic_relocation_t.hpp"
#include "../image/indir_control_transfer_dynamic_relocation_t.hpp"
#include "../image/import_control_transfer_dynamic_relocation_t.hpp"

#include "magic/retpoline_relocation_index_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RETPOLINE_RELOCATION_INDEX]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct retpoline_relocation_index_t                                                                 
    {                                                                                                   
        union u0_straddle_reloc_t                                                                       
        {                                                                                               
            using image_import_control_transfer_dynamic_relocation_t = struct image::import_control_transfer_dynamic_relocation_t;                                        
            using import_t =                                           image_import_control_transfer_dynamic_relocation_t ;                                        
            using image_indir_control_transfer_dynamic_relocation_t =  struct image::indir_control_transfer_dynamic_relocation_t;                                        
            using indir_t =                                            image_indir_control_transfer_dynamic_relocation_t ;                                        
            using image_switchtable_branch_dynamic_relocation_t =      struct image::switchtable_branch_dynamic_relocation_t;                                        
                                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                                                          
            _m04 import_t                                       import;                                   //{ +0x0000    +0x0000    +0x0000    } | .Import
            _m05 indir_t                                        indir;                                    //{ +0x0000    +0x0000    +0x0000    } | .Indir
            _m06 image_switchtable_branch_dynamic_relocation_t  switch_jump;                              //{ +0x0000    +0x0000    +0x0000    } | .SwitchJump
                                                                                                        
            SDK_MAGIC_PROPERTIES( "_RTL_RETPOLINE_RELOCATION_INDEX.StraddleReloc.$", 0x4, true, 0x380c9ee83787260e );                                        
            SDK_FIXED_SIZE( u0_straddle_reloc_t, 0x4 );                                                 
        };                                                                                              
                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m00 uint16_t                                                       import_relocation_size;       //{ +0x0000    +0x0000    +0x0000    } | .ImportRelocationSize
        _m01 uint16_t                                                       indirect_relocation_size;     //{ +0x0002    +0x0002    +0x0002    } | .IndirectRelocationSize
        _m02 uint16_t                                                       switch_jump_relocation_size;  //{ +0x0004    +0x0004    +0x0004    } | .SwitchJumpRelocationSize
        _m03 uint16_t                                                       straddle_type;                //{ +0x0006    +0x0006    +0x0006    } | .StraddleType
        _m07 u0_straddle_reloc_t                                            straddle_reloc;               //{ +0x0008    +0x0008    +0x0008    } | .StraddleReloc
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_RTL_RETPOLINE_RELOCATION_INDEX.$", 0xc, true, 0xd1975793571f980 );                            
        SDK_FIXED_SIZE( retpoline_relocation_index_t, 0xc );                                            
    };                                                                                                  
};
#include "magic/retpoline_relocation_index_t.end.hpp"
SDK_VERIFY( union rtl::retpoline_relocation_index_t::u0_straddle_reloc_t, 0x4 );
SDK_VERIFY( struct rtl::retpoline_relocation_index_t, 0xc );
