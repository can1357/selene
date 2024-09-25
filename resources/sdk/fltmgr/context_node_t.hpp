#pragma once
#include <sdkgen/support_library.hpp>
#include "tree_node_t.hpp"
#include "fltp_workitem_t.hpp"

#include "magic/context_node_t.start.hpp"
namespace fltmgr
{
    struct flt_volume_t;
    struct flt_instance_t;
    struct file_list_ctrl_t;
    struct stream_list_ctrl_t;
    struct tx_context_extension_t;
    struct allocate_context_header_t;
    struct section_context_extension_t;

    // [struct _CONTEXT_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct context_node_t                                                             
    {                                                                                 
        union u0_attached_object_t                                                    
        {                                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                        
            _m04 struct fltmgr::flt_volume_t*       volume;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Volume
            _m05 struct fltmgr::flt_instance_t*     instance;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Instance
            _m06 struct fltmgr::stream_list_ctrl_t* stream_list;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamList
            _m07 struct fltmgr::file_list_ctrl_t*   file_list;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileList
            _m08 void*                              pointer;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Pointer
            _m09 uint64_t                           data;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
                                                                                      
            SDK_MAGIC_PROPERTIES( "_CONTEXT_NODE.AttachedObject.$", 0x8, true, 0xefb759d72f1a9480 );                                  
            SDK_FIXED_SIZE( u0_attached_object_t, 0x8 );                                  
        };                                                                            
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                            
        _m00 struct fltmgr::tx_context_extension_t*             tx_ctx_extension;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TxCtxExtension
        _m01 struct fltmgr::section_context_extension_t*        section_ctx_extension;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionCtxExtension
        _m02 void*                                              data;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
        _m03 struct fltmgr::allocate_context_header_t*          reg_info;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RegInfo
        _m10 u0_attached_object_t                               attached_object;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AttachedObject
        _m11 struct fltmgr::tree_node_t                         tree_link;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TreeLink
        _m12 struct fltmgr::fltp_workitem_t                     flt_work;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FltWork
        _m13 int32_t                                            use_count;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .UseCount
                                                                                      
        SDK_MAGIC_PROPERTIES( "_CONTEXT_NODE.$", 0x60, true, 0x59bc99f309216cf9 );                      
        SDK_FIXED_SIZE( context_node_t, 0x60 );                                       
    };                                                                                
};
#include "magic/context_node_t.end.hpp"
SDK_VERIFY( union fltmgr::context_node_t::u0_attached_object_t, 0x8 );
SDK_VERIFY( struct fltmgr::context_node_t, 0x60 );
