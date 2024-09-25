#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"
#include "interrupt_line_type_t.hpp"
#include "interrupt_line_subtype_t.hpp"

#include "magic/interrupt_lines_t.start.hpp"
namespace nt
{
    struct interrupt_line_state_t;
    struct interrupt_line_internal_state_t;

    // [struct _INTERRUPT_LINES]
    // => Windows 11
    //
    struct interrupt_lines_t                                            
    {                                                                   
        // Windows 11                                                   
        //                                                              
        _m00 nt::list_entry_t                            list_entry;      //{ +0x0000    } | .ListEntry
        _m01 uint32_t                                    controller_id;   //{ +0x0010    } | .ControllerId
        _m02 int32_t                                     min_line;        //{ +0x0014    } | .MinLine
        _m03 int32_t                                     max_line;        //{ +0x0018    } | .MaxLine
        _m04 uint32_t                                    gsi_base;        //{ +0x001c    } | .GsiBase
        _m05 enum nt::interrupt_line_type_t              type;            //{ +0x0020    } | .Type
        _m06 enum nt::interrupt_line_subtype_t           sub_type;        //{ +0x0024    } | .SubType
        _m07 struct nt::interrupt_line_state_t*          state;           //{ +0x0028    } | .State
        _m08 struct nt::interrupt_line_internal_state_t* internal_state;  //{ +0x0030    } | .InternalState
        _m09 uint64_t                                    msi_address;     //{ +0x0038    } | .MsiAddress
        _m10 uint32_t                                    msi_data;        //{ +0x0040    } | .MsiData
        _m11 struct rtl::bitmap_t                        msi_in_use;      //{ +0x0048    } | .MsiInUse
                                                                        
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_LINES.$", 0x0, false, 0x46890c0f0ec0eb25 );               
        SDK_FIXED_SIZE( interrupt_lines_t, 0x58 );                      
    };                                                                  
};
#include "magic/interrupt_lines_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_lines_t, 0x58 );
