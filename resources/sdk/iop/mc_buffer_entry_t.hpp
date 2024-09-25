#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "mc_be_page_node_t.hpp"
#include "mc_buffer_entry_flags_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/mc_buffer_entry_t.start.hpp"
namespace iop
{
    // [struct _IOP_MC_BUFFER_ENTRY]
    // => Windows 11
    //
    struct mc_buffer_entry_t                                                
    {                                                                       
        // Windows 11                                                       
        //                                                                  
        _m00 uint16_t                                     type;               //{ +0x0000    } | .Type
        _m01 uint32_t                                     size;               //{ +0x0004    } | .Size
        _m02 int32_t                                      reference_count;    //{ +0x0008    } | .ReferenceCount
        _m03 enum iop::mc_buffer_entry_flags_t            flags;              //{ +0x000c    } | .Flags
        _m04 nt::list_entry_t                             global_data_link;   //{ +0x0010    } | .GlobalDataLink
        _m05 void*                                        address;            //{ +0x0020    } | .Address
        _m06 uint32_t                                     length;             //{ +0x0028    } | .Length
        _m07 char                                         access_mode;        //{ +0x002c    } | .AccessMode
        _m08 int32_t                                      mdl_ref;            //{ +0x0030    } | .MdlRef
        _m09 struct nt::mdl_t*                            mdl;                //{ +0x0038    } | .Mdl
        _m10 struct nt::kevent_t                          mdl_rundown_event;  //{ +0x0040    } | .MdlRundownEvent
        _m11 uint64_t*                                    pfn_array;          //{ +0x0058    } | .PfnArray
        _m12 sdk::array<struct iop::mc_be_page_node_t, 1> page_nodes;         //{ +0x0060    } | .PageNodes
                                                                            
        SDK_MAGIC_PROPERTIES( "_IOP_MC_BUFFER_ENTRY.$", 0x0, false, 0xd15f63c63218e0b9 );                  
        SDK_FIXED_SIZE( mc_buffer_entry_t, 0x80 );                          
    };                                                                      
};
#include "magic/mc_buffer_entry_t.end.hpp"
SDK_VERIFY( struct iop::mc_buffer_entry_t, 0x80 );
